#ifndef Arduino_h
  #include <Arduino.h>
#endif

#include <SolarCharger.h>

SolarCharger solarCharger(A0);

void setup() {
  
  Serial.begin(9600);

}

void loop() {
  
  Serial.print("Solar Charger voltage: ");
  Serial.print(solarCharger.readVoltage());
  Serial.println("V");

  delay(1000);
}
