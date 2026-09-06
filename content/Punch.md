+++
title = "Punch"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Punch.png"
+++

<center>Included in: <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Punch is a stereo VCA containing two analog models: one based on a BJT transistor pair and the other on an Operational Transconductance Amplifier. Neither is a clean multiplier. The two models differ in how the gain responds to the control voltage, and both of them saturate when the signal is pushed, so the gain stage itself colours the sound.

That is the point of Punch. If you need a transparent VCA there are simpler ones; this one is for when you want the amplifier to add something of its own.

## Documentation

- **Drive**: sets how hard the signal is pushed into the amplifier before the gain is applied. This is the tone control of the module rather than a volume control: low settings stay clean, high settings saturate and thicken the sound.
- **(Small knob)**: attenuator for the CV input below it. It scales the incoming control voltage, which is what opens and closes the VCA. With nothing patched into the jack it acts as a manual gain control, so you can use Punch as a plain amplifier by leaving the input unconnected and setting the level here.
- **VCA Model**: selects which of the two circuits is modeled. The difference is mostly in the taper, that is, how the gain follows the control voltage.
   - **BJT**: the transistor pair response, taken from the measured curve of the circuit. It closes completely below a threshold, so it reaches true silence, which makes it the safer choice for envelopes and for gating.
   - **OTA**: an exponential response, the classic transconductance amplifier taper. It never quite closes fully, and the signal is driven harder into the saturation stage, so it distorts earlier and sounds more aggressive at the same Drive setting.

### Inputs and outputs

- **Input L** and **R**: stereo audio input.
- **CV (jack)**: control voltage for the gain, scaled by the attenuator above it.
- **Output L** and **R**: the amplified signal.

Punch is polyphonic. The number of channels is taken from the audio inputs.
