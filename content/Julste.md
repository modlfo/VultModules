+++
title = "Julste"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Julste.png"
+++

<center>Included in: <a href="/premium/" class="btn btn-primary" role="button">VultModules</a> <a href="/free/" class="btn btn-primary" role="button">VultModules Free</a> </center>


Julste is the only model that I haven't developed by myself. When I started doing research on low pass gates I came across the paper "A DIGITAL MODEL OF THE BUCHLA LOWPASS-GATE" by Julian Parker and Stefano D’Angelo. They did all the hard job modeling it, and I rewrote the code in the Vult language and created the module.

The module has a few extensions to the original model, like controls to process the gate input.

## Documentation

- **Range**: attenuates or amplifies the gate signal allowing to open or close more the gate.
- **Offset**: adds an offset (positive or negative) to the gate. This allows defining the minimum and maximum values of gate.
- **Resonance**: in low pass mode, defines the resonance of the filter.
- **Sharpness**: defines how much the vactrol behavior affects the gate. In full left, the gate will follow quickly the gate signal. Full right it will behave more like an envelope.
- **Mode**:
   - **VCA**: the gate opens and closes controlling the amplitude of the signal.
   - **LowPass**: the gate opens and closes controlling the cutoff frequency of the filter.
- **Gate**: signal to control the gate. The behavior is different depending on the characteristics of the gate. Low voltages will not open the gate completely. The gate voltage can be modified with the Range and Offset controls.
- **Input**: signal to be processed.
- **Output**: processed signal.


## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/tpdsrrSGmGM" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/LBweginmvDQ" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/QLRYX9xlE7U" frameborder="0" allowfullscreen></iframe>
