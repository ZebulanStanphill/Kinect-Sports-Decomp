// hkpRejectChassisListener::~hkpRejectChassisListener (hkpRejectChassisListener.cpp): an empty destructor; its own
// vtable stores are dead, so only the bases' remain (hkpPhantomOverlapListener at +0x8, hkBaseObject at +0x0).
// Called by the deleting destructor (fn_82DF9148) and by the wheel-collide destructors that hold one as a member.
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

hkpRejectChassisListener::~hkpRejectChassisListener()
{
}
