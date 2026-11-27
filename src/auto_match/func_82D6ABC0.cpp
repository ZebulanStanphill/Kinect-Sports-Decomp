// hkpTransformAgent::invalidateTim(const hkpCollisionInput &input)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x24: forwards to the child agent.
#include "havok/hkpTransformAgent.h"

void hkpTransformAgent::invalidateTim(const hkpCollisionInput &input)
{
    m_childAgent->invalidateTim(input);
}
