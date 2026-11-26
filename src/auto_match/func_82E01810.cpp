// hkpVehicleRayCastWheelCollide::init(const hkpVehicleInstance *) (Physics/Vehicle/WheelCollide/RayCast/
// hkpVehicleRayCastWheelCollide.cpp; slot +0xC of its vtable): makes the phantom from the box of all the wheels
// (calcWheelsAABB, the virtual function at +0x34), lets the reject listener know the chassis and listens to the
// phantom with it. hkpAabbPhantom's constructor is out of line (fn_82D8D6C0). Havok code, /O2.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpVehicleInstance.h"

extern "C" hkpAabbPhantom *fn_82D8D6C0(void *self, const hkAabb &aabb, hkUint32 collisionFilterInfo);   // hkpAabbPhantom::hkpAabbPhantom

extern "C" void fn_82E01810(hkpVehicleRayCastWheelCollide *self, const hkpVehicleInstance *vehicle)
{
    hkAabb aabb;
    self->calcWheelsAABB(vehicle, aabb);
    self->m_phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(sizeof(hkpAabbPhantom)), aabb,
                                  self->m_wheelCollisionFilterInfo);
    self->m_rejectRayChassisListener.m_chassis = &vehicle->getChassis()->m_collidable;
    self->m_phantom->addPhantomOverlapListener(&self->m_rejectRayChassisListener);
}
