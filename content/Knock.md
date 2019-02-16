+++
title = "Knock"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Knock.png"
+++

<center>Included in: <a href="/compacts/" class="btn btn-primary" role="button">VultCompacts</a> </center>


Knock is a modern take on a classic analog bass drum. It features a hybrid engine capable producing a wide variety of drum sounds. The Stress input allows for further shaping of the sound by using a vactrol model to control the envelope.

Knock is split in two sections: the oscillator and noise synthesizers. The oscillator section is analog modeled while the noise is a special oscillator capable of producing many kinds of clicking sounds.

## Documentation

### Oscillator section

- **Tune (Knob)**: offsets by one octave up or down the tune of the drum. When no signal is connected to the Tune input the range goes from F0 to F2.
- **Decay**: defines how long the drum sound is.
- **Bend**: defines the initial pitch of the drum when simulating a hit.
- **Time**: defines how much time the pitch takes to move from the initial pitch to the actual pitch of the drum.
- **Fury**: changes the main oscillator wave and adds distortion to achieve a more aggressive sound.

### Noise section

- **Type**: changes the kind of noise oscillator used.
- **Depth**: defines the level of the noise
- **Shift**: changes the perceived pitch of the noise

### Modulation section

This section provides inputs and attenuverters to modulate the following parameters:

- Fury
- Decay
- Depth
- Shift

### Inputs and Outputs
- **Gate**: a signal larger than 2.0 V will trigger the sound. In order to be re-triggered the signal needs to go below that threshold and up again.
- **Tune**: defines the pitch of the drum. The given value will be offset by the Tune Knob.
- **Stress**: this signal can be used to control the level of the sound. The control signal is passed to a Vactrol model that will soften the transitions and will provide a smoother sound. When a signal is connected 0.0 V corresponds to ~40% of the level. 10.0 V corresponds to 100% of the sound. Negative signals will reduce the level below the 40%.
- **Out**: main output of the module.

### Extreme Mode

Knock has a toggle switch that will change the module to the extreme settings. In this mode, all the ranges of the parameters are expanded allowing for more aggressive sounds.
