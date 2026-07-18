#include "pid.h"

float kp = 1.2;
float ki = 0.0;
float kd = 0.15;

float previousError = 0;
float integral = 0;

void pidInit()
{
    previousError = 0;
    integral = 0;
}

float calculatePID(float error)
{
    integral += error;

    float derivative = error - previousError;

    previousError = error;

    return kp * error +
           ki * integral +
           kd * derivative;
}
