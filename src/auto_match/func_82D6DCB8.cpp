// hkpBvAgent::commitPotential (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.cpp), its vtable's slot 0x30: forwards to
// the child agent when there is one (contact points belong to the child agent only).
#include "havok/hkpBvAgent.h"

void hkpBvAgent::commitPotential(hkContactPointId newId)
{
    if (m_childAgent) {
        m_childAgent->commitPotential(newId);
    }
}
