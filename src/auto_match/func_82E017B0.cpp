// hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide() (hkpVehicleRayCastWheelCollide.cpp).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" {
void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::removePhantomOverlapListener
void fn_82D9A5F8(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::addPhantomOverlapListener
}

hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide()
    : m_wheelCollisionFilterInfo(0), m_phantom(HK_NULL)
{
    m_alreadyUsed = false;
    m_type = RAY_CAST_WHEEL_COLLIDE;
}
