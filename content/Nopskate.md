+++
title = "Nopskate"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Nopskate.png"
+++

<center>Included in:<img src="../images/VultModulesSticker.svg"> <img src="../images/VultModulesFreeSticker.svg"> </center>


Nopskate is my take on the classic flip-flop octaver pedal but adapted to VCV Rack. Given any input signal, Nopskate will generate signals that are one and two octaves below the input signal. The generated signals can be added or multiplied (AM) to the original. These two ways of blending the generated signal can transform a simple input signal into a richer wave.

Nopskate is based on a circuit I made many years ago which was a failed attempt to clone the octaver guitar pedal. Since I didn't have access to the correct components, I tried to create a similar circuit with the components I had. The result was something different but still interesting.

Nopskate keeps the unstable behavior of the original circuit.

## Documentation

Each of the following controls provides an attenuverter and a CV input to modulate them.

- **Blend**: it's a dry/wet control to balance how much of the original and processed signal you want.
- **Octave**: balances the generated sound of octave-1 and octave-2 signals. In the middle you get an equal balance between the two signals.
- **Oct-1**: defines how the octave-1 signal is mixed. To the left the signal is added to the input signal, to the right the signal is multiplied producing a AM style of sound.
- **Oct-2**: defines how the octave-2 signal is mixed. The behavior is similar to the Oct-1 control.
- **Input**: left and right inputs to the effect. If only one is connected, the processed signal is send to both outputs.
- **Output**: left and right outputs.

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/blizni8LE0c" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>


