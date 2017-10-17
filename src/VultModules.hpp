#include "rack.hpp"

using namespace rack;

extern Plugin *plugin;

struct VultKnobBig : SVGKnob
{
   VultKnobBig()
   {
      box.size = Vec(60, 60);
      minAngle = -0.75 * M_PI;
      maxAngle = 0.75 * M_PI;
      setSVG(SVG::load(assetPlugin(plugin, "res/KnobBig.svg")));
   }
};

struct VultKnob : SVGKnob
{
   VultKnob()
   {
      box.size = Vec(40, 40);
      minAngle = -0.75 * M_PI;
      maxAngle = 0.75 * M_PI;
      setSVG(SVG::load(assetPlugin(plugin, "res/Knob.svg")));
   }
};

struct VultKnobAlt : SVGKnob
{
   VultKnobAlt()
   {
      box.size = Vec(30, 30);
      minAngle = -0.75 * M_PI;
      maxAngle = 0.75 * M_PI;
      setSVG(SVG::load(assetPlugin(plugin, "res/KnobAlt.svg")));
   }
};

struct VultKnobSmall : SVGKnob
{
   VultKnobSmall()
   {
      box.size = Vec(18, 18);
      minAngle = -0.75 * M_PI;
      maxAngle = 0.75 * M_PI;
      setSVG(SVG::load(assetPlugin(plugin, "res/KnobSmall.svg")));
   }
};

struct VultScrew : SVGScrew
{
   VultScrew()
   {
      sw->svg = SVG::load(assetPlugin(plugin, "res/Screw.svg"));
      sw->wrap();
      box.size = sw->box.size;
   }
};

struct VultJack : SVGPort
{
   VultJack()
   {
      background->svg = SVG::load(assetPlugin(plugin, "res/Jack.svg"));
      background->wrap();
      box.size = background->box.size;
   }
};

struct VultSelector3 : SVGSwitch, ToggleSwitch
{
   VultSelector3()
   {
      addFrame(SVG::load(assetPlugin(plugin, "res/Select3_A.svg")));
      addFrame(SVG::load(assetPlugin(plugin, "res/Select3_B.svg")));
      addFrame(SVG::load(assetPlugin(plugin, "res/Select3_C.svg")));
      sw->wrap();
      box.size = sw->box.size;
   }
};

struct RescombWidget : ModuleWidget
{
   RescombWidget();
};

struct StabileWidget : ModuleWidget
{
   StabileWidget();
};

struct LateralusWidget : ModuleWidget
{
   LateralusWidget();
};

struct DebriatusWidget : ModuleWidget
{
   DebriatusWidget();
};

struct SplieWidget : ModuleWidget
{
   SplieWidget();
};

struct TrummorWidget : ModuleWidget
{
   TrummorWidget();
};
