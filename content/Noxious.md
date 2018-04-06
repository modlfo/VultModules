+++
title = "Noxious"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Noxious.png"
+++

Noxious is a digital oscillator and LFO based on Frequency and Phase modulation techniques. The idea for Noxious was to create an oscillator that captures the crazy and experimental nature of FM and PM but at the same time making easy to obtain usable results. Noxious can create from soft and cheesy sounds to very abrasive and distorted screams. In LFO mode can create quasi-chaotic signals.

Noxious is unpredictable but controllable.

There are available two versions: monophonic and polyphonic.

## Documentation

- **Tune Switch**: defines how the Tune knob behaves. It has three modes:
   - **Fine**: sets a tuning range one semitone up and down.
   - **Coarse**: sets a tuning range one octave up and down.
   - **Semi**: sets a tuning range one octave up and down but the tunning is quantized to every semitone.
- **Tune**: offsets the V/OCT input. The range is defined by the Tune Switch.
- **Oct**: offsets the V/OCT input three octaves up and down. Modulate this knob and you'll get some nice arpeggios.
- **Wave**: controls the even and odd harmonics of the main oscillator. Full left produces a square signal. Full right produces a saw wave.
- **Harm**: defines the number of harmonics used by the main oscillator. To the left, outputs only the fundamental. To the right produces the full waves. This control has an effect similar to a low pass filter.
- **Mode Switch**: selects between audio oscillator or low frequency oscillator.

**FM Section**

- **Tune**: defines how the frequency of the modulator is defined.
   - **Ratio**: makes the modulator select only frequencies that are a factor of the main oscillator frequency. It ranges from 1/2 to 8 times the main frequency.
   - **Free**: makes the modulator select any real frequency between 1/2 to 8 times the main frequency.
- **Freq**: defines the frequency of the modulator. The behavior is affected by the Tune parameter (see above).
- **FM**: sets the amount of FM applied to the main oscillator.
- **Wave**: defines the type of wave used by the modulator.
   - **Saw**: produces a more edgy result that it's interesting for aggressive sounds.
   - **Sine**: produces a more soft modulation but still very interesting.
- **Ext.FM**: controls the amount of FM applied using the external signal provided in the input jack FM.

**Phase Section**

All this controls affect the phase of the main oscillator. Individually, the change may seem gentle, but combining them with other modulations can alter drastically the sound.

- **Overtone**: applies a fold-like distortion to the phase that results in a sound that resembles adding overtones to the sound.
- **Body**: transforms the phase in a log/exp way resulting in a thinner or more fat sound.
- **Boost**: changes the amplitude of the phase producing a sound resembling to hard-clipping.
- **Feed**: adds positive feedback to the phase. This produces a resonating-like sound.

**Mix Section**

- **Sub**: controls the level of the sub oscillator. The sub oscillator is a low harmonic content oscillator that helps recover the low end that may have been lost by high modulations.
- **Noise**: controls the level of white noise. The noise is very useful when making percussive sounds with Noxious.

**Chaos Section**

The chaos section is used to provide random variations to the sound. In order to trigger the modulation you need to provide a Gate signal otherwise these controls will not affect at all the sound.

- **Spread**: defines how much the parameters could move after a gate signal. In the maximum level, the parameters could move from minimum to maximum.
- **Settle**: defines the time the parameters stay outside the current value. A low setting can help provide percussive sounds by making a very fast transition. Larger values will provide longer transitions. When set to the maximum the parameters will not return to the original value but will be reset to a new random state by a new gate.

**Glide Section**

- **Glide**: controls the maximum rate of change of the V/OCT signal. Glide can be used to produce a gradual change in pitch of the oscillator. For example, if the V/OCT signal changes abruptly, the glide will make the oscillator change softer to the target voltage.
- **Mode (Glide section)**: defines when the glide is applied.
   - **Skip Gate**: Glide is not applied if the V/OCT signal changes at the same time as a Gate signal. This will produce an abrupt transition of the pitch when the Gate changes.
   - **Always**: always apply the glide no matter the signal of the Gate.

**Main Jacks**

- **V/OCT**: this is the main input of the oscillator. It defines the pitch using the 1V per octave convention. Zero volts corresponds to a C1 note.
- **Gate**: a typical gate signal that controls the Glide and Chaos functions of Noxious.
- **Out**: main output of the mixed waves.

**Poly Section**

This extension is shown only in Noxious-Poly. The poly section allow to use multiple oscillators with the same settings. The additional voices are only active if the output or cv inputs are connected. Each voice has its own separated output but using the Level knob the sound can be mixed through the main output.

- **V/OCT**: inputs the pitch voltage for the corresponding voice.
- **Tune**: similar to the Tune control of the main voice.
- **Gate**: similar to the Gate input of the main voice. Each voice has it's own chaos engine.
- **Level**: output level of the voice through the main output jack.
- **Out**: separate audio output for the voice. The Level knob does not affect the output level on this jack.

## Videos

Audio demos by [Simon Bader](https://www.instagram.com/circadiansound/), [Alejandro Galán Álvaro](https://www.youtube.com/user/AGalanKh/) and me.

<iframe width="560" height="315" src="https://www.youtube.com/embed/q6Ts9B0_EeY" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>


This video explains all the features of Noxious

<iframe width="560" height="315" src="https://www.youtube.com/embed/dteMrGhLTC0" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>


Audio demo by [Time_Controlled_Organism](https://www.youtube.com/channel/UCI215RjXT1zqgTIrsUJUhPA).

<iframe width="560" height="315" src="https://www.youtube.com/embed/VjDNTYmUo-4" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>


