
#include "VultModules.hpp"
#include "math.hpp"
#include "VultEngine.h"

struct Stabile : Module
{
   enum ParamIds
   {
      CUTOFF_PARAM,
      RESONANCE_PARAM,
      CUTOFF_AMT_PARAM,
      RESONANCE_AMT_PARAM,
      NUM_PARAMS
   };
   enum InputIds
   {
      AUDIO_INPUT,
      CUTOFF_INPUT,
      RESONANCE_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      LP_OUTPUT,
      BP_OUTPUT,
      HP_OUTPUT,
      NUM_OUTPUTS
   };

   VultEngine_stabile_type processor;

   Stabile();
   void step();
};

Stabile::Stabile() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS)
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
   VultEngine_stabile_init(processor);
}

void Stabile::step()
{

   float audio = inputs[AUDIO_INPUT].value / 5.0;

   float cutoff_knob = params[CUTOFF_PARAM].value;
   float cutoff_cv = inputs[CUTOFF_INPUT].value / 5.0;
   float cutoff_amt = params[CUTOFF_AMT_PARAM].value;
   float cutoff = cutoff_knob + cutoff_amt * cutoff_cv;

   float resonance_knob = params[RESONANCE_PARAM].value;
   float resonance_cv = inputs[RESONANCE_INPUT].value / 5.0;
   float resonance_amt = params[RESONANCE_AMT_PARAM].value;
   float resonance = resonance_knob + resonance_amt * resonance_cv;

   _tuple___real_real_real__ out;
   VultEngine_stabile(processor, audio, cutoff, resonance, out);

   outputs[LP_OUTPUT].value = out.field_0 * 5.0;

   outputs[BP_OUTPUT].value = out.field_1 * 5.0;

   outputs[HP_OUTPUT].value = out.field_2 * 5.0;
}

StabileWidget::StabileWidget()
{
   Stabile *module = new Stabile();
   setModule(module);
   box.size = Vec(15 * 10, 380);

   {
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->setBackground(SVG::load(assetPlugin(plugin, "res/Stabile.svg")));
      addChild(panel);
   }

   addChild(createScrew<VultScrew>(Vec(15, 0)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<VultScrew>(Vec(15, 365)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 365)));

   addParam(createParam<VultKnobBig>(Vec(25, 75), module, Stabile::CUTOFF_PARAM, 0.0, 1.0, 0.5));
   addParam(createParam<VultKnob>(Vec(34, 173), module, Stabile::RESONANCE_PARAM, 0.0, 4.0, 0.0));

   addParam(createParam<VultKnobSmall>(Vec(108, 82), module, Stabile::CUTOFF_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(108, 173), module, Stabile::RESONANCE_AMT_PARAM, -1.0, 1.0, 0.0));

   addInput(createInput<VultJack>(Vec(105, 107), module, Stabile::CUTOFF_INPUT));
   addInput(createInput<VultJack>(Vec(105, 198), module, Stabile::RESONANCE_INPUT));

   addInput(createInput<VultJack>(Vec(60, 318), module, Stabile::AUDIO_INPUT));

   addOutput(createOutput<VultJack>(Vec(22, 253), module, Stabile::LP_OUTPUT));
   addOutput(createOutput<VultJack>(Vec(64, 253), module, Stabile::BP_OUTPUT));
   addOutput(createOutput<VultJack>(Vec(102, 253), module, Stabile::HP_OUTPUT));
}
