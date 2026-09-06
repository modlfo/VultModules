+++
title = "Overon"
description = "Dual Oscillator Synthesizer Voice"
date = "2026-09-01T10:00:00+03:00"
layout = "module"
image = "../images/Overon.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Overon is a complete synthesizer voice built around two oscillators, a state variable filter, two envelopes and an LFO. It follows the layout of the classic dual-oscillator expander modules: everything is normalled internally so that the module makes sound as soon as you patch a CV and a gate, but every stage is also exposed on its own jack so it can be broken apart and used as separate modules.

Overon is polyphonic. The number of voices is taken from the polyphony of the Main CV input.

## Documentation

### VCO 1 and VCO 2

Both oscillators are identical, except that VCO 2 can be hard synced to VCO 1.

- **Frequency**: coarse tuning, ±2 V (two octaves up and down).
- **Pulse Width**: pulse width of the square output, from a thin spike to a full square.
- **Freq / PW**: bipolar modulation depth. Turned to the left it modulates the frequency, turned to the right it modulates the pulse width.
- **Mod Src**: selects the modulation source for the knob above. VCO 1 defaults to ENV 1 and VCO 2 to ENV 2, and both can use the LFO instead. Patching the **Mod Src** jack overrides this switch.
- **Sync**: hard syncs VCO 2 to VCO 1.

Each oscillator provides **Saw** and **Pulse** outputs, and a **CV** input that is normalled to the main CV, so both oscillators track the keyboard unless you patch them separately.

### Mixer

- **VCO 1** and **VCO 2**: bipolar knobs that crossfade between the saw wave (left) and the pulse wave (right) of each oscillator. At the center the oscillator is silent.
- **Ext 1 / Ext 2**: crossfades between the two external inputs. **Ext 1** is normalled to the internal noise generator and **Ext 2** to a 440 Hz tuning reference, so with nothing patched this knob mixes noise (left) against a tuning tone (right).

### VCF

The filter is a state variable design that produces lowpass, notch, highpass and bandpass simultaneously.

- **Frequency**: cutoff frequency.
- **Resonance**: filter resonance. It self-oscillates at the top of the range.
- **LP / HP**: sweeps the response of the main output continuously from lowpass, through notch, to highpass.
- **Modulation**: bipolar depth of the cutoff modulation.
- **Mod Src**: selects ENV 2 or the LFO as the modulation source, overridden by the **Mod Src** jack.
- **Type**: selects which response feeds the VCA, either the **LP / HP** output or the bandpass.
- **Track**: when on, the cutoff tracks the main CV, so the filter follows the pitch of the notes.

The **LP / HP** and **BP** outputs are available on their own jacks, and the **CV** input allows 1V/oct control of the cutoff.

### Envelopes, LFO and VCA

- **ENV 1** and **ENV 2**: attack, decay and sustain envelopes. ENV 1 is the default source for the VCA and for VCO 1, ENV 2 for the filter and VCO 2. Each has its own **Gate** input, normalled to the main gate, and its own **Out** jack.
- **LFO**: a single **Rate** knob and a **Trig** input that resets the phase. Available as a modulation source everywhere and on the **Out** jack.
- **VCA**: the **VCA** switch selects whether the amplifier is controlled by ENV 1 or by the external **Vel/Ext** input. In ENV 1 mode, the **Vel/Ext** input scales the envelope, which is the usual way of applying velocity.

### Inputs and outputs

- **CV**: main 1V/oct input. Normalled to both oscillators.
- **Gate**: main gate. Normalled to both envelope gates.
- **Vel/Ext**: velocity scaling for ENV 1, or the direct VCA control in EXT mode.
- **Out**: the audio output of the voice.
