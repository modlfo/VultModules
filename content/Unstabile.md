+++
title = "Unstabile"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Unstabile.png"
+++

<center>Included in: <a href="/premium/" class="btn btn-primary" role="button">VultModules</a> <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>


Unstabile is "circuit bent" version of Stabile. When making Stabile I aimed to have a ver efficient and smooth filter that I could run in a small ARM processor. To achieve that I left out many things from the original circuit. With Unstabile remade the model and introduced nonlinearities that can occur when the circuit is fed with low voltage. The result is Unstabile a filter that makes everything sound big and distorted... and it can self-oscillate.

## Documentation

- **Cutoff**: as in all filters, this is the main knob in a filter. It defines the frequency at which the filter starts taking action. Full left, the filter is completely closed. Full right it's open and should not have effect. The cutoff frequency can be controlled with a 1V/Oct signal through the included attenuverter.
- **Resonance**: the resonance boost the frequencies near the cutoff frequency. Increase this knob and you will hear the personality of the filter. After some point the filter will start self-oscillating and can be used as a sound generator.
- **Semblance**: this control affects only the output called SEM. It provides a behavior similar to the SEM filter. It blends the low pass and high pass outputs. In the center if produces a notch at the cutoff frequency.
- **Drive**: controls the amount of signal that enters to the filter. Increasing the drive will cause the filter to saturate which adds interesting harmonics to the sound.
- **Input**: Input the audio to be filtered.
- **Output**:
   - **LP**: low pass output. Good for making anything sound awesome.
   - **BP**: band pass output. When static, this band is not very interesting, but when modulated magic happens.
   - **HP**: my favorite use is to remove very low frequencies and boost some bass by adding resonance and keeping the cutoff low.
   - **SEM**: this output is affected by the Semblance control. As mentioned above, it blends the low and high pass outputs.

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/mfS50tbYQK4" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/DcKKqKGTSao" frameborder="0" allowfullscreen></iframe>



