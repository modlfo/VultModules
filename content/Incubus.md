+++
title = "Incubus"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Incubus.png"
+++

<center>Included in: <a href="/compacts/" class="btn btn-primary" role="button">VultCompacts</a> </center>

Incubus is a full synthesizer voice in a single module. It is assembled out of pieces of other Vult modules: the oscillators come from [Vessek](../vessek/), the FM section from [Noxious](../noxious/), the filter is the whole collection found in [Freak](../freak/), and one of the random generators is the pendulum from [Caudal](../caudal/). On top of that it adds two envelopes, an LFO, a distortion stage, a delay and a reverb, and the Vult modulation router.

Everything is normalled internally, so patching a pitch and a gate is enough to get sound. The signal path runs from the two oscillators, through the mixer, into the distortion and the filter, and finally into the amplifier and the effects.

## Documentation

### Oscillator A

- **Tune Switch**: sets the range of the Tune knob: **Fine** is one semitone up and down, **Coarse** is one octave up and down, and **Semi** is one octave up and down quantized to semitones.
- **Tune** and **Oct**: offset the pitch. Oct moves in octaves.
- **Wave**: selects Pulse, Saw or Triangle.
- **PW**: pulse width. It affects all three waveforms, not only the pulse.
- **Active**: turns the oscillator on or off.
- **Env / Rand / LFO** (under PW): modulation depths for the pulse width, one per source.

### Oscillator B

- **Tune Switch**, **Tune**, **Oct**: as in oscillator A.
- **Wave**: morphs continuously between the waveforms rather than switching between them.
- **Harm**: sets the harmonic content, from the bare fundamental to the full wave. It behaves much like a low pass filter placed before the real filter.
- **Sync**: **Off**, **On** for hard sync to oscillator A, or **Detach**, which frees oscillator B from the main pitch so it can be tuned independently and used as a drone or a modulator.
- **Env / Rand / LFO** (under Wave): modulation depths for the wave morph.

### FM

- **Amt**: how much oscillator B is frequency modulated.
- **Ratio**: the frequency of the modulator.
- **Ratio / Free**: in **Ratio** mode the modulator is locked to a multiple of the main pitch, which keeps the result harmonic. In **Free** mode it runs at a fixed frequency, which gives inharmonic, bell-like and noisy results that do not track the keyboard.

### Mixer

- **Fusion**: crossfades between oscillator A and oscillator B.
- **Env / Rand / LFO**: modulation depths for Fusion.
- **Sub**: adds a sub oscillator below the main pitch for extra weight.

### Distort

- **Fold/LoFi**: a bipolar control. To one side it wave folds the signal, adding overtones; to the other it degrades it, giving a lo-fi sound.
- **Shape**: a second distortion stage that shapes the waveform.
- **Route**: places the distortion **Pre** the filter, where the filter can tame it, or **Post**, where it hits the output directly and stays aggressive.

### Filter

The filter is the same collection used in Freak.

- **Cutoff**, **Res**, **Drive**: the usual filter controls. Drive saturates the filter input.
- **Filter (up/down buttons)**: steps through the available filter models.
- **Mode (up/down buttons)**: steps through the responses available for the selected model, for example low pass, band pass or high pass.
- **Track**: makes the cutoff follow the pitch of the note.
- **Env / Rand / LFO / Vel**: modulation depths for the cutoff, one per source.

### Amp and Env

- **Amp**: an ADSR envelope controlling the output level, with a **Vel** knob setting how much the velocity input affects it.
- **Env**: a second, simpler AD envelope available as a modulation source, also with its own **Vel** amount.

### LFO

- **Freq**: rate.
- **Wave**: triangle, saw or pulse.
- **Pol**: unipolar or bipolar output.
- **Retrig**: when on, the LFO restarts on every gate.

### Random

- **Move**: the rate at which the random source changes.
- **Mode**: the kind of randomness. **Caudal** is the chaotic pendulum, which gives smooth interrelated movement; **Brown** is brownian motion, which wanders gradually; **Steps** jumps between discrete values.
- **Pol**: unipolar or bipolar.

### FX

- **Delay** and **Time**: send level and delay time.
- **Space**: a reverb applied to the output.

### Master

- **Glide**: portamento. Controls the maximum rate of change of the incoming pitch.
- **Tune**: overall tuning of both oscillators.

### Modulation router

Eight slots, each with an input jack and an attenuverter. Press a slot button and then move a parameter to assign that input to it. The screen shows the current assignments.

### Inputs and outputs

- **Pitch**: 1V/oct input.
- **Gate**: triggers both envelopes.
- **Vel**: velocity, used by the Amp and Env sections and available as a filter modulation source.
- **LFO S&H** and **Rand S&H**: clock inputs that sample and hold the LFO and the random generator.
- **Amp**, **Env**, **Rand**, **LFO** (outputs): the internal modulation sources, available to the rest of the patch.
- **Output L** and **R**: the stereo output of the voice.
