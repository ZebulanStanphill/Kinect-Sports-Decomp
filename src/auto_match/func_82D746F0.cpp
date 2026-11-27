// hkpCollisionAgent::invalidateTim (Physics/Collide/Agent/hkpCollisionAgent.cpp), the default of slot +0x24:
// empty. hkpNullAgent, hkpMultiSphereAgent and hkpCollisionAgent's other subclasses that do not override it
// inherit it.
#include "havok/hkpCollisionAgent.h"

void hkpCollisionAgent::invalidateTim(const hkpCollisionInput &input)
{
}
