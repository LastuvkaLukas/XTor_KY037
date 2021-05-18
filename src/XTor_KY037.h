/*
    Library for KY037

    Available for Arduino boards
    Author: Laštůvka Lukáš
    Version: 1.0.0
    Company: XTor
    GitHub: https://github.com/LastuvkaLukas/XTor_KY037
    (c) 2021
*/

#ifndef XTor_KY037_H
#define XTor_KY037_H

#define KY037_D true
#define KY037_A false

#include <Arduino.h>

class KY037
{
private:
    uint8_t digit;
    uint8_t data;
    uint16_t timer[2] = {100, 500};
    uint32_t onTime;
    bool onlySet = false;
    bool set;
public:
    int16_t treshold = 0;
    KY037(uint8_t digitalPin, uint8_t analogPin);
    KY037(uint8_t pin, bool set);
    bool isDigitalOn();
    bool isDigitalDoubleOn();
    bool isAnalogOn();
    bool isAnalogDoubleOn();
};

#endif