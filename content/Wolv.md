
+++
title = "Wolv"
description = "Waveshaper"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Wolv.png"
+++

<div class="text-center ModulePackage"><a href="/free/" class="PackageButton" role="button">Part of VultModulesFree</a></div>

Wolv is a module capable of producing very interesting timbres out of basic waveforms. It is a unique wave folder/shaper, but it is lesser known than other modules in the same category. Using Wolv, you can add a PWM-like effect to any waveform while at the same time combining it with a folded version of the wave. It can gradually alter the odd-even relation of the harmonics.

## Control Description

### Main controls

- **Width**: defines the pulse width of the signal. This control defines the precise point where the signal is chopped.
- **Fold-Mix**: controls the level of the folded signal. This signal is mixed only within the blank spaces produced when changing the Width control.
- **Pulse-Amp**: performs a gradual rectification of the main signal, producing a double-frequency effect.
- **Offset**: changes the input signal DC component. This will affect the resulting wave produced when tweaking the other parameters described before.

### CV control

The Width and Offset parameters can be controlled using the included attenuators and CV inputs.

### Inputs and Outputs

- **Input**: main input of the module. It accepts both audio rate and low frequency signals (including DC).
- **Fold**: outputs the folded signal only. Notice that the folded signal is generated only when the Width is larger than zero.
- **Output**: main output of the module. This signal can contain a DC component. When processing audio, it is recommended to run the output signal through an audio processing module (like a filter) since most of them will remove the DC component.

## Video

<iframe width="560" height="315" src="https://www.youtube.com/embed/ZWuSm_xHFf8" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/QpmERREZ2pk" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
