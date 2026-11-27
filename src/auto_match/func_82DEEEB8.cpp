// hkpAngularDashpotAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpAngularDashpotAction.cpp): slot +0x1C of ??_7hkpAngularDashpotAction@@6B@.
#include "havok/hkBase.h"
#include "havok/hkpAngularDashpotAction.h"

hkpAction *hkpAngularDashpotAction::clone(const hkArray<hkpEntity *> &newEntities,
                                          const hkArray<hkpPhantom *> &newPhantoms) const
{
    if (newEntities.getSize() != 2) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    hkpAngularDashpotAction *da = new hkpAngularDashpotAction(newEntities[0], newEntities[1], m_userData);
    da->m_rotation = m_rotation;
    da->m_strength = m_strength;
    da->m_damping = m_damping;
    return da;
}
