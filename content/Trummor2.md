+++
title = "Trummor 2"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Trummor2.png"
+++

<center>Included in:<img src="../images/VultModulesSticker.svg"> <img src="../images/VultModulesFreeSticker.svg"> </center>


Trummor 2 is the evolution of Trummor that was designed with the idea of expanding the sonic capabilities of Trummor.

It was designed based on the input of many members of the VCV Rack community specially Alejandro Galán Álvaro who participated in most of the stages. Trummor 2 is, in his words:

*"a powerhouse of drum sounds. FM drums, metalic claps, analog-style kicks, all sorts of resonated karplus-strong style strings, blips and blops. A do-it-all module"*

For Trummor 2 I tested a dozen of different ideas trying to find something that produced an interesting sound and fit the personality of the module. At the end the implementation is very close to the concept of "analog-ish" where I try to avoid things that cannot be done in real analog (except maybe for Rescomb which is more digital).

Trummor 2 integrates better with VCV Rack making modulation easier and now includes a virtual OLED screen.

## Diagram

Thanks to Bob Fuller for making the diagram of Trummor2. You can get the pdf version [HERE](/images/Vult-Trummor2.pdf)

![Trummor2](/images/Trummor2-internals.png "Signal Flow Diagram")

## Documentation

Trummor 2 is split into two main sections: the oscillator section and the noise section. Trummor 2 features the Vult modulation section that allows controlling any parameter in the interface. To activate, press one of the buttons and move the parameter you want to change to assign it.

### Drum Section

- **Tune**: defines the main pitch of the kick drum. Goes from C0 to C4.
- **Bend**: control the starting pitch of the oscillator. Changing this value (in combination with Time) will define how snappy the sound becomes.
- **Time**: defines how long it takes to change the pitch from the initial value (defined by the Bend control) to the final value (defined by the Tune control).
- **Sub**: adds a sub oscillator in order to provide a more deep sound.
- **Wave**: gradually changes the oscillator waves from a pure sine to a more harmonically rich triangle.
- **Shaper**: Provides two different types of distortion to the sound.
- **Attack, Hold, Decay**: these three controls are the main envelope of the Drum section. This envelope has been separated into an independent module [Spank](/spank). You can find more details there.
- **Mode**: this controls the kind of envelope. See [Spank](/spank).
- **Source**: used to blend the internal oscillator signal with an external oscillator (input Ext). This can be used to insert any oscillator signal and turn it into a percussion.
- **Level**: Defines the output level of the section.
- **Ext (External Input)**: insert any oscillator you want to compliment the sound of the drum.
- **Gate**: this is an independent input that can be used to control the oscillator section separately.
- **Pitch**: outputs the CV pitch signal of the internal oscillator. This signal is affected by the Bend parameter. You can use this signal to control any external oscillator and the input the signal into the Ext jack.
- **Env (Envelope Output)**: outputs the control signal produced by the envelope. This signal can be used in combination with a VCA to control any other sound.
- **Out**: provides the output audio signal of the oscillator section.

### Noise Section
- **Tone**: defines the character of the noise. To the left you get a pink-like noise that can be used for snare sounds. To the right you get a noise without low frequencies that can be used for hi hats.
- **Pitch**: this is knob that works in combination with the Rescomb knob. Trummor 2 integrates Rescomb in order to produce a metallic noise sound. Pitch controls the frequencies of the comb filter ripples.
- **Rescomb**: similarly as in the Rescomb filter module, this parameter controls the kind of comb: positive or negative. Depending on the input signal it changes the way we perceive the noise. On one setting it can have a more low frequency sound and in the opposite a high.
- **Cutoff**: controls the cut frequency of a multi-mode filter that it's applied to the noise. In combination with the Resonance control this can be used to enhance a certain group of frequencies to produce a more tuned noise sound.
- **Type**: defines the type of filter: LP, BP or HP.
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

<iframe width="560" height="315" src="https://www.youtube.com/embed/GHLu03h0-vs" frameborder="0" allowfullscreen></iframe>



<iframe width="560" height="315" src="https://www.youtube.com/embed/RLFhhjR93iY" frameborder="0" allowfullscreen></iframe>
