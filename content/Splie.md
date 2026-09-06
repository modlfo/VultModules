+++
title = "Splie"
description = "Active Buffer"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Splie.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Splie is a utility module that I made because it was handy when developing my modules. It is a dual buffered multiple: it takes one signal and distributes it to three destinations, twice over.

The usefulness is in the patching rather than in the sound. When a signal has to reach several modules, moving it means repatching every one of them; with Splie you move a single cable into the input and everything downstream follows. The two halves are completely independent, so one 3 HP module covers two signals, for example a pitch CV and its gate.

## Documentation

Splie has no controls. It is made of two identical sections, each with one input at the top and three outputs below it.

- **Input (A and B)**: the signal to be distributed.
- **Outputs (three per section)**: buffered copies of the corresponding input.

Splie works with audio and control voltages, and it is polyphonic: the copies carry the same number of channels as the input.
