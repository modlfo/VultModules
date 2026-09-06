+++
title = "OpulusMicro"
description = "Accidental FM Operator"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/OpulusMicro.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Opulus Micro is a compact version of Opulus. It features the same sound engine, but the interface is focused on "accidental" sound discovery.

### Basic usage

The RAND button randomizes all the module internals and produces a new sound. The generated sounds can be saved into one of the four Slots (push buttons in the top). To save a sound, press and hold the button for 2 seconds until the LED flashes twice. Once the sound is saved, it can be recalled by a single button press.

#### Morph mode

Once you have saved some sounds in the slots you can enable morph mode by pressing the MORPH button. In this mode, the signal patched into the corresponding jack is used to interpolate between the stored sounds. A signal of 0V corresponds to Slot 1, 1V to Slot 2, and so on. Voltage values outside the range of 0-4V are wrapped to that range.