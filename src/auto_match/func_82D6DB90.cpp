// hkpBvAgent::invalidateTim (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.cpp), its vtable's slot +0x24:
// forwards to the bounding volume agent and to the child agent when there is one.
#include "havok/hkpBvAgent.h"

void hkpBvAgent::invalidateTim(const hkpCollisionInput &input)
{
    m_boundingVolumeAgent->invalidateTim(input);
    if (m_childAgent) {
        m_childAgent->invalidateTim(input);
    }
}
