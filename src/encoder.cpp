#include <Arduino.h>
#include "encoder.h"
#include "pins.h"

volatile long leftTicks = 0;
volatile long rightTicks = 0;

void IRAM_ATTR leftISR()
{
    leftTicks++;
}

void IRAM_ATTR rightISR()
{
    rightTicks++;
}

void encoderInit()
{
    pinMode(ENCODER_LEFT_A, INPUT_PULLUP);
    pinMode(ENCODER_RIGHT_A, INPUT_PULLUP);

    attachInterrupt(digitalPinToInterrupt(ENCODER_LEFT_A), leftISR, RISING);
    attachInterrupt(digitalPinToInterrupt(ENCODER_RIGHT_A), rightISR, RISING);
}

long getLeftTicks()
{
    return leftTicks;
}

long getRightTicks()
{
    return rightTicks;
}

void resetEncoders()
{
    leftTicks = 0;
    rightTicks = 0;
}
