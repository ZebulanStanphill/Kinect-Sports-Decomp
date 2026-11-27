// hkpVehicleRayCastWheelCollide::init(const hkpVehicleInstance *) (Physics/Vehicle/WheelCollide/RayCast/
// hkpVehicleRayCastWheelCollide.cpp; slot +0xC of its vtable): makes the phantom from the box of all the wheels
// (calcWheelsAABB, the virtual function at +0x34), lets the reject listener know the chassis and listens to the
// phantom with it. Havok code, /O2.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpVehicleInstance.h"

void hkpVehicleRayCastWheelCollide::init(const hkpVehicleInstance *vehicle)
{
    hkAabb aabb;
    calcWheelsAABB(vehicle, aabb);
    m_phantom = new hkpAabbPhantom(aabb, m_wheelCollisionFilterInfo);
    m_rejectRayChassisListener.m_chassis = &vehicle->getChassis()->m_collidable;
    m_phantom->addPhantomOverlapListener(&m_rejectRayChassisListener);
}
