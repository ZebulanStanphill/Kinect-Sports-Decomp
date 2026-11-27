// hkpBvAgent::warpTime (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.cpp), its vtable's slot +0x28: forwards
// to the bounding volume agent and to the child agent when there is one.
#include "havok/hkpBvAgent.h"

void hkpBvAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
{
    m_boundingVolumeAgent->warpTime(oldTime, newTime, input);
    if (m_childAgent) {
        m_childAgent->warpTime(oldTime, newTime, input);
    }
}
