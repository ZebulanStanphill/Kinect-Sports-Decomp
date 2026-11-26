// hkpAngularDashpotAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpAngularDashpotAction.cpp). Kept as an extern "C" function under its fn_ name with an explicit self;
// classes as in func_82DEEE50.cpp.
#include "havok/hkBase.h"
#include "havok/hkpAngularDashpotAction.h"

extern "C" hkpAction *fn_82DEEEB8(const hkpAngularDashpotAction *self, const hkArray<hkpEntity *> &newEntities,
                                   const hkArray<hkpPhantom *> &newPhantoms)
{
    if (newEntities.getSize() != 2) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    hkpAngularDashpotAction *da = new hkpAngularDashpotAction(newEntities[0], newEntities[1], self->m_userData);
    da->m_rotation = self->m_rotation;
    da->m_strength = self->m_strength;
    da->m_damping = self->m_damping;
    return da;
}
