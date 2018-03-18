+++
title = "Stabile"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Stabile.png"
+++


Stabile is a state variable filter. It provides LP, HP, and BP filters. Additionally to the three filter outputs it provides an extra output imitates the behavior of the SEM filter.

The story of this filter goes even before the existence of Vult. I implemented the initial version of this filter in a microcontroller. With the years I have made many tweaks an simplifications. In fact this filter is very efficient and the sound is very effective.

## Documentation

- **Cutoff**: as in all filters, this is the main knob in a filter. It defines the frequency at which the filter starts taking action. Full left, the filter is completely closed. Full right it's open and should not have effect. The cutoff frequency can be controlled with a 1V/Oct signal through the included attenuverter.
- **Resonance**: the resonance boost the frequencies near the cutoff frequency. Increase this knob and you will hear the personality of the filter. After some point the filter will start self-oscillating and can be used as a sound generator.
- **Semblance**: this control affects only the output called SEM. It provides a behavior similar to the SEM filter. It blends the low pass and high pass outputs. In the center if produces a notch at the cutoff frequency.
- **Input**: Input the audio to be filtered. This filter does not self-oscillate.
- **Output**:
   - **LP**: low pass output. Good for making anything sound awesome.
   - **BP**: band pass output. When static, this band is not very interesting, but when modulated magic happens.
   - **HP**: my favorite use is to remove very low frequencies and boost some bass by adding resonance and keeping the cutoff low.
   - **SEM**: this output is affected by the Semblance control. As mentioned above, it blends the low and high pass outputs.


## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/gOSnVdaIj88" frameborder="0" allowfullscreen></iframe>



