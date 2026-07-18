#include <Arduino.h>
#include <Wire.h>
#include <VL53L0X.h>

#include "sensor.h"

VL53L0X leftSensor;
VL53L0X frontSensor;
VL53L0X rightSensor;

void sensorInit()
{
    Wire.begin();

    leftSensor.init();
    frontSensor.init();
    rightSensor.init();

    leftSensor.startContinuous();
    frontSensor.startContinuous();
    rightSensor.startContinuous();
}

int leftDistance()
{
    return leftSensor.readRangeContinuousMillimeters();
}

int frontDistance()
{
    return frontSensor.readRangeContinuousMillimeters();
}

int rightDistance()
{
    return rightSensor.readRangeContinuousMillimeters();
}
