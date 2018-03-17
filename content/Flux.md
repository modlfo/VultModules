+++
title = "Flux"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Flux.png"
+++


Flux is a module that was specifically designed to work with Caudal. Flux provides the following functions:

- Attenuation and offsetting
- Sample & Hold
- Clocked comparison
- Linear and exponential signal follower (slew limiter)
- Envelope follower

Flux provides 4 similar channels and the classical Vult modulation section that allows you to control all parameters.


## Documentation
- **Mode**:
   - **S&H**: Sample and hold. Keeps the immediate value of the input on every rising edge of the clock.
   - **Comp**: Clocked comparison. Outputs +10V if the input signal (after attenuation and offset) is larger than 0V on every rising edge of the clock, otherwise outputs 0V.
   - **Off**: Bypass the S&H and comparison. The input signal (after attenuation and offset) goes straight into the follower.
- **Range**: Attenuates/amplifies the input signal from 0x to 2x.
- **Offset**: Adds a constant voltage to the input signal from -5V to 5V.
- **Follower**:
   - **Lin**: The output signal will approach the input signal linearly at a rate defined by the **Rate** knob.
   - **Exp**: The output signal will approach the input signal exponentially at a rate defined by the **Rate** knob.
   - **Env**: Envelope follower, the output signal will approach exponentially to the envelope of the input signal.
- **Rate**: Defines the speed (or time constant) at which the follower reacts.
- **In**: Input signal.
- **Clk**: Signal used to trigger the S&H and comparison, active on the rising edge.
- **Out**: Output of the processed signal.

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/x-ddYFdtANc" frameborder="0" gesture="media" allow="encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/tpdsrrSGmGM" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>
