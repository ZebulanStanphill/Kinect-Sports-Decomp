// hkpVehicleDefaultSteering::hkpVehicleDefaultSteering() (Physics/Vehicle/Steering/Default/hkpVehicleDefaultSteering.cpp).
#include "havok/hkBase.h"

class hkpVehicleSteering : public hkReferencedObject {
public:
    hkpVehicleSteering() {}
};

class hkpVehicleDefaultSteering : public hkpVehicleSteering {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultSteering();

    hkReal m_maxSteeringAngle;             // +0x8
    hkReal m_maxSpeedFullSteeringAngle;    // +0xC
    hkArray<hkBool> m_doesWheelSteer;      // +0x10
};

hkpVehicleDefaultSteering::hkpVehicleDefaultSteering()
{
    m_maxSteeringAngle = 0.0f;
    m_maxSpeedFullSteeringAngle = 0.0f;
}
