+++
title = "Vultari"
description = "Punk Console"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Vultari.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Vultari is a model of the Atari Punk Console, the little noise box built with two 555 timer chips. The first 555 runs free as an oscillator, and its output triggers the second one, which stretches every pulse it receives. The two chips are not independent: the second one can only start a new pulse once the first has fired, so as its timing is stretched past the period of the first, cycles get skipped and the output drops to a lower octave, or to something in between. That interaction is where the stepped, gritty, slightly out-of-control character of the circuit comes from.

Vultari models the two timers and their capacitors rather than imitating the result, so the capacitor charge curves are available as outputs alongside the square wave. The module adds a few things the original circuit does not have: the two saw waves are exposed on their own jacks, a blended wave output, and CV control over everything.

There is no V/Oct input. Vultari is not a precision oscillator and does not track pitch: it is tuned by ear.

## Documentation

The panel shows the schematic of the modeled circuit, which makes it easier to see where each control and output sits.

- **Tune**: sets the timing of the first 555, and with it the base frequency of the oscillator.
- **PW/Skip**: sets the timing of the second 555. From the left, it widens the pulse. Past the point where the second timer takes longer than one cycle of the first, it starts skipping cycles, dropping the pitch in steps and producing the classic Punk Console sound.
- **Both**: added to the Tune and the PW/Skip settings at the same time, as the arrows on the panel indicate. This sweeps the whole circuit while keeping the relationship between the two timers, which is the most musical way of playing it.
- **Wave**: morphs continuously between the three generated signals. The morph is circular: full left is Saw 1, a third of the way is Saw 2, two thirds is Pulse, and the last third fades back to Saw 1.

### Modulation

Each of the four knobs has its own attenuverter and CV input below it, so Tune, PW/Skip, Both and Wave can all be modulated. Modulating **Both** gives the widest range of usable sounds, and modulating **PW/Skip** is what produces the abrupt octave jumps.

### Outputs

- **Saw 1**: the charge curve of the first timer's capacitor. A saw wave at the base frequency.
- **Pulse**: the square output of the second timer. This is the output of the original circuit.
- **Saw 2**: the charge curve of the second timer's capacitor. It follows the skipping behavior, so it is often at a lower frequency than Saw 1.
- **Wave**: the three signals blended according to the Wave knob.

All outputs are DC blocked. Vultari is polyphonic; the number of channels is taken from the modulation inputs.
