+++
title = "Jorus"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Jorus.png"
+++

<center>Included in: <a href="/premium/" class="btn btn-primary" role="button">VultModules</a> <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Jorus is an analog chorus based on different versions the Juno chorus. Jorus models the core of the chorus and makes a few improvements over the original circuit. You can find the details in a section below.

## Documentation

- **Depth**: this control has a dual purpose: controlling the dry/wet and also the depth of the modulation. It goes from no effect to full chorus effect.
- **I-II**: defines the kind of modulation signals. In the original chorus, this was controlled by two buttons, but in Jorus you can transition from mode I to I+II and finally II.
- **Rate**: defines the speed of the modulation signals.

#### Modulations

Jorus provides inputs and attenuverters to modulate the three main parameters.

#### Inputs and outputs

Jorus provides stereo inputs and outputs. When the R input is unconnected, the L signal is routed to the R channel.

## Main differences of the model

In this case, instead of building the Juno-6x chorus from the scratch I used as reference a guitar pedal version of it. The guitar pedal I used is not an exact replica of the Juno chorus but it was very useful to understand the behavior of the modulators and the delays. Here are some of the main differences that you can expect between Jorus and a real Juno chorus.

- The BBD chips used in the pedal are 1024 stages while the original used 256 stages. This practically eliminates artifacts in the sound due to downsampling.
- In the original chorus, the stereo sound is derived from two Bucket Brigade Delay (BBD) chips, one for each channel. Jorus mixes the two BBD in order to create a mono sound unit and then uses one unit for every channel. This results in four BBD chips.
- The overall sound of the chorus has been tweaked to produce a brighter sound by expanding the range of the filters.
- The modulation speed can be adjusted.




