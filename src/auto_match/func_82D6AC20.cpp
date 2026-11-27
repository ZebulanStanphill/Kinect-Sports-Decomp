// hkpTransformAgent::createZombie(hkContactPointId idTobeZombified)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x34: forwards to the child agent.
#include "havok/hkpTransformAgent.h"

void hkpTransformAgent::createZombie(hkContactPointId idTobeZombified)
{
    m_childAgent->createZombie(idTobeZombified);
}
