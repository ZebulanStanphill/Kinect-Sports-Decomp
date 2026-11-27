// Steering angle from the driver input, reduced above the full-steering speed.
// It matches only as a member function: the field of this is loaded before the input, as the second factor.

#include "xdk/vectorintrinsics.h"

extern "C" void fn_82CE50D8(__vector4 *out, const void *rotation, const void *direction);

struct Chassis_82DFB860 {
    char padding000[0xf0];
    __vector4 rotation[3]; // 0xf0
    char padding120[0x90];
    __vector4 linearVelocity; // 0x1b0
};

struct VehicleData_82DFB860 {
    char padding00[0x40];
    __vector4 forward; // 0x40
};

struct Vehicle_82DFB860 {
    char padding00[0x18];
    Chassis_82DFB860 *chassis;  // 0x18
    VehicleData_82DFB860 *data; // 0x1c
};

struct DriverInput_82DFB860 {
    char padding00[8];
    float steeringWheelInput; // 0x8
};

struct Steering_82DFB860 {
    char padding00[8];
    float maxSteeringAngle;          // 0x8
    float maxSpeedFullSteeringAngle; // 0xc

    void calcMainSteeringAngle(float deltaTime, Vehicle_82DFB860 *vehicle, DriverInput_82DFB860 *input,
                               float *mainSteeringAngle);
};

void Steering_82DFB860::calcMainSteeringAngle(float deltaTime, Vehicle_82DFB860 *vehicle,
                                              DriverInput_82DFB860 *input, float *mainSteeringAngle)
{
    __vector4 forward;
    float speed;

    *mainSteeringAngle = input->steeringWheelInput * maxSteeringAngle;
    fn_82CE50D8(&forward, vehicle->chassis->rotation, &vehicle->data->forward);
    __stvewx(__vmsum3fp(vehicle->chassis->linearVelocity, forward), &speed, 0);
    if (speed > maxSpeedFullSteeringAngle) {
        float factor = maxSpeedFullSteeringAngle / speed;
        *mainSteeringAngle = *mainSteeringAngle * factor * factor;
    }
}
