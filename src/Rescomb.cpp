
#include "VultModules.hpp"
#include "math.hpp"
#include "VultEngine.h"

struct Rescomb : Module
{
   enum ParamIds
   {
      TUNE_PARAM,
      COMB_PARAM,
      FEEDBACK_PARAM,
      COMB_AMT_PARAM,
      FEEDBACK_AMT_PARAM,
      NUM_PARAMS
   };
   enum InputIds
   {
      PITCH_INPUT,
      AUDIO_INPUT,
      COMB_INPUT,
      FEEDBACK_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      AUDIO_OUTPUT,
      NUM_OUTPUTS
   };

   VultEngine_rescomb_type processor;

   Rescomb();
   void step();
};

Rescomb::Rescomb() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS)
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
   VultEngine_rescomb_init(processor);
}

void Rescomb::step()
{
   float pitch = inputs[PITCH_INPUT].value / 10.0;
   float tune = params[TUNE_PARAM].value;

   float audio = inputs[AUDIO_INPUT].value / 5.0;

   float comb_cv = inputs[COMB_INPUT].value / 5.0;
   float comb_p = params[COMB_PARAM].value;
   float comb_amt = params[COMB_AMT_PARAM].value;

   float feedback_cv = inputs[FEEDBACK_INPUT].value / 5.0;
   float feedback_p = params[FEEDBACK_PARAM].value;
   float feedback_amt = params[FEEDBACK_AMT_PARAM].value;

   float comb = comb_p + comb_cv * comb_amt;

   float feedback = feedback_p + feedback_cv * feedback_amt;

   float out = VultEngine_rescomb(processor, audio, pitch + tune, comb, feedback);

   outputs[AUDIO_OUTPUT].value = out * 5.0;
}

RescombWidget::RescombWidget()
{
   Rescomb *module = new Rescomb();
   setModule(module);
   box.size = Vec(15 * 10, 380);

   {
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->setBackground(SVG::load(assetPlugin(plugin, "res/Rescomb.svg")));
      addChild(panel);
   }

   addChild(createScrew<VultScrew>(Vec(15, 0)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<VultScrew>(Vec(15, 365)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 365)));

   addParam(createParam<VultKnob>(Vec(30, 78), module, Rescomb::TUNE_PARAM, -0.4, 0.4, 0.0));
   addParam(createParam<VultKnob>(Vec(30, 158), module, Rescomb::COMB_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnob>(Vec(30, 238), module, Rescomb::FEEDBACK_PARAM, 0.0, 1.1, 0.0));

   addParam(createParam<VultKnobSmall>(Vec(103, 158), module, Rescomb::COMB_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(103, 238), module, Rescomb::FEEDBACK_AMT_PARAM, -1.0, 1.0, 0.0));

   addInput(createInput<VultJack>(Vec(101, 85), module, Rescomb::PITCH_INPUT));
   addInput(createInput<VultJack>(Vec(101, 183), module, Rescomb::COMB_INPUT));
   addInput(createInput<VultJack>(Vec(101, 263), module, Rescomb::FEEDBACK_INPUT));

   addInput(createInput<VultJack>(Vec(27, 318), module, Rescomb::AUDIO_INPUT));
   addOutput(createOutput<VultJack>(Vec(101, 318), module, Rescomb::AUDIO_OUTPUT));
}
