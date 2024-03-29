# SolarCharger 
[![SolarCharger CI](https://github.com/hectorespert/SolarCharger/actions/workflows/main.yml/badge.svg)](https://github.com/hectorespert/SolarCharger/actions/workflows/main.yml)
[![PlatformIO Registry](https://badges.registry.platformio.org/packages/hectorespert/library/SolarCharger.svg)](https://registry.platformio.org/libraries/hectorespert/SolarCharger)

SolarCharger library is intended to be used with the [Solar Charger Shield](http://wiki.seeedstudio.com/Solar_Charger_Shield_V2.2) by [Seeedstudio](https://www.seeedstudio.com/) or with a clone if it exists.

The only functionality provided is to measure the voltage of Lipo Battery if it is [enabled](http://wiki.seeedstudio.com/Solar_Charger_Shield_V2.2/#testing-the-solar-shield-with-a-simple-arduino-program) in the shield.

![Seedstudio Solar Charger Shield V2.2](https://static-cdn.seeedstudio.site/media/catalog/product/cache/9d0ce51a71ce6a79dfa2a98d65a0f0bd/h/t/httpsstatics3.seeedstudio.comimagesproduct106990020200.jpg)

## Installation
Use the [Arduino Library Manager](https://www.arduino.cc/en/guide/libraries#toc3) or the [PlatformIO Library Manager](https://docs.platformio.org/en/latest/librarymanager) to install the library.

## Usage

1. Include the library header.
```
#include <SolarCharger.h>
```
2. Init SolarCharger instance;
```
SolarCharger solarCharger(A0);
```
3. Read voltage in the loop function.
```
float volatge = solarCharger.readVoltage();
```
