// hkpVehicleRayCastWheelCollide::collideWheels(const hkReal deltaTime, const hkpVehicleInstance *vehicle,
// CollisionDetectionWheelOutput *cdInfoOut) (Physics/Vehicle/WheelCollide/RayCast/
// hkpVehicleRayCastWheelCollide.cpp; slot +0x10 of its vtable): casts every wheel's ray and fills the wheel's
// output from the hit or without one, then calls wheelCollideCallback. The call without a hit passes 1 where
// the wheel index is expected, as the game's code does.
#include "havok/hkpVehicleData.h"
#include "havok/hkpVehicleInstance.h"
#include "havok/hkpVehicleWheelCollide.h"

// hkpWorldRayCastOutput, 0x60 bytes: only the members its inlined constructor sets (the class has no header).
struct hkpWorldRayCastOutput {
    char pad0[0x10];
    float weight;     // +0x10
    int a;            // +0x14
    char pad18[0x8];
    unsigned int b;   // +0x20
    char pad24[0x1c];
    int c;            // +0x40
    char pad44[0xc];
    unsigned int d;   // +0x50: the collidable that was hit
    char pad54[0xc];
};

void hkpVehicleRayCastWheelCollide::collideWheels(const hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                                  CollisionDetectionWheelOutput *cdInfoOut)
{
    unsigned char i;
    unsigned char n;
    hkpWorldRayCastOutput output;

    i = 0;
    n = vehicle->m_data->m_numWheels;
    if (n != 0) {
        do {
            CollisionDetectionWheelOutput &cdInfo = cdInfoOut[i];
            output.weight = 1.0f;
            output.a = -1;
            output.c = 0;
            output.b = 0xffffffff;
            output.d = 0;
            castSingleWheel(vehicle->m_wheelsInfo[i], output);
            if (output.d != 0)
                getCollisionOutputFromCastResult(vehicle, i, output, cdInfo);
            else
                getCollisionOutputWithoutHit(vehicle, 1, cdInfo);
            wheelCollideCallback(vehicle, i, cdInfo);
            i = i + 1;
        } while (i < n);
    }
}
