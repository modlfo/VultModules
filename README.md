# Vult Modules for Rack

A set of modules for VCVRack written in Vult.

## Use

Download from the releases page the file corresponding to the VCVRack version you have. Place the `VultModules` directory in the plugins folder.

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
