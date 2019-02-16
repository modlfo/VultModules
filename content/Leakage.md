+++
title = "Leakage"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Leakage.png"
+++

<center>Included in: <a href="/compacts/" class="btn btn-primary" role="button">VultCompacts</a> </center>


Leakage is a multi purpose voltage processor. It's a single line of Flux but with a few improvements. It can be used as:

- Gain control
- Offset
- Sample and hold
- Slew limiter (linear and exponential)
- Envelope follower
- Noise source
- Gate

## Documentation


- **Range**: Attenuates/amplifies the input signal (or noise) from 0x to 2x.
- **Offset**: Adds a constant voltage to the input signal from -5V to 5V.
- **Follower**:
   - **Lin**: The output signal will approach the input signal linearly at a rate defined by the *Rate* knob.
   - **Exp**: The output signal will approach the input signal exponentially at a rate defined by the *Rate* knob.
   - **Env**: Envelope follower, the output signal will approach exponentially to the envelope of the input signal.
- **Rate**: Defines the speed (or time constant) at which the follower reacts.
- **In**: Input signal. When disconnected Leakage generates noise.
- **Clk**: Signal used to trigger the S&H. When disconnected the S&H is bypassed.
- **Out**: Output of the processed signal.

### Modulation inputs

Leakage provides a pair of inputs and attenuverters to control the *Range* and the *Offset*. Modulating the Range can behave as a Gate or VCA allowing you to multiply the input signal by a second CV signal.

### Special Functions

Leakage behaves differently depending on which signals are connected. When the *In* signal is not connected, Leakage generates noise at it's input. When a signal is connected to the *Clk* input, Leakage becomes a Sample and Hold.

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/MeDMg5zrpZ4" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>