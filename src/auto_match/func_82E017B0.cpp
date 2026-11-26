// hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide() (hkpVehicleRayCastWheelCollide.cpp).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide()
    : m_wheelCollisionFilterInfo(0), m_phantom(HK_NULL)
{
    m_alreadyUsed = false;
    m_type = RAY_CAST_WHEEL_COLLIDE;
}
