// hkpTransformAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x28: forwards to the child agent. Keeps its fn_ name.
#include "havok/hkpTransformAgent.h"

extern "C" void fn_82D6ABD8(hkpTransformAgent *self, hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
{
    self->m_childAgent->warpTime(oldTime, newTime, input);
}
