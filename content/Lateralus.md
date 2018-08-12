+++
title = "Lateralus"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Lateralus.png"
+++

<center>Included in: <a href="/premium/" class="btn btn-primary" role="button">VultModules</a> <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>


Lateralus is ladder filter which is the same structure that a very famous inventor created for his synthesizers. Lateralus is a detailed simulation model based on my own diode ladder filter.

The paid version of Lateralus has two implementations. Each implementation is based on a different simulation model that I have developed.

Some of the "weird" behaviors of the real filter were intentionally not reproduced in order to bring a more controllable filter. For example: large changes in gain with the resonance equals zero or with the cutoff completely open.

## Documentation

- **Cutoff**: this is the main knob in a filter. It defines the frequency at which the filter starts taking action. Full left, the filter is completely closed. Full right it's open and should not have effect. The cutoff frequency can be controlled with a 1V/Oct signal through the included attenuverter.
- **Resonance**: the resonance boost the frequencies near the cutoff frequency. Increase this knob and you will hear the personality of the filter. After some point the filter will start self-oscillating and can be used as a sound generator.
- **Drive**: controls the amount of signal that enters to the filter. Increasing the drive will cause the filter to saturate which adds interesting harmonics to the sound.
- **Model**: (Premium version only)
   - **DF**: this model is the diode based version of the circuit. It provides a smoother sound.
   - **TH**: This is an alternative model that follows the same ladder architecture but provides more harsh sounds when distorting.
- **Outputs**: The outputs of Lateralus provide different slopes:
   - **24 dB**: This is the classical sound of this filter. But if you are adventurous you should try the other outputs.
   - **18 dB**: This kind of filter was used by a famous acid box. Use this output and some drive to get some nice distorted sounds.
   - **12 dB**: This output provides some nice attenuation. This would be similar to what you'll find in a state variable filter.
   - **6 dB**: This may not be much filtering but it adds a very special character to the input signal.
- **Input**: You may provide an input signal to be filtered, but only if you want to. If not, just crack up the resonance and the filter will self-oscillate.



## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/mfS50tbYQK4" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/DvfYuPfUI08" frameborder="0" allowfullscreen></iframe>
