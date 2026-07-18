#include <Arduino.h>
#include "motor.h"
#include "pins.h"

#define PWM_FREQ 1000
#define PWM_RESOLUTION 8

#define LEFT_PWM_CHANNEL 0
#define RIGHT_PWM_CHANNEL 1

void motorInit()
{
    pinMode(MOTOR_LEFT_IN1, OUTPUT);
    pinMode(MOTOR_LEFT_IN2, OUTPUT);
    pinMode(MOTOR_RIGHT_IN1, OUTPUT);
    pinMode(MOTOR_RIGHT_IN2, OUTPUT);

    ledcSetup(LEFT_PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
    ledcSetup(RIGHT_PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);

    ledcAttachPin(MOTOR_LEFT_PWM, LEFT_PWM_CHANNEL);
    ledcAttachPin(MOTOR_RIGHT_PWM, RIGHT_PWM_CHANNEL);

    stopMotor();
}

void moveForward(int speed)
{
    digitalWrite(MOTOR_LEFT_IN1, HIGH);
    digitalWrite(MOTOR_LEFT_IN2, LOW);

    digitalWrite(MOTOR_RIGHT_IN1, HIGH);
    digitalWrite(MOTOR_RIGHT_IN2, LOW);

    ledcWrite(LEFT_PWM_CHANNEL, speed);
    ledcWrite(RIGHT_PWM_CHANNEL, speed);
}

void moveBackward(int speed)
{
    digitalWrite(MOTOR_LEFT_IN1, LOW);
    digitalWrite(MOTOR_LEFT_IN2, HIGH);

    digitalWrite(MOTOR_RIGHT_IN1, LOW);
    digitalWrite(MOTOR_RIGHT_IN2, HIGH);

    ledcWrite(LEFT_PWM_CHANNEL, speed);
    ledcWrite(RIGHT_PWM_CHANNEL, speed);
}

void turnLeft()
{
    digitalWrite(MOTOR_LEFT_IN1, LOW);
    digitalWrite(MOTOR_LEFT_IN2, HIGH);

    digitalWrite(MOTOR_RIGHT_IN1, HIGH);
    digitalWrite(MOTOR_RIGHT_IN2, LOW);

    ledcWrite(LEFT_PWM_CHANNEL, 170);
    ledcWrite(RIGHT_PWM_CHANNEL, 170);
}

void turnRight()
{
    digitalWrite(MOTOR_LEFT_IN1, HIGH);
    digitalWrite(MOTOR_LEFT_IN2, LOW);

    digitalWrite(MOTOR_RIGHT_IN1, LOW);
    digitalWrite(MOTOR_RIGHT_IN2, HIGH);

    ledcWrite(LEFT_PWM_CHANNEL, 170);
    ledcWrite(RIGHT_PWM_CHANNEL, 170);
}

void stopMotor()
{
    ledcWrite(LEFT_PWM_CHANNEL, 0);
    ledcWrite(RIGHT_PWM_CHANNEL, 0);
}
