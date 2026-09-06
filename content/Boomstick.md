+++
title = "Boomstick"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Boomstick.png"
+++

<center>Included in: <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Boomstick is a two pole lowpass filter based on the Sallen-Key topology, the same arrangement used in many classic american synthesizers. It is solved as a zero delay feedback filter, and the saturation of the feedback path is part of the model, which is what gives the filter its characteristic behavior when the resonance is up: instead of ringing cleanly, the peak compresses and the filter becomes louder and dirtier as it is pushed.

Compared to the four pole filters, the two pole slope is gentle, so Boomstick keeps a lot of the brightness of the source material even when it is closed down. It is a good filter for sounds that need to stay present in a mix.

## Documentation

- **Cutoff**: cutoff frequency of the filter. The response is exponential, so the knob travel is evenly distributed over the audible range.
- **Resonance**: emphasizes the frequencies around the cutoff. At high settings the filter self-oscillates.
- **Drive**: sets the level of the signal entering the filter. Because the saturation happens inside the feedback loop, this knob does much more than change the volume: low settings give a clean filter and high settings give a saturated, compressed tone.
- **Cutoff Mod 1** and **Cutoff Mod 2**: bipolar attenuverters for the two CV inputs.

### Inputs and outputs

- **Main** (input): audio input.
- **CV 1** and **CV 2**: cutoff modulation inputs, scaled by the attenuverters above them.
- **Main** (output): filtered signal. The output is DC blocked.

Boomstick is polyphonic.
