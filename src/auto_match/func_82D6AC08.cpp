// hkpTransformAgent::commitPotential(hkContactPointId newId)
// (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x30: forwards to the child agent. Keeps its fn_ name.
#include "havok/hkpTransformAgent.h"

extern "C" void fn_82D6AC08(hkpTransformAgent *self, hkContactPointId newId)
{
    self->m_childAgent->commitPotential(newId);
}
