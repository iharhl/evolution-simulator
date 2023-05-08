#ifndef SENS_ACT_H_
#define SENS_ACT_H_

// Sensors and actuators constants
constexpr float SENSOR_MIN = 0.f;
constexpr float SENSOR_MAX = 1.f;
constexpr float ACTUATOR_MIN = 0.f;
constexpr float ACTUATOR_MAX = 1.f;

enum Sensor
{
    locX,       // dist from left edge
    locY,       // dist from top?
    pops,       // population in neighbor cells
    popsFwd,    // population in forward direction
    age,        // age of an organism
    randVal     // random value
};

enum Actuator
{
    moveX,
    moveY,
    moveFwd,
    moveRand
};

#endif