+++
title = "Rescomb"
date = "2017-10-28T22:37:03+03:00"
layout = "module"
image ="../images/Rescomb.png"

+++

<center>Included in:<img src="../images/VultModulesSticker.svg"> <img src="../images/VultModulesFreeSticker.svg"> </center>


Rescomb is a resonant Comb filter. A comb filter is a special kind of filter that creates multiple spaced notches. This module provides an CV input which is tuned (1V/octave) and a feedback parameter. when the feedback is high it will resonate enhancing the frequencies of the comb.

This is the first module that I designed for VCV Rack. I really like Comb filters, so I coded in Vult a very simple version after playing with it and tweaking parameters I got this version. Rescomb is a weird effect, which in fact I use it more as an instrument than as a filter.

## Documentation

- **V/Oct**: this input will define the frequency of the filter/resonator.
- **Tune**: provides an offset for the V/OCT signal. When there is not V/OCT signal the reference is 0V.
- **Comb**: defines the type of comb filter. Depending on the V/OCT and the input, it will provide different sonic characteristics.
- **Feedback**: defines the type of comb filter. Depending on the V/OCT and the input, it will provide different sonic characteristics.
- **Input**: used to provide the input audio. Without a signal there will be no sound.
- **Outpus**: the output signal.




## Demo

<iframe width="560" height="315" src="https://www.youtube.com/embed/JgqctTgEj3c" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

<iframe width="560" height="315" src="https://www.youtube.com/embed/6ujIAUIaXNk" frameborder="0" allowfullscreen></iframe>