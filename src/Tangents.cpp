
#include "VultModules.hpp"
#include "math.hpp"
#include "VultEngine.h"

struct Tangents : Module
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
      LP_INPUT,
      BP_INPUT,
      HP_INPUT,
      CUTOFF_INPUT,
      RESONANCE_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      AUDIO_OUTPUT,
      NUM_OUTPUTS
   };

   VultEngine_tangents_type processor;

   Tangents();
   void step();
};

Tangents::Tangents() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS)
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
   VultEngine_tangents_init(processor);
}

void Tangents::step()
{

   float lp = inputs[LP_INPUT].value / 15.0;
   float bp = inputs[BP_INPUT].value / 15.0;
   float hp = inputs[HP_INPUT].value / 15.0;

   float cutoff_knob = params[CUTOFF_PARAM].value;
   float cutoff_cv = inputs[CUTOFF_INPUT].value / 5.0;
   float cutoff_amt = params[CUTOFF_AMT_PARAM].value;
   float cutoff = cutoff_knob + cutoff_amt * cutoff_cv;

   float resonance_knob = params[RESONANCE_PARAM].value;
   float resonance_cv = inputs[RESONANCE_INPUT].value / 5.0;
   float resonance_amt = params[RESONANCE_AMT_PARAM].value;
   float resonance = resonance_knob + resonance_amt * resonance_cv;

   float out = VultEngine_tangents(processor, lp, bp, hp, cutoff, resonance);

   outputs[AUDIO_OUTPUT].value = out * 15.0;
}

TangentsWidget::TangentsWidget()
{
   Tangents *module = new Tangents();
   setModule(module);
   box.size = Vec(15 * 10, 380);

   {
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->setBackground(SVG::load(assetPlugin(plugin, "res/Tangents.svg")));
      addChild(panel);
   }
   addChild(createScrew<VultScrew>(Vec(15, 0)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<VultScrew>(Vec(15, 365)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 365)));

   addParam(createParam<VultKnobBig>(Vec(25, 75), module, Tangents::CUTOFF_PARAM, 0.0, 0.85, 0.85 / 2.0));
   addParam(createParam<VultKnob>(Vec(34, 173), module, Tangents::RESONANCE_PARAM, 0.0, 1.0, 0.0));

   addParam(createParam<VultKnobSmall>(Vec(108, 82), module, Tangents::CUTOFF_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(108, 173), module, Tangents::RESONANCE_AMT_PARAM, -1.0, 1.0, 0.0));

   addInput(createInput<VultJack>(Vec(105, 107), module, Tangents::CUTOFF_INPUT));
   addInput(createInput<VultJack>(Vec(105, 198), module, Tangents::RESONANCE_INPUT));

   addInput(createInput<VultJack>(Vec(21, 313), module, Tangents::LP_INPUT));
   addInput(createInput<VultJack>(Vec(63, 313), module, Tangents::BP_INPUT));
   addInput(createInput<VultJack>(Vec(105, 313), module, Tangents::HP_INPUT));

   addOutput(createOutput<VultJack>(Vec(63, 248), module, Tangents::AUDIO_OUTPUT));
}
