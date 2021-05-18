/*
    Analog

    Author: Laštůvka Lukáš
    Library version: 1.0.0
    Company: XTor
    (c) 2021
*/

#include <Arduino.h>
#include <XTor_KY037.h>

#define analogPin A0

KY037 ky037(analogPin, KY037_A);

void setup() {
  ky037.treshold = 600;
  Serial.begin(9600);
}

void loop() {
    if (ky037.isAnalogDoubleOn())
      Serial.println("ANALOG DOUBLE ON");
    else if (ky037.isAnalogOn())
      Serial.println("ANALOG ON");

    delay(10);
}