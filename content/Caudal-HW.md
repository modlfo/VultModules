+++
title = "Caudal-HW"
description = "Mechanical Chaos Source"
date = "2026-09-01T10:00:00+03:00"
image = "../images/Caudal-HW.png"
layout = "module"
+++

<div class="text-center ModulePackage"><a href="/compacts/" class="PackageButton" role="button">Part of VultCompacts</a></div>

This version of [Caudal](../caudal/) is a clone of the actual hardware module. It simulates as close as possible all the aspects of the original hardware module: it is a simulator that runs the same code as the hardware module.

Like the original, it is a chaotic voltage source based on the simulation of a multi segment pendulum. The movement of the pendulum produces slowly evolving, interrelated voltages that never repeat exactly.

You can find the full manual in the main product page <a href="https://www.vult-dsp.com/caudal">https://www.vult-dsp.com/caudal</a>

## Documentation

- **Speed**: defines how fast the pendulum swings.
- **Energy**: changes properties of the model such as gravity and mass, which makes the pendulum move more or less aggressively.
- **Speed** and **Energy** (small knobs): bipolar attenuverters for the corresponding CV inputs.
- **Mode**: cycles through the eight simulation models. The four LEDs above the button show which one is selected, and the model can also be picked directly from the right-click menu.
- **Hit**: sets a new initial position and new angular velocities. Triggered repeatedly it can make the pendulum rotate continuously.
- **Rev**: reverses the angular velocities, making every segment move in the opposite direction.
- **Store**: saves the current state of the pendulum.
- **Recall**: returns the pendulum to the stored state.

Each of the four buttons has a trigger input below it, so **Hit**, **Rev**, **Store** and **Recall** can all be driven from the patch.

### Models

The hardware version carries five models beyond the three found in the software [Caudal](../caudal/). All of them drive the same eight outputs, so changing model alters the character of the movement without changing how the module is patched.

- **Pendula**: the multi segment pendulum.
- **Planets**: bodies attracting each other through gravity, giving slower and wider orbits.
- **Fish Tank**: bodies bouncing around inside a container, giving nervous and irregular movement.
- **Fluctuating Voltage**
- **Coupled Oscillators**
- **Feedback Dynamics**
- **Analog Shift Register**
- **Kicked Rotors**

### Inputs

- **Speed** and **Energy**: CV inputs, scaled by the small attenuverters.
- **X** and **Y** (S&H): clock inputs. When patched, the corresponding row of outputs is sampled and held on every clock pulse, which turns the continuous pendulum movement into stepped voltages.

### Outputs

Two rows of four outputs, one per pendulum segment:

- **X A-D**: horizontal position of each segment.
- **Y A-D**: vertical position of each segment.

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/jXklMjG5NqE" frameborder="0" gesture="media" allow="encrypted-media" allowfullscreen></iframe>
