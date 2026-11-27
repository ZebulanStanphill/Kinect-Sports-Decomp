// hkpVehicleInstance::getPhantoms(hkArray<hkpPhantom *> &phantomsOut) (Havok 2010,
// Physics/Vehicle/hkpVehicleInstance.cpp; slot +0x14 of ??_7hkpVehicleInstance@@6B@): the wheel collide's
// phantoms (its slot +0x14).
#include "havok/hkpVehicleInstance.h"
#include "havok/hkpVehicleWheelCollide.h"

void hkpVehicleInstance::getPhantoms(hkArray<hkpPhantom *> &phantomsOut)
{
    m_wheelCollide->getPhantoms(phantomsOut);
}
