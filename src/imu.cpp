#include <Wire.h>
#include <MPU6050.h>

#include "imu.h"

MPU6050 imu;

void imuInit()
{
    Wire.begin();
    imu.initialize();
}

float getYaw()
{
    return 0.0;
}

float getPitch()
{
    return 0.0;
}

float getRoll()
{
    return 0.0;
}
