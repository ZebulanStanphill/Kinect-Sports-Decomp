// hkpVehicleRayCastWheelCollide::setCollisionFilterInfo(hkUint32 filterInfo) (Physics/Vehicle/WheelCollide/
// RayCast/hkpVehicleRayCastWheelCollide.cpp; slot +0x28 of its vtable): keeps the filter info and gives it to
// the phantom's collidable when there is a phantom.
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpAabbPhantom.h"

void hkpVehicleRayCastWheelCollide::setCollisionFilterInfo(hkUint32 filterInfo)
{
    m_wheelCollisionFilterInfo = filterInfo;
    if (m_phantom)
        m_phantom->m_collidable.setCollisionFilterInfo(filterInfo);
}
