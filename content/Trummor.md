+++
title = "Trummor"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Trummor.png"
+++

Trummor is a drum synthesizer that produces 909 style kicks. Trummor can be used to produce other type of percusive sounds like toms and simple snares or hats.

I started developing the algorithms behind Trummor a long time ago and I made a simplified [hardware version](http://modlfo.github.io/projects/vult-analog-module/) of it. When VCV Rack came out, I adapted the code and started expanding the sonic capabilities.

Trummor has been replaced by Trummor 2 which is an improved version with even more sonic capabilities.

## Documentation

Trummor is split into two sections: the oscillator section and the noise section.

### Drum Section

- **Tune**: defines the main pitch of the kick drum. Goes from C0 to C4.
- **Bend**: controls the time the pitch envelope takes. To the left, it will produce a more aggressive percusive sound. To the right, it will produce weird drum sounds.
- **Drive**: add a gradual distortion to the sound until it gets very punchy.
- **Attack, Hold, Decay**: these three controls are the main envelope of the Drum section. This envelope has been separated into an independent module [Spank](/spank). You can find more details there.
- **Mode**:
   - **Soft**: provides longer transitions times and less snappy envelope.
   - **Hard**: faster transition times and more snappy envelope.
- **Source**: used to blend the internal oscillator signal with an external oscillator (input Ext In). This can be used to insert any oscillator signal and turn it into a percussion.
- **Level**: Defines the output level of the section.
- **Modulation Slot**: used to modulate one parameter of the oscillator section. Press the small button to rotate the parameters until you find the one you want to modulate.
- **Ext In (External Input)**: insert any oscillator you want to compliment the sound of the drum.
- **Env Out (Envelope Output)**: outputs the control signal produced by the envelope. This signal can be used in combination with a VCA to control any other sound.
- **Pitch**: outputs the CV pitch signal of the internal oscillator. This signal is affected by the Bend parameter. You can use this signal to control any external oscillator and the input the signal into the Ext In jack.

### Noise Section
- **Tone**: defines the character of the noise. To the left you get a pink-like noise that can be used for snare sounds. To the right you get a noise without low frequencies that can be used for hi hats.
- **Decimate**: reduces the sample rate of the noise producing glitchy percussion sounds.
- **Mode**: same as in the oscillator section.
- **Source**: same as in the oscillator section.
- **Level**: same as in the oscillator section.
- **Modulation Slot**: : same as in the oscillator section.
- **Ext In (External Input)**: : same as in the oscillator section.
- **Env Out (Envelope Output)**: : same as in the oscillator section.

### Common

- **Gate**: the signal used to trigger the drum. Any signal larger than 2V will trigger the drum.
- **Output**: main audio output.



## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/gKq4NGLe7iw" frameborder="0" allowfullscreen></iframe>