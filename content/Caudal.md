+++
title = "Caudal"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image = "../images/Caudal.png"
+++


Caudal is a chaotic source that is based on the model of a multi segment pendulum (see the video below). The core of Caudal is a detailed simulation of the pendulum system from which we can get measurements like the angular velocities and positions of the segments. These measures produces very natural oscillations that are interrelated due to the nature of the system.

I made the original model using SystemModeler and later applied manual optimizations to improve the performance and being able of running it in real-time.

## Documentation

- **Speed (Knob)**: defines how fast the pendula swings. To the left the pendula moves slow, to the right it moves fast.
- **Energy (Knob)**: changes some of the properties of the model, for example the gravity and mass. The effect is that the pendula moves more (or less) aggressive. This parameter can be used to produce variations to the movement.
- **Hit (Input and Button)**: When triggered, defines a new initial position of the pendula and new angular velocities. When triggered many times it can make the pendula rotate continuously.
- **Rev (Input and button)**: reverses the angular velocities of the pendula that makes all the segments move in the exact opposite direction that they are going.
- **Store (Input and button)**: Saves the current state of the pendula (positions and velocities).
- **Recall (Input and button)**: Returns the pendula to the Stored state.


For every segment of the pendula there are the following 3 outputs:

- **X (Output)**: Horizontal position of the segment (normalized from -5 V to 5 V).
- **Y (Output)**: Vertical position of the segment (normalized from -5 V to 5 V).
- **A (Output)**: Angle of the segment (normalized from -5 V to 5 V).

## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/jXklMjG5NqE" frameborder="0" gesture="media" allow="encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/ET-rN24VACo" frameborder="0" gesture="media" allow="encrypted-media" allowfullscreen></iframe>





