
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

Stabile::Stabile()
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
   VultEngine_stabile_init(processor);
}

void Stabile::step()
{

   float audio = getf(inputs[AUDIO_INPUT]) / 5.0;

   /*float pitch = getf(inputs[PITCH_INPUT]) / 10.0;
   float tune = params[TUNE_PARAM];


   float comb_cv = getf(inputs[COMB_INPUT]) / 5.0;
   float comb_p = params[COMB_PARAM];
   float comb_amt = params[COMB_AMT_PARAM];

   float feedback_cv = getf(inputs[FEEDBACK_INPUT]) / 5.0;
   float feedback_p = params[FEEDBACK_PARAM];
   float feedback_amt = params[FEEDBACK_AMT_PARAM];

   float comb = comb_p + comb_cv * comb_amt;

   float feedback = feedback_p + feedback_cv * feedback_amt;

   float out = VultEngine_stabile(processor, audio, pitch + tune, comb, feedback);

   if (outputs[AUDIO_OUTPUT])
      *outputs[AUDIO_OUTPUT] = out * 5.0;*/

   float cutoff_knob = params[CUTOFF_PARAM];
   float cutoff_cv = getf(inputs[CUTOFF_INPUT]) / 5.0;
   float cutoff_amt = params[CUTOFF_AMT_PARAM];
   float cutoff = cutoff_knob + cutoff_amt * cutoff_cv;

   float resonance_knob = params[RESONANCE_PARAM];

   _tuple___real_real_real__ out;
   VultEngine_stabile(processor, audio / 5.0, cutoff, resonance_knob, out);

   if (outputs[LP_OUTPUT])
      *outputs[LP_OUTPUT] = out.field_0 * 5.0;

   if (outputs[BP_OUTPUT])
      *outputs[BP_OUTPUT] = out.field_1 * 5.0;

   if (outputs[HP_OUTPUT])
      *outputs[HP_OUTPUT] = out.field_2 * 5.0;
}

StabileWidget::StabileWidget()
{
   Stabile *module = new Stabile();
   setModule(module);
   box.size = Vec(15 * 10, 380);

   /*{
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->addBackground(SVG::load("plugins/VultModules/res/Stabile.svg"));
      addChild(panel);
   }*/
   {
      Panel *panel = new LightPanel();
      panel->box.size = box.size;
      panel->backgroundImage = Image::load("plugins/VultModules/res/Stabile.png");
      addChild(panel);
   }
   addChild(createScrew<ScrewSilver>(Vec(15, 0)));
   addChild(createScrew<ScrewSilver>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<ScrewSilver>(Vec(15, 365)));
   addChild(createScrew<ScrewSilver>(Vec(box.size.x - 30, 365)));

   addParam(createParam<Davies1900hLargeBlackKnob>(Vec(28, 94), module, Stabile::CUTOFF_PARAM, 0.0, 1.0, 0.5));
   addParam(createParam<Davies1900hBlackKnob>(Vec(30, 186), module, Stabile::RESONANCE_PARAM, 0.0, 4.0, 0.0));

   addParam(createParam<Trimpot>(Vec(101, 100), module, Stabile::CUTOFF_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<Trimpot>(Vec(101, 188), module, Stabile::RESONANCE_AMT_PARAM, -1.0, 1.0, 0.0));

   addInput(createInput<PJ301MPort>(Vec(97, 130), module, Stabile::CUTOFF_INPUT));
   addInput(createInput<PJ301MPort>(Vec(97, 210), module, Stabile::RESONANCE_INPUT));

   addInput(createInput<PJ301MPort>(Vec(60, 320), module, Stabile::AUDIO_INPUT));

   addOutput(createOutput<PJ301MPort>(Vec(22, 264), module, Stabile::LP_OUTPUT));
   addOutput(createOutput<PJ301MPort>(Vec(64, 264), module, Stabile::BP_OUTPUT));
   addOutput(createOutput<PJ301MPort>(Vec(106, 264), module, Stabile::HP_OUTPUT));
}
