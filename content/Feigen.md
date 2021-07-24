
+++
title = "Feigen"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Feigen.png"
+++

<center>Included in: <a href="/mysteries/" class="btn btn-primary" role="button">VultMysteries</a> </center>

Feigen is a quasi-chaotic voltage source that has a few interesting properties for music. On it's core lies the Logistic Map equation which is capable of producing periodic and chaotic patterns depending on it's settings. Additionally, the generated sequences can be controlled by selecting the initial state (the Root) and resetting the module.

## Control Description

### Main controls

- **Growth**: It defines the characteristics of the generated voltages. When set full CCW, the module will generate oscillate producing two values. As the control is moved CW the bifurcation points are reached producing more values. In some special points, the produced patterns will be periodic. As you approach the full CW position the complexity of the sequences wil increase until these are perceived to be chaotic.
- **Range**: Attenuates/amplifies the input signal from 0x to 2x.
- **Offset**: Adds a constant voltage to the input signal from -5V to 5V.
- **Root**: Defines the start of the sequence after a reset signal is received.

### Attenuverters

The controls (Growth, Range and Offset) have a dedicated attenuverter and input jack. These can be used to control those parameters using CV.

### Inputs and Outputs

- **Reset**: sets the internal state of the module to the value defined by the Root control and Root input.
- **Clk**: receives the clock signal of the module.
- **Out**: main output of the module. The offset and amplitude can be adjusted using the Offset and Range controls.


## Video

<iframe width="560" height="315" src="https://www.youtube.com/embed/zhSa0nGoq5c" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>