+++
title = "Fuser"
date = "2026-09-01T10:00:00+03:00"
layout = "module"
image = "../images/Fuser.png"
+++

<center>Included in: <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Fuser is a compact six channel voltage mixer. Besides the main sum, it provides separate outputs for the odd and even channels, which makes it useful as two independent three channel mixers or as a mixer with two sub-groups.

All the mixing is performed through the same saturation stage used in the other Vult modules, so pushing the levels above the rails compresses the signal instead of hard clipping it.

## Documentation

- **1 to 6**: sets the amount of each input that goes into the mix. The knobs go from silence (full left) to unity gain (full right).

### Inputs and outputs

- **1 to 6**: signal inputs. Any unpatched input is simply ignored.
- **Odd**: sum of inputs 1, 3 and 5.
- **Even**: sum of inputs 2, 4 and 6.
- **Main**: sum of the Odd and Even outputs, that is, all six channels.

Fuser works with audio and control voltages, and it is polyphonic: the number of channels is taken from the polyphony of the inputs.
