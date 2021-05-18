/*
    AnalogAndDigital

    Author: Laštůvka Lukáš
    Library version: 1.0.1
    Company: XTor
    GitHub: https://github.com/LastuvkaLukas/XTor_KY037
    (c) 2021
*/

#include <Arduino.h>
#include <XTor_KY037.h>

#define digitalPin 2
#define analogPin A0

KY037 ky037(digitalPin, analogPin);

void setup() {
  ky037.treshold = 600;
  Serial.begin(9600);
}

void loop() {
    if (ky037.isDigitalDoubleOn())
      Serial.println("DIGITAL DOUBLE ON");
    else if (ky037.isDigitalOn())
      Serial.println("DIGITAL ON");

    if (ky037.isAnalogDoubleOn())
      Serial.println("ANALOG DOUBLE ON");
    else if (ky037.isAnalogOn())
      Serial.println("ANALOG ON");

    delay(10);
}