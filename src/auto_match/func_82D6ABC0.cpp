// hkpTransformAgent::invalidateTim(const hkpCollisionInput &input)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x24: forwards to the child agent. Keeps its fn_ name.
#include "havok/hkpTransformAgent.h"

extern "C" void fn_82D6ABC0(hkpTransformAgent *self, const hkpCollisionInput &input)
{
    self->m_childAgent->invalidateTim(input);
}
