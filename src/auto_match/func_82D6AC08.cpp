// hkpTransformAgent::commitPotential(hkContactPointId newId)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x30: forwards to the child agent.
#include "havok/hkpTransformAgent.h"

void hkpTransformAgent::commitPotential(hkContactPointId newId)
{
    m_childAgent->commitPotential(newId);
}
