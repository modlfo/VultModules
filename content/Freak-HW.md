+++
title = "Freak-HW"
description = "Manifold Filter"
date = "2018-05-21T08:57:13+03:00"
image = "../images/Freak-HW.png"
layout = "module"
+++

<div class="text-center ModulePackage"><a href="/compacts/" class="PackageButton" role="button">Part of VultCompacts</a></div>

This version of Freak is a clone of the actual hardware module. This module simulates as close as possible all the aspects of the original hardware module. It is a simulator that runs the same code as the hardware module.

You can find the full manual in the main product page <a href="https://www.vult-dsp.com/freak">https://www.vult-dsp.com/freak</a>


## Context menu

Right-clicking the module exposes the configuration that the hardware keeps behind its own menu system:

- **Mode**: how the two filter channels are arranged.
   - **Stereo**: one filter across a stereo pair.
   - **Dual**: two independent filters.
   - **Duplex-S** and **Duplex-P**: the two channels chained in series or run in parallel.
- **VCA**: assigns an amplifier to the filter outputs. **No VCA**, **Drive to L and R**, or **Resonance to L and Drive to R**.
- **Mod Range**: the voltage the modulation inputs expect, **10V** or **5V**.
- **Out Range**: output attenuation, **100%**, **70%** or **30%**.
- **Stereo Mod**: how modulation is applied across the pair. **Normal**, **Inverted** or **Summed**.
- **Mix Output**: blends the stereo pair towards mono, from **Stereo (0%)** through 10, 25, 50 and 75% to **Mono (100%)**.


## Videos

<iframe width="560" height="315" src="https://www.youtube.com/embed/oH_h6vUO7XM" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
