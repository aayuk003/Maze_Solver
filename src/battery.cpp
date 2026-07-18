#include <Arduino.h>
#include "battery.h"
#include "pins.h"

void batteryInit()
{
    pinMode(BATTERY_PIN, INPUT);
}

float getBatteryVoltage()
{
    int adc = analogRead(BATTERY_PIN);

    float voltage = (adc / 4095.0) * 3.3 * 2.0;

    return voltage;
}

int batteryPercentage()
{
    float v = getBatteryVoltage();

    if (v >= 8.4) return 100;
    if (v <= 6.4) return 0;

    return (int)((v - 6.4) * 100.0 / 2.0);
}
