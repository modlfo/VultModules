
#include "VultModules.hpp"
#include "math.hpp"
#include "VultEngine.h"

struct Trummor : Module
{
   enum ParamIds
   {
      LEVEL1_PARAM,
      LEVEL2_PARAM,
      ENV1_A_PARAM,
      ENV1_H_PARAM,
      ENV1_R_PARAM,
      ENV2_A_PARAM,
      ENV2_H_PARAM,
      ENV2_R_PARAM,
      PITCH_PARAM,
      BEND_PARAM,
      NUM_PARAMS
   };
   enum InputIds
   {
      GATE_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      AUDIO_OUTPUT,
      PITCH_OUTPUT,
      NUM_OUTPUTS
   };

   VultEngine_trummor_type processor;

   Trummor();
   void step();
};

Trummor::Trummor() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS)
{
   params.resize(NUM_PARAMS);
   inputs.resize(NUM_INPUTS);
   outputs.resize(NUM_OUTPUTS);
   VultEngine_trummor_init(processor);
}

void Trummor::step()
{

   float gate = inputs[GATE_INPUT].value;

   VultEngine_trummor_param(processor, LEVEL1_PARAM, params[LEVEL1_PARAM].value);
   VultEngine_trummor_param(processor, LEVEL2_PARAM, params[LEVEL2_PARAM].value);

   VultEngine_trummor_param(processor, ENV1_A_PARAM, params[ENV1_A_PARAM].value);
   VultEngine_trummor_param(processor, ENV1_H_PARAM, params[ENV1_H_PARAM].value);
   VultEngine_trummor_param(processor, ENV1_R_PARAM, params[ENV1_R_PARAM].value);

   VultEngine_trummor_param(processor, ENV2_A_PARAM, params[ENV2_A_PARAM].value);
   VultEngine_trummor_param(processor, ENV2_H_PARAM, params[ENV2_H_PARAM].value);
   VultEngine_trummor_param(processor, ENV2_R_PARAM, params[ENV2_R_PARAM].value);

   VultEngine_trummor_param(processor, PITCH_PARAM, params[PITCH_PARAM].value);
   VultEngine_trummor_param(processor, BEND_PARAM, params[BEND_PARAM].value);

   _tuple___real_real_real_real__ out;
   VultEngine_trummor(processor, gate, out);

   outputs[AUDIO_OUTPUT].value = out.field_0 * 5.0;
   outputs[PITCH_OUTPUT].value = (out.field_1 - 0.3) * 10.0;
}

TrummorWidget::TrummorWidget()
{
   Trummor *module = new Trummor();
   setModule(module);
   box.size = Vec(300, 380);

   {
      SVGPanel *panel = new SVGPanel();
      panel->box.size = box.size;
      panel->setBackground(SVG::load(assetPlugin(plugin, "res/Trummor.svg")));
      addChild(panel);
   }
   addChild(createScrew<VultScrew>(Vec(15, 0)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 0)));
   addChild(createScrew<VultScrew>(Vec(15, 365)));
   addChild(createScrew<VultScrew>(Vec(box.size.x - 30, 365)));

   addParam(createParam<VultKnob>(Vec(242, 61), module, Trummor::LEVEL1_PARAM, 0.0, 1.0, 0.7));
   addParam(createParam<VultKnob>(Vec(242, 203), module, Trummor::LEVEL2_PARAM, 0.0, 1.0, 0.7));

   addParam(createParam<VultKnobAlt>(Vec(82, 72), module, Trummor::ENV1_A_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnobAlt>(Vec(135, 72), module, Trummor::ENV1_H_PARAM, 0.0, 1.0, 0.5));
   addParam(createParam<VultKnobAlt>(Vec(188, 72), module, Trummor::ENV1_R_PARAM, 0.0, 1.0, 0.5));

   addParam(createParam<VultKnobAlt>(Vec(82, 213), module, Trummor::ENV2_A_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnobAlt>(Vec(135, 213), module, Trummor::ENV2_H_PARAM, 0.0, 1.0, 0.5));
   addParam(createParam<VultKnobAlt>(Vec(188, 213), module, Trummor::ENV2_R_PARAM, 0.0, 1.0, 0.5));

   addParam(createParam<VultKnob>(Vec(18, 61), module, Trummor::PITCH_PARAM, 0.0, 0.3, 0.5));
   addParam(createParam<VultKnob>(Vec(18, 130), module, Trummor::BEND_PARAM, 0.0, 1.0, 0.0));

   addInput(createInput<VultJack>(Vec(26, 325), module, Trummor::GATE_INPUT));
   addOutput(createOutput<VultJack>(Vec(251, 325), module, Trummor::AUDIO_OUTPUT));

   addOutput(createOutput<VultJack>(Vec(139, 132), module, Trummor::PITCH_OUTPUT));
}
