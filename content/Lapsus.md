+++
title = "Lapsus"
description = "Non-Euclidean Rhythm Generator"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Lapsus.png"
+++

<div class="text-center ModulePackage"><a href="/mysteries/" class="PackageButton" role="button">Part of VultMysteries</a></div>

Lapsus is a dual rhythm generator. A Euclidean generator spreads a number of pulses as evenly as possible over a number of steps, and that even spacing is the whole idea. Lapsus places the pulses along a curve instead, and the **Flex** control bends that curve: at the center the pulses come out evenly spaced, and as you turn it the pulses crowd towards the beginning or the end of the pattern. That is the non-euclidean part, and it is what lets Lapsus produce patterns that accelerate, slow down, or clump, while still landing on the grid.

There are two independent lines sharing the same length, plus a third output that combines them.

## Documentation

- **Length**: the number of steps in the pattern, from 1 to 64. Both lines share the same length, so they always stay in phase with each other.
- **Pulses (1 and 2)**: how many pulses are distributed over the pattern, as a proportion of the length. Full left is silence, full right fills every step.
- **Flex (1 and 2)**: bends the distribution of the pulses. At the center the spacing is even, which is the classic Euclidean result. Turned one way the pulses bunch up at the start of the pattern; turned the other way they bunch up at the end.
- **Cross**: the amount of crosstalk between the two lines. On every clock there is a chance, given by this knob, that the two pulses swap outputs. At zero the lines are completely independent; as you turn it up the two patterns start borrowing pulses from each other, which keeps the overall rhythm but makes it stop repeating exactly.

The screen shows the current length and the number of pulses of each line, which makes it easy to dial in a specific pattern like 5 pulses over 16 steps.

### Modulation

The two modulation slots work like in the other Vult modules: press a slot button and then move the parameter you want that input to control. Each slot has its own input jack and attenuverter.

### Inputs and outputs

- **Clk**: advances the pattern one step.
- **Reset**: returns both lines to the first step.
- **Out1** and **Out2**: the pulses of each line. The output follows the width of the incoming clock.
- **Xor**: fires when one line has a pulse but not the other. Feeding two similar patterns into it gives a sparse counter-rhythm that is related to both, which is often the most interesting output of the three.
