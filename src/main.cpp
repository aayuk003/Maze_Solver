#include <Arduino.h>

#include "motor.h"
#include "sensor.h"
#include "encoder.h"
#include "maze.h"
#include "floodfill.h"
#include "display.h"

void setup()
{
    motorInit();
    sensorInit();
    encoderInit();
    displayInit();
    initMaze();
}

void loop()
{
    solveMaze();
}
