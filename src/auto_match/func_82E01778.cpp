// hkpVehicleRayCastWheelCollide::addToWorld(hkpWorld *world) (Physics/Vehicle/WheelCollide/RayCast/
// hkpVehicleRayCastWheelCollide.cpp; slot +0x20 of its vtable): adds the phantom to the world
// (hkpWorld::addPhantom, fn_82D83B68, through hkpWorld.h's wrapper).
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpWorld.h"

void hkpVehicleRayCastWheelCollide::addToWorld(hkpWorld *world)
{
    world->addPhantom(m_phantom);
}
