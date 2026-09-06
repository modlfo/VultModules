+++
title = "Disjoint"
description = "DJ Style Filter"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Disjoint.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Disjoint is a stereo DJ style filter. It is built around a single bipolar frequency knob: at the center position the signal passes untouched, turning it to the left sweeps a four pole lowpass down, and turning it to the right sweeps a four pole highpass up. The crossfade between the two responses happens around the center, so the transition is smooth and there is a comfortable dead zone where the filter is out of the way.

Both channels are filtered with the same controls, which makes Disjoint useful as a performance filter for a whole mix, for live sweeps and for build-ups.

## Documentation

- **Frequency**: bipolar filter control. Center is bypass, left is lowpass, right is highpass.
- **Resonance**: emphasizes the frequencies around the cutoff. Resonance is scaled down automatically near the center of the frequency knob, so the bypass position stays clean.
- **Frequency Modulation** and **Resonance Modulation**: bipolar attenuverters for the two CV inputs.

### Inputs and outputs

- **Frequency** and **Resonance**: CV inputs, scaled by the attenuverters next to them.
- **Left** and **Right** (inputs): stereo audio input. If only one of them is patched, it feeds both channels.
- **Left** and **Right** (outputs): filtered stereo signal.

Disjoint is polyphonic.
