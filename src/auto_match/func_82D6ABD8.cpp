// hkpTransformAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x28: forwards to the child agent.
#include "havok/hkpTransformAgent.h"

void hkpTransformAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
{
    m_childAgent->warpTime(oldTime, newTime, input);
}
