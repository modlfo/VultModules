
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
   float pitch = getf(inputs[PITCH_INPUT]) / 10.0;
   float tune = params[TUNE_PARAM];

   float audio = getf(inputs[AUDIO_INPUT]) / 5.0;

   float comb_cv = getf(inputs[COMB_INPUT]) / 5.0;
   float comb_p = params[COMB_PARAM];
   float comb_amt = params[COMB_AMT_PARAM];

   float feedback_cv = getf(inputs[FEEDBACK_INPUT]) / 5.0;
   float feedback_p = params[FEEDBACK_PARAM];
   float feedback_amt = params[FEEDBACK_AMT_PARAM];

   float comb = comb_p + comb_cv * comb_amt;

   float feedback = feedback_p + feedback_cv * feedback_amt;

   float out = VultEngine_rescomb(processor, audio, pitch + tune, comb, feedback);

   if (outputs[AUDIO_OUTPUT])
      *outputs[AUDIO_OUTPUT] = out * 5.0;
}

RescombWidget::RescombWidget()
{
   Rescomb *module = new Rescomb();
   setModule(module);
   box.size = Vec(15 * 10, 380);

   /*{
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->addBackground(SVG::load("plugins/VultModules/res/Rescomb.svg"));
      addChild(panel);
   }*/
   {
      Panel *panel = new LightPanel();
      panel->box.size = box.size;
      panel->backgroundImage = Image::load("plugins/VultModules/res/Rescomb.png");
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
