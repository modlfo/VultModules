+++
title = "OpulusMicro"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/OpulusMicro.png"
+++

<center>Included in: <a href="/premium/" class="btn btn-primary" role="button">VultModules</a> <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Opulus Micro is a compact version of Opulus. It features the same sound engine, but the interface is focused on "accidental" sound discovery.

### Basic usage

The RAND button randomizes all the module internals and produces a new sound. The generated sounds can be saved into one of the four Slots (push buttons in the top). To save a sound, press and hold the button for 2 seconds until the LED flashes twice. Once the sound is saved, it can be recalled by a single button press.

#### Morph mode

Once you have saved some sounds in the slots you can enable morph mode by pressing the MORPH button. In this mode, the signal input in the corresponding jack is used to interpolate the stored sounds. A signal of 0V corresponds to Slot 1, 1V corresponds to Slot 2 respectively. Voltage values outside the range of 0-4V are wrapped to that range.