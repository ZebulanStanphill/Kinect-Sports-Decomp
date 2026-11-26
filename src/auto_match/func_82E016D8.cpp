// hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection(const hkpVehicleInstance *)
// (Physics/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.cpp): moves the phantom to the box of
// all the wheels (calcWheelsAABB, the virtual function at +0x34: 82E019A8 takes the min and max over the
// wheels). Havok code, /O2. This function fills slot +0x18 of ??_7hkpVehicleRayCastWheelCollide@@6B@.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" void fn_82E016D8(hkpVehicleRayCastWheelCollide *self, const hkpVehicleInstance *vehicle)
{
    hkAabb aabb;
    self->calcWheelsAABB(vehicle, aabb);
    self->m_phantom->setAabb(aabb);
}
