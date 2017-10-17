
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
      DRIVE_PARAM,
      TONE_PARAM,
      SEL_OSC_PARAM,
      SEL_NOISE_PARAM,
      NUM_PARAMS
   };
   enum InputIds
   {
      GATE_INPUT,
      OSC_INPUT,
      NOISE_INPUT,
      NUM_INPUTS
   };
   enum OutputIds
   {
      AUDIO_OUTPUT,
      PITCH_OUTPUT,
      ENV1_OUTPUT,
      ENV2_OUTPUT,
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
   VultEngine_trummor_param(processor, DRIVE_PARAM, params[DRIVE_PARAM].value);

   VultEngine_trummor_param(processor, TONE_PARAM, params[TONE_PARAM].value);

   VultEngine_trummor_param(processor, SEL_OSC_PARAM, params[SEL_OSC_PARAM].value);
   VultEngine_trummor_param(processor, SEL_NOISE_PARAM, params[SEL_NOISE_PARAM].value);

   _tuple___real_real_real_real__ out;
   VultEngine_trummor(processor, inputs[GATE_INPUT].value / 10.0, inputs[OSC_INPUT].value / 10.0, inputs[NOISE_INPUT].value / 10.0, out);

   outputs[AUDIO_OUTPUT].value = out.field_0 * 10.0;
   outputs[PITCH_OUTPUT].value = (out.field_1 - 0.3) * 10.0;
   outputs[ENV1_OUTPUT].value = out.field_2 * 10.0;
   outputs[ENV2_OUTPUT].value = out.field_3 * 10.0;
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

   addParam(createParam<VultKnob>(Vec(88, 196), module, Trummor::LEVEL1_PARAM, 0.0, 1.0, 0.7));
   addParam(createParam<VultKnob>(Vec(230, 196), module, Trummor::LEVEL2_PARAM, 0.0, 1.0, 0.1));

   addParam(createParam<VultKnobAlt>(Vec(17, 142), module, Trummor::ENV1_A_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnobAlt>(Vec(63, 142), module, Trummor::ENV1_H_PARAM, 0.0, 1.0, 0.2));
   addParam(createParam<VultKnobAlt>(Vec(110, 142), module, Trummor::ENV1_R_PARAM, 0.0, 1.0, 0.2));

   addParam(createParam<VultKnobAlt>(Vec(160, 142), module, Trummor::ENV2_A_PARAM, 0.0, 1.0, 0.0));
   addParam(createParam<VultKnobAlt>(Vec(206, 142), module, Trummor::ENV2_H_PARAM, 0.0, 1.0, 0.05));
   addParam(createParam<VultKnobAlt>(Vec(252, 142), module, Trummor::ENV2_R_PARAM, 0.0, 1.0, 0.05));

   addParam(createParam<VultKnobAlt>(Vec(17, 85), module, Trummor::PITCH_PARAM, -0.1, 0.3, 0.0));
   addParam(createParam<VultKnobAlt>(Vec(63, 85), module, Trummor::BEND_PARAM, -1.0, 1.0, 0.5));
   addParam(createParam<VultKnobAlt>(Vec(110, 85), module, Trummor::DRIVE_PARAM, 0.0, 4.0, 0.0));

   addParam(createParam<VultKnobAlt>(Vec(206, 85), module, Trummor::TONE_PARAM, -1.0, 1.0, -0.7));

   addParam(createParam<VultSelector3>(Vec(25, 203), module, Trummor::SEL_OSC_PARAM, 0.0, 2.0, 0.0));
   addParam(createParam<VultSelector3>(Vec(170, 203), module, Trummor::SEL_NOISE_PARAM, 0.0, 2.0, 0.0));

   addInput(createInput<VultJack>(Vec(63, 313), module, Trummor::GATE_INPUT));

   addInput(createInput<VultJack>(Vec(20, 255), module, Trummor::OSC_INPUT));
   addInput(createInput<VultJack>(Vec(188, 255), module, Trummor::NOISE_INPUT));

   addOutput(createOutput<VultJack>(Vec(213, 315), module, Trummor::AUDIO_OUTPUT));

   addOutput(createOutput<VultJack>(Vec(112, 255), module, Trummor::PITCH_OUTPUT));

   addOutput(createOutput<VultJack>(Vec(67, 255), module, Trummor::ENV1_OUTPUT));
   addOutput(createOutput<VultJack>(Vec(238, 255), module, Trummor::ENV2_OUTPUT));
}
