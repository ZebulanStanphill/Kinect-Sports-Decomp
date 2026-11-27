// hkpTransformAgent::removePoint(hkContactPointId idToRemove)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x2C: forwards to the child agent.
#include "havok/hkpTransformAgent.h"

void hkpTransformAgent::removePoint(hkContactPointId idToRemove)
{
    m_childAgent->removePoint(idToRemove);
}
