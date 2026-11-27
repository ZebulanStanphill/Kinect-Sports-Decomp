// hkpBvAgent::removePoint (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.cpp), its vtable's slot 0x2C: forwards to
// the child agent when there is one (contact points belong to the child agent only).
#include "havok/hkpBvAgent.h"

void hkpBvAgent::removePoint(hkContactPointId idToRemove)
{
    if (m_childAgent) {
        m_childAgent->removePoint(idToRemove);
    }
}
