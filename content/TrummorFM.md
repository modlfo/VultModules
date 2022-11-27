+++
title = "TrummorFM"
date = "2022-11-26T10:28:42+02:00"
layout = "module"
image = "../images/TrummorFM.png"
+++

Trummor FM is the result of combining the best bits of Opulus (FM synth) and Trummor2 (analog drum). Trummor FM is capable of producing a wide variety of percussive and synth sounds. It features four operators and exposes a nice set of parameters that simplify the creation of FM sounds.

## Documentation 

Trummor FM is divided into two sections: Oscillator and Noise.

The Noise section is responsible for producing the impulse sound of the percussion while the Oscillator produces the main drum sound. However, these roles can be interchanged. 

The easiest way of exploring Trummor FM is by using the powerful randomize function, which similarly to Opulus, generates mostly useful sounds.

### Common functions of the two sections:

- **Tune**: changes the pitch of the oscillator in a range of +-24 semitones.
- **Wave**: selects one of the eight waveforms for the carrier oscillator.
- **Mult**: defines the frequency multiplier of the modulator. The range goes from 0.5x to 16x.
- **FM-Env**: controls the decay of the modulator envelope.
- **Tone**: is a combination of low and high-shelf filters which can be used to shape the sound tonality.
- **Level**: sets the level of the carrier oscillator (volume of the section).
- **FM**: sets the level of the modulator oscillator.
- **Attack, Hold, Decay**: define the parameters of the main drum envelope.
- **Envelope Mode**: changes the behavior of the envelope. The two alternatives are Attack, Hold, Decay (AHD) and Attack, Sustain, Release (ASR). The ASR envelope is in fact an ADSR where the Decay has the same level as the Release stage.

### Specific functions of the Oscillator section:

- **Bend**: sets the start level of the pitch envelope.
- **Time**: defines the decay time of the pitch envelope.


### Specific functions of the Noise section:

- **Feed**: the operators of the noise section can be self-modulated. This knob controls the feedback of both operators. Increasing the feedback will make the operators generate noise.
- **Body**: sends the output to a resonator adding a small reverb-like character to the sound.

### Inputs and outputs

Each section provides its own set if Pitch and Gate inputs and sound output. There is a global Gate and combined Output.

### Modulations

Trummor FM provides the classic modulation router for Vult modules. To select a destination, press one of the slot buttons and move the destiation parameter.
