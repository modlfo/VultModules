+++
title = "Opulus"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Opulus.png"
+++

<center>Included in: <a href="/premium/" class="btn btn-primary" role="button">VultModules</a> <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>

Opulus is a recreation of the Yamaha OPL2 (YM3812) FM chip. This chip was widely used on 90's soundcards like the Ad Lib and were responsible of producing the sound of uncountable videogames. Opulus reproduces the sound engine to the point where all the sounds are very similar but does not aim to be a perfect emulation. Some of the differences are:

- Quantization noise: The original OPL2 has a limited number of steps (bits) to represent different magnitudes in the engine which end up producing quantization noise. Opulus uses floating point numbers.

- Interpolation: The wavetables and the parameters in Opulus are interpolated this results in soft transitions and smother sine waves.

- Sample rate: the OPL2 works at 50kHz while opulus can be run at any sample rate.

These differences remove some of the grittiness of some sounds but make others sound much better. The Opulus sound engine adds a few features:

- Extra waves: double cycle sine, saw, square and triangle.

- Adds possibility of selecting exponential envelopes.

- Extra Tremolo and Vibrato depths for more pronounced effect.

- Fractional ratios for inharmonic FM.

Opulus comes packed with many presets from the Ad Lib sound library.


Here is a small audio comparison (you may need headphones or good speakers). In the examples we can hear Opulus first and the the original OPL2 chip.

<audio controls>
  <source src="../audio/Opulus-vs-OPL2.mp3" type="audio/mpeg">
Your browser does not support the audio element.
</audio>

Opulus comes with a large number of preset sounds that will help you explore the sonic capabilities of Opulus.


### The sound engine

Opulus consist of two oscillators (one FM operator) which can be used in additive mode as well (sum of the two oscillators). By default the oscillator 1 modulates oscillator 2 (1->2). Due to it's simplicity, Opulus is a great synth to learn FM.

#### Common oscillator parameters

Each oscillator provides:

- Level control: controls the output of each oscillator. In the case of the oscillator 1, the level defines the amount of modulation of oscillator 2.

- Mult: defines the multiplier used to get the frequency of the oscillator. Zero (0) corresponds to 0.5 (half the input pitch).

- Shape: selects the wavetable used by the oscillator. There are 8 tables. Four of which are from the OPL2: sine, half-sine, abs-sine and 1/4 sine. The extra waves are: double cycle sine, saw, square and triangle.

- Env: selects the kind of envelope: either ADSR or ADR in linear and exponential mode. The ADR suppresses the Sustain and jumps from Decay to Release. The ADR envelope state is good for percussive sounds.

- Attack, Decay, Sustain, Release: define the parameters of the envelope.

- Vel: defines the effect of the velocity input on the oscillator level. Full CCW means no effect on the level. Full CW means that the level is entirely defined by the velocity input.

#### Special functions

- Feed: defines the amount of feedback of oscillator 1. This is useful to create more harmonic rich sounds or noise. It can be used to create saw-like and pulse-like waves.

- Space: is a simple reverb added to the output. This makes sound everything better.

- Mode: selects the type of engine FM (1->2) or Additive (1+2).

#### Modulation inputs

Opulus provides two pairs of input+attenuverter for modulation signals. The modulations can be routed to any control. To define the modulated parameter, press the corresponding modulation button and move the control you want to modulate.

*Modulation destinations can be set in the Right+Click menu.*

#### Morph mode

Opulus provides 4 slots where sounds can be stored. In order to store a sound, press the corresponding slot button for approximately 2 seconds until the LED flashes two times. In order to recall a stored sound press the slot button with a simple click.

Once you have loaded sounds on the slots you can enter to Morph mode by pressing the Morph button. In this mode, the input signal (called as well Morph) is used to interpolate between the stored sound. A signal of 0V corresponds to Slot 1, 1V corresponds to Slot 2 respectively. Voltage values outside the range of 0-4V are wrapped to that range.

Once you are in slot mode, the controls can be used to modify the interpolated sound. The changes to the sound are relative to the initial position of the control. For example, if the Level-2 control was set at the maximum when entering the Morph mode and you decrease the Level-2, it will decrease the level of the intepolated sound.

#### Sound generation

Opulus provides a "smart" randomization algorithm which can be used to explore the sonic capabilities. The algorithm tries to produce usable sounds.

#### Additional features and settings

*NOTE: at the moment, the screen and navigation buttons are not implemented, therefore most of the settings can only be accessed with the Right-Click menu.*

Some of the "advanced" settings can only be accessed through the menus. Here's a small description:

- Env Output: allows to select which envelope is output through the Env jack. Either 1 or 2.

- Shape: allows direct access to select the desired wave.

- Env: selects the type of envelope: ADSR or ADR either linear or exponential.

- Tremolo: allows selecting the depth of the builtin tremolo effect. The tremolo uses an LFO of approximately 3.7 Hz.

- Vibrato: selects the depth of the Vibrato effect. It uses an LFO of approximately 6.4 Hz.

- Key Scale Level: defines a level of attenuation for high pitch notes. This is done in order to replicate the behavior of real instruments.

- Detune: defines the level of detuning of the oscillator. The quantity is given in Multiples.

### Micro Opulus

There is an alternative module called Micro Opulus which uses the same sound engine but provides limited functionality. Micro Opulus implement the sound interpolation found in Opulus.

