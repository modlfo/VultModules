
#include "VultModules.hpp"
#include "math.hpp"
#include "VultEngine.h"

struct Debriatus : Module
{
   enum ParamIds
   {
      FOLD_PARAM,
      CRUSH_PARAM,
      DISTORT_PARAM,
      SATURATE_PARAM,
      FOLD_AMT_PARAM,
      CRUSH_AMT_PARAM,
      DISTORT_AMT_PARAM,
      SATURATE_AMT_PARAM,
      NUM_PARAMS
   };
   enum InputIds
   {
      AUDIO_INPUT,
      FOLD_INPUT,
      CRUSH_INPUT,
      DISTORT_INPUT,
      SATURATE_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      AUDIO_OUTPUT,
      NUM_OUTPUTS
   };

   Debriatus();
   void step();
};

Debriatus::Debriatus() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS)
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
}

void Debriatus::step()
{

   float audio = inputs[AUDIO_INPUT].value / 5.0;

   float fold_knob = params[FOLD_PARAM].value;
   float fold_cv = inputs[FOLD_INPUT].value / 5.0;
   float fold_amt = params[FOLD_AMT_PARAM].value;
   float fold = fold_knob + fold_amt * fold_cv;

   float crush_knob = params[CRUSH_PARAM].value;
   float crush_cv = inputs[CRUSH_INPUT].value / 5.0;
   float crush_amt = params[CRUSH_AMT_PARAM].value;
   float crush = crush_knob + crush_amt * crush_cv;

   float distort_knob = params[DISTORT_PARAM].value;
   float distort_cv = inputs[DISTORT_INPUT].value / 5.0;
   float distort_amt = params[DISTORT_AMT_PARAM].value;
   float distort = distort_knob + distort_amt * distort_cv;

   float saturate_knob = params[SATURATE_PARAM].value;
   float saturate_cv = inputs[SATURATE_INPUT].value / 5.0;
   float saturate_amt = params[SATURATE_AMT_PARAM].value;
   float saturate = saturate_knob + saturate_amt * saturate_cv;

   float out = VultEngine_debriatus(audio, fold, crush, distort, saturate);

   outputs[AUDIO_OUTPUT].value = out * 5.0;
}

DebriatusWidget::DebriatusWidget()
{
   Debriatus *module = new Debriatus();
   setModule(module);
   box.size = Vec(15 * 10, 380);

   {
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->setBackground(SVG::load(assetPlugin(plugin, "res/Debriatus.svg")));
      addChild(panel);
   }
   addChild(createScrew<VultScrew>(Vec(15, 0)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<VultScrew>(Vec(15, 365)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 365)));

   addParam(createParam<VultKnob>(Vec(30, 52), module, Debriatus::FOLD_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnob>(Vec(30, 118), module, Debriatus::CRUSH_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnob>(Vec(30, 185), module, Debriatus::DISTORT_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnob>(Vec(30, 252), module, Debriatus::SATURATE_PARAM, 0.0, 1.0, 0.0));

   addParam(createParam<VultKnobSmall>(Vec(104, 52), module, Debriatus::FOLD_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(104, 118), module, Debriatus::CRUSH_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(104, 185), module, Debriatus::DISTORT_AMT_PARAM, -1.0, 1.0, 0.0));
   addParam(createParam<VultKnobSmall>(Vec(104, 252), module, Debriatus::SATURATE_AMT_PARAM, -1.0, 1.0, 0.0));

   addInput(createInput<VultJack>(Vec(101, 77), module, Debriatus::FOLD_INPUT));
   addInput(createInput<VultJack>(Vec(101, 143), module, Debriatus::CRUSH_INPUT));
   addInput(createInput<VultJack>(Vec(101, 210), module, Debriatus::DISTORT_INPUT));
   addInput(createInput<VultJack>(Vec(101, 277), module, Debriatus::SATURATE_INPUT));

   addInput(createInput<VultJack>(Vec(27, 318), module, Debriatus::AUDIO_INPUT));
   addOutput(createOutput<VultJack>(Vec(101, 318), module, Debriatus::AUDIO_OUTPUT));
}
