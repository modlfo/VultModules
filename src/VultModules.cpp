#include <math.h>
#include "VultModules.hpp"

float getSampleRate()
{
   return gSampleRate;
}

Plugin *plugin;

void init(rack::Plugin *p)
{
   plugin = p;
   plugin->slug = "VultModules";
   plugin->name = "VultModules";
   plugin->homepageUrl = "https://github.com/modlfo/VultModules";
   createModel<RescombWidget>(plugin, "Rescomb", "Rescomb");
   createModel<StabileWidget>(plugin, "Stabile", "Stabile");
   createModel<LateralusWidget>(plugin, "Lateralus", "Lateralus");
   createModel<DebriatusWidget>(plugin, "Debriatus", "Debriatus");
   createModel<SplieWidget>(plugin, "Splie", "Splie");
   //createModel<TrummorWidget>(plugin, "Trummor", "Trummor");
}
