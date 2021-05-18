#include "XTor_KY037.h"

KY037::KY037(uint8_t digitalPin, uint8_t analogPin)
{
    pinMode(digitalPin, INPUT);
    pinMode(analogPin, INPUT);
    digit = digitalPin;
    data = analogPin;
}

KY037::KY037(uint8_t pin, bool set)
{
    onlySet = true;
    this->set = set;
    pinMode(pin, INPUT);
    if (set)
        digit = pin;
    else
        data = pin;
}

bool KY037::isDigitalOn()
{
    if(onlySet) {
        if (set == KY037_D)
            return digitalRead(digit);
        else
            return false;
    }
    return digitalRead(digit);
}

bool KY037::isAnalogOn()
{
    if(onlySet) {
        if (set == KY037_A)
            return analogRead(data) >= treshold;
        else
            return false;
    }
    return analogRead(data) >= treshold;
}

bool KY037::isDigitalDoubleOn() {
    bool res = false;
    if (isDigitalOn())
    {
        if ((millis() - onTime >= timer[0]) && (millis() - onTime <= timer[1]))
            res = true;
        else
            res = false;
        onTime = millis();
    }
    return res;
}

bool KY037::isAnalogDoubleOn() {
    bool res = false;
    if (isAnalogOn())
    {
         if ((millis() - onTime >= timer[0]) && (millis() - onTime <= timer[1]))
            res = true;
        else
            res = false;
        onTime = millis();
    }
    return res;
}
