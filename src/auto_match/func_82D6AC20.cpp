// hkpTransformAgent::createZombie(hkContactPointId idTobeZombified)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x34: forwards to the child agent. Keeps its fn_ name.
#include "havok/hkpTransformAgent.h"

extern "C" void fn_82D6AC20(hkpTransformAgent *self, hkContactPointId idTobeZombified)
{
    self->m_childAgent->createZombie(idTobeZombified);
}
