// hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide() (hkpVehicleRayCastWheelCollide.cpp).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" {
void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::removePhantomOverlapListener
void fn_82D9A5F8(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::addPhantomOverlapListener
}

// Only what the wheel-collide code touches.
class hkpPhantom : public hkReferencedObject {
public:
    void removePhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A420(this, listener); }
    void addPhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A5F8(this, listener); }
};

class hkpAabbPhantom : public hkpPhantom {
};

hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide()
    : m_wheelCollisionFilterInfo(0), m_phantom(HK_NULL)
{
    m_alreadyUsed = false;
    m_type = RAY_CAST_WHEEL_COLLIDE;
}
