
#include "VultModules.hpp"
#include "math.hpp"
#include "VultEngine.h"

struct Tohe : Module
{
   enum ParamIds
   {
      TONE_PARAM,
      TONE_AMT_PARAM,
      NUM_PARAMS
   };
   enum InputIds
   {
      AUDIO_INPUT,
      TONE_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      AUDIO_OUTPUT,
      NUM_OUTPUTS
   };

   VultEngine_tohe_type processor;

   Tohe();
   void step();
};

Tohe::Tohe() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS)
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
   VultEngine_tohe_init(processor);
}

void Tohe::step()
{

   float audio = inputs[AUDIO_INPUT].value;

   float tone_knob = params[TONE_PARAM].value;
   float tone_cv = inputs[TONE_INPUT].value / 5.0;
   float tone_amt = params[TONE_AMT_PARAM].value;
   float tone = tone_knob + tone_amt * tone_cv;

   float out = VultEngine_tohe(processor, audio, tone);

   outputs[AUDIO_OUTPUT].value = out;
}

ToheWidget::ToheWidget()
{
   Tohe *module = new Tohe();
   setModule(module);
   box.size = Vec(15 * 4, 380);

   {
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->setBackground(SVG::load(assetPlugin(plugin, "res/Tohe.svg")));
      addChild(panel);
   }

   addChild(createScrew<VultScrew>(Vec(23, 0)));
   addChild(createScrew<VultScrew>(Vec(23, 365)));

   addParam(createParam<VultKnob>(Vec(10, 88), module, Tohe::TONE_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(21, 158), module, Tohe::TONE_AMT_PARAM, -1.0, 1.0, 0.0));
   addInput(createInput<VultJack>(Vec(18, 183), module, Tohe::TONE_INPUT));
   addInput(createInput<VultJack>(Vec(17, 228), module, Tohe::AUDIO_INPUT));
   addOutput(createOutput<VultJack>(Vec(17, 274), module, Tohe::AUDIO_OUTPUT));
}
