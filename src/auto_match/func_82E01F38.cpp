// hkpVehicleRayCastWheelCollide::getPhantoms(hkArray<hkpPhantom *> &phantomsOut) (Physics/Vehicle/WheelCollide/
// RayCast/hkpVehicleRayCastWheelCollide.cpp; slot +0x14 of its vtable): appends the phantom.
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpAabbPhantom.h"

void hkpVehicleRayCastWheelCollide::getPhantoms(hkArray<hkpPhantom *> &phantomsOut)
{
    phantomsOut.pushBack(m_phantom);
}
