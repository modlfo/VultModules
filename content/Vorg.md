+++
date = "2017-10-27T11:54:59+03:00"
title = "Vorg"
layout = "module"
image="../images/Vorg.png"
+++

<center>Included in: <a href="/compacts/" class="btn btn-primary" role="button">VultCompacts</a> </center>

Vorg is a low/high pass filter based on a modernized Operational Transconductance Amplifier version of the MS-20 filter. Vorg is the first module that I developed with the idea of making it feel exactly as a real eurorack module. This considers the spacing between the knobs and sizes. Vorg is also part of Freak. Using it with Freak allows modulating the Resonance and Drive controls.

## Documentation

- **Cutoff**: Defines the frequency at which the filters starts attenuating frequencies.
- **CV1 & CV2**: these pairs of input jack and attenuation knob are the modulation sources for the Cutoff control. Notice that the knobs are attenuators not attenuverters.
- **Resonance**: the resonance boost the frequencies near the cutoff frequency. Increase this knob and you will hear the personality of the filter. After some point the filter will start self-oscillating and can be used as a sound generator.
- **Drive**: controls the amount of signal that enters to the filter. Increasing the drive will cause the filter to saturate which adds interesting harmonics to the sound.
- **Mode**: pressing the button switches between low pass and high pass filter mode. The current mode is shown by the LED lights in the panel.
- **In**: input to the filter.
- **Out**: output of the filter.

### Patching Tips

The filter section in the real MS-20 consists of two filters: one HP and one LP. You can easily recreate this behavior with Vorg by creating two instances and experimenting different ways of connecting them.


## Videos

<center><iframe width="560" height="315" src="https://www.youtube.com/embed/r_r9GcBLdKc" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></center>

<center><iframe width="560" height="315" src="https://www.youtube.com/embed/vKQGOJNimAg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></center>

--

## Making of Vorg

These are the slides I prepared for a presentation where I talk about the process of modeling Vorg.

<center><img src="../images/Vorg-0.png" style="max-width: 100%;"> </center>
<center><img src="../images/Vorg-1.png" style="max-width: 100%;"> </center>
<center><img src="../images/Vorg-2.png" style="max-width: 100%;"> </center>
<center><img src="../images/Vorg-3.png" style="max-width: 100%;"> </center>
<center><img src="../images/Vorg-4.png" style="max-width: 100%;"> </center>
<center><img src="../images/Vorg-5.png" style="max-width: 100%;"> </center>




