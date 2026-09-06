+++
title = "Arp 46&2"
date = "2026-09-01T10:00:00+03:00"
layout = "module"
image = "../images/Arp46and2.png"
+++

<center>Included in: <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Arp 46&2 is a model of the four-pole transistor ladder filter used in the classic american synthesizers of the seventies, the one built around the 4072 board.

The model is derived from the circuit itself rather than from a generic ladder topology. Each of the four sections is solved with its own non-linearity, and the details that give this particular ladder its character are part of the model: the loading of the transistor bases makes the pole of every section move with the tail current, so the filter is not perfectly linear across the sweep, and the current mirror weights the two collector currents unequally, which is what produces the even harmonics the circuit is known for.

## Documentation

- **Cutoff**: cutoff frequency, sweeping from 20 Hz to about 14.5 kHz. As in the hardware, the resonant peak sits noticeably below the nominal corner until the resonance is well up.
- **Drive**: level of the signal going into the ladder, from silence to unity. The ladder saturates on its own, so this knob is the main tone control of the module: low settings give a clean filter, high settings push the sections into their non-linear region.
- **Resonance**: filter resonance. It self-oscillates in the last 8% of the travel, exactly as the hardware does.
- **CV-1** and **CV-2**: bipolar attenuverters for the two cutoff modulation inputs.

### Inputs and outputs

- **CV-1** and **CV-2**: cutoff modulation inputs, scaled by the knobs above them.
- **V/Oct**: 1V/oct control of the cutoff, so the filter can be played as an oscillator when it is self-oscillating.
- **Input**: audio input.
- **Out**: four-pole lowpass output.

Arp 46&2 is polyphonic. The number of channels is taken from the **V/Oct** and **Input** jacks.
