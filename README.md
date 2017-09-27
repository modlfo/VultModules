# Vult Modules for Rack

A set of modules for [VCVRack](https://vcvrack.com) written in [Vult](http://modlfo.github.io/vult/).

![Rescomb](/images/Rescomb-render.png?raw=true "Rescomb")
![Stabile](/images/Stabile-render.png?raw=true "Stabile")
![Lateralus](/images/Lateralus-render.png?raw=true "Lateralus")

## Description

- Rescomb: a module can be used either as a filter or as a resonator (when increasing the feedback). The frequency can be controlled with a pitch voltage 1 V/Oct.

- Stabile: a state variable filter that provides three outputs: low-pass, band-pass and high-pass.

- Lateralus: a diode/transistor ladder filter based on the physical structure of the Moog filter.


## Use

Download from the [releases page](https://github.com/modlfo/VultModules/releases) the file corresponding to the VCVRack version you have. Place the `VultModules` directory in the plugins folder.

## Build

First you need to build [Rack](https://github.com/VCVRack/Rack) following the instruction in the [README](https://github.com/VCVRack/Rack/blob/master/README.md).

The clone this repository inside the `plugins` folder of Rack and use make.

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
