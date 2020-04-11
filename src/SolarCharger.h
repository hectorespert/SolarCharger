#ifndef SolarCharger_h
#define SolarCharger_h

#include <Arduino.h>

class SolarCharger
{
  public:
    SolarCharger(int pin);
    float readVoltage();
  private:
    int _pin;
};


#endif