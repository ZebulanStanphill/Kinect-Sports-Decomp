// hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection(const hkpVehicleInstance *)
// (Physics/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.cpp; slot +0x18 of
// ??_7hkpVehicleRayCastWheelCollide@@6B@): moves the phantom to the box of all the wheels (calcWheelsAABB, the
// virtual function at +0x34: 82E019A8 takes the min and max over the wheels). Havok code, /O2.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"

void hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection(const hkpVehicleInstance *vehicle)
{
    hkAabb aabb;
    calcWheelsAABB(vehicle, aabb);
    m_phantom->setAabb(aabb);
}
