+++
title = "Stress"
date = "2026-09-01T10:00:00+03:00"
layout = "module"
image = "../images/Stress.png"
+++

<center>Included in: <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Stress is a test signal generator. It was originally written to stress-test modules during development: instead of patching an oscillator, an LFO and a noise source by hand to check how a module reacts, Stress produces a signal that keeps changing shape, amplitude and character on its own.

It is a 2 HP utility, but it is also a perfectly usable source of unpredictable modulation or of harsh audio.

## Documentation

- **Rate**: sets the frequency of the generated signal. It covers a very wide range, from slow control voltages up to audio rates.
- **Waves**: sets how often the generator picks a new signal shape. At every change, Stress randomly chooses between a random waveform (a mix taken from the Vult wavetables), a stepped random voltage that updates once per cycle, and white noise. Turning the knob to the left makes the shape change slowly; to the right it changes several times per second.
- **Range**: scales the output. At zero the output is silent, and the response is quadratic, so the lower half of the knob gives fine control over small modulation voltages while the top of the range produces signals well above the usual ±5 V.

### Inputs and outputs

- **Out**: the generated signal.

Stress has no inputs. It is meant to be dropped into a patch and left running.
