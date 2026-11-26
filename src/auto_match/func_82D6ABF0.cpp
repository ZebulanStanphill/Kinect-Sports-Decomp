// hkpTransformAgent::removePoint(hkContactPointId idToRemove)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x2C: forwards to the child agent. Keeps its fn_ name.
#include "havok/hkpTransformAgent.h"

extern "C" void fn_82D6ABF0(hkpTransformAgent *self, hkContactPointId idToRemove)
{
    self->m_childAgent->removePoint(idToRemove);
}
