+++
date = "2017-10-27T11:54:59+03:00"
title = "Tangents"
description = "Steiner-Parker Filter"
layout = "module"
image="../images/Tangents.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Tangents is a filter based on the Steiner-Parker structure. One big addition I made in this version compared with the hardware version is that this module leaves exposed three inputs (LP, BP and HP). This makes it possible to connect three sources and affect the frequency content of each input differently.

Tangents has 3 different implementations. Each implementation is based on a different simulation model I developed. The original Tangents was based on the Steiner-Parker design by Yves Usson version (YuSynth). The other two models are based on some other well known filters that have a similar architecture.


## Documentation

- **Cutoff**: this is the main knob in a filter. It defines the frequency at which the filter starts taking action. Full left, the filter is completely closed. Full right it's open and should not have effect. The cutoff frequency can be controlled with a 1V/Oct signal through the included attenuverter.
- **Resonance**: the resonance boosts the frequencies near the cutoff frequency. Increase this knob and you will hear the personality of the filter. After some point the filter will start self-oscillating and can be used as a sound generator.
- **Drive**: controls the amount of signal that enters the filter. Increasing the drive will cause the filter to saturate which adds interesting harmonics to the sound.
- **Model**:
   - **YU**: this is the default model, it provides a smooth sound that works fine with anything.
   - **MS**: provides a more smooth resonance by adding diode clipping in the feedback path.
   - **XX**: this model is pure madness!
- **Inputs**: each jack feeds the signal into a different response of the filter. They can be used at the same time, with a different source in each one.
   - **LP**: the signal patched here is low pass filtered.
   - **BP**: the signal patched here is band pass filtered.
   - **HP**: the signal patched here is high pass filtered.
- **Output**: the three filtered inputs mixed together.

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/mfS50tbYQK4" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/1E_n0oU9ijI" frameborder="0" allowfullscreen></iframe>






