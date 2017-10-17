# Vult Modules for Rack

A set of modules for [VCVRack](https://vcvrack.com) written in [Vult](http://modlfo.github.io/vult/).

![Rescomb](/images/Rescomb-render.png?raw=true "Rescomb")
![Stabile](/images/Stabile-render.png?raw=true "Stabile")
![Lateralus](/images/Lateralus-render.png?raw=true "Lateralus")
![Debriatus](/images/Debriatus-render.png?raw=true "Debriatus")
![Splie](/images/Splie-render.png?raw=true "Splie")
![Tohe](/images/Tohe-render.png?raw=true "Tohe")
![Trummor](/images/Trummor-render.png?raw=true "Trummor")



## Description

- **Rescomb**: a module can be used either as a filter or as a resonator (when increasing the feedback). The frequency can be controlled with a pitch voltage 1 V/Oct.

- **Stabile**: state variable filter that provides three outputs: low-pass, band-pass and high-pass.

- **Lateralus**: diode/transistor ladder filter based on the physical structure of the Moog filter.

- **Debriatus**: distortion unit containing wave folding, saturation and asymmetric distortion.

- **Splie**: audio splitter, just an utility but that I require when testing the modules.

- **Tohe**: simple tone control to change the character of the sound.

- **Trummor**: semi-modular drum synthesizer that can be combined with different sound and noise sources to create percussive sounds.

New modules coming!

## Donate

I've dedicated many hours developing these plugins and related projects like [Vult](http://modlfo.github.io/vult/). If you enjoy this, I would feel really happy if you make a contribution to the following link: [DONATE](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=RRMY2QPYEZT2S)

## Use

Download from the [releases page](https://github.com/modlfo/VultModules/releases) the file corresponding to the VCVRack version you have. Place the `VultModules` directory in the plugins folder.


## Build

First you need to build [Rack](https://github.com/VCVRack/Rack) following the instructions in its [README](https://github.com/VCVRack/Rack/blob/master/README.md).

Then clone this repository inside the `plugins` folder of Rack and use `make`.

```
$ cd plugins
$ git clone https://github.com/modlfo/VultModules.git
$ make
```

## Modify

To change the DSP code you need to have Vult installed. Vult can be installed by downloading it from the [Releases](https://github.com/modlfo/vult/releases) page or installed with [npm](https://www.npmjs.com/package/vult).

Once you have Vult installed you can regenerate the code with the following line:
```
$ vultc src/VultEngine.vult -ccode -o src/VultEngine
```
