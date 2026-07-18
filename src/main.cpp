#include <Arduino.h>

#include "motor.h"
#include "encoder.h"
#include "sensor.h"
#include "display.h"
#include "maze.h"
#include "floodfill.h"
#include "battery.h"
#include "imu.h"
#include "wifi.h"

void setup()
{
    Serial.begin(115200);

    motorInit();

    encoderInit();

    sensorInit();

    imuInit();

    batteryInit();

    displayInit();

    initMaze();

    wifiInit();

    Serial.println("Micromouse Robot Started");
}

void loop()
{
    solveMaze();

    showStatus();

    sendTelemetry();

    delay(10);
}
