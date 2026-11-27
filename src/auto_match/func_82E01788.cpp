// hkpVehicleRayCastWheelCollide::removeFromWorld() (Physics/Vehicle/WheelCollide/RayCast/
// hkpVehicleRayCastWheelCollide.cpp; slot +0x24 of its vtable): removes the phantom from its world
// (hkpWorld::removePhantom, fn_82D82E28, keeps its fn_ name). The game's version does not test the world.
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpAabbPhantom.h"

extern "C" void fn_82D82E28(hkpWorld *world, hkpPhantom *phantom);   // hkpWorld::removePhantom

void hkpVehicleRayCastWheelCollide::removeFromWorld()
{
    fn_82D82E28(m_phantom->m_world, m_phantom);
}
