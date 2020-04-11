#include <Arduino.h>
#include <SolarCharger.h>

SolarCharger::SolarCharger(int pin) {
  _pin = pin;
}


float SolarCharger::readVoltage()
{
   return (float(analogRead(_pin)) *5 ) / 1023 * 2;
}