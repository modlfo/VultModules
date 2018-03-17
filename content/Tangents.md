+++
date = "2017-10-27T11:54:59+03:00"
title = "Tangents"
layout = "module"
image="../images/Tangents.png"
+++


Tangents is a filter based on the Steiner-Parker structure. One big addition I made in this version compared with the hardware version is that this module leaves exposed three inputs (LP, BP and HP). This makes possible to connect three sources and affecting the frequency content for each input differently.

The paid version of Tangents has 3 different implementations. Each implementation is based on a different simulation model I developed. The original Tangents was based on the Steiner-Parker design by Yves Usson version (YuSynth). The other two models are based on some other well know filters that have a similar architecture.


## Documentation

- **Cutoff**: this is the main knob in a filter. It defines the frequency at which the filter starts taking action. Full left, the filter is completely closed. Full right it's open and should not have effect. The cutoff frequency can be controlled with a 1V/Oct signal through the included attenuverter.
- **Resonance**: the resonance boost the frequencies near the cutoff frequency. Increase this knob and you will hear the personality of the filter. After some point the filter will start self-oscillating and can be used as a sound generator.
- **Drive**: controls the amount of signal that enters to the filter. Increasing the drive will cause the filter to saturate which adds interesting harmonics to the sound.
- **Inputs**:
   - **LP**: Low pass output. Good for making anything sound awesome.
   - **BP**: Band pass output. When static, this band is not very interesting, but when modulated magic happens.
   - **HP**: Band pass output. When static, this band is not very interesting, but when modulated magic happens.
- **Output**: .

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/mfS50tbYQK4" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/1E_n0oU9ijI" frameborder="0" allowfullscreen></iframe>






