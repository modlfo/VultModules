
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

Rescomb::Rescomb()
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

   addChild(createScrew<ScrewSilver>(Vec(15, 0)));
   addChild(createScrew<ScrewSilver>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<ScrewSilver>(Vec(15, 365)));
   addChild(createScrew<ScrewSilver>(Vec(box.size.x - 30, 365)));

   addParam(createParam<Davies1900hBlackKnob>(Vec(30, 85), module, Rescomb::TUNE_PARAM, -0.4, 0.4, 0.0));
   addParam(createParam<Davies1900hBlackKnob>(Vec(30, 160), module, Rescomb::COMB_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<Davies1900hBlackKnob>(Vec(30, 235), module, Rescomb::FEEDBACK_PARAM, 0.0, 1.1, 0.0));

   addParam(createParam<Trimpot>(Vec(101, 165), module, Rescomb::COMB_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<Trimpot>(Vec(101, 240), module, Rescomb::FEEDBACK_AMT_PARAM, -1.0, 1.0, 0.0));

   addInput(createInput<PJ301MPort>(Vec(96, 90), module, Rescomb::PITCH_INPUT));
   addInput(createInput<PJ301MPort>(Vec(96, 188), module, Rescomb::COMB_INPUT));
   addInput(createInput<PJ301MPort>(Vec(96, 264), module, Rescomb::FEEDBACK_INPUT));

   addInput(createInput<PJ301MPort>(Vec(30, 320), module, Rescomb::AUDIO_INPUT));
   addOutput(createOutput<PJ301MPort>(Vec(95, 320), module, Rescomb::AUDIO_OUTPUT));
}
