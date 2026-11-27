// hkpDashpotAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpDashpotAction.cpp): slot +0x1C of ??_7hkpDashpotAction@@6B@. The constructor keeps its fn_ name
// (fn_82DEFF58: its parameter types are not confirmed), so the object is allocated with the class
// allocator and constructed through that call.
#include "havok/hkBase.h"
#include "havok/hkpDashpotAction.h"

extern "C" hkpDashpotAction *fn_82DEFF58(void *mem, hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);

hkpAction *hkpDashpotAction::clone(const hkArray<hkpEntity *> &newEntities,
                                   const hkArray<hkpPhantom *> &newPhantoms) const
{
    if (newEntities.getSize() != 2) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    void *mem = hkpDashpotAction::operator new(sizeof(hkpDashpotAction));
    hkpDashpotAction *da = fn_82DEFF58(mem, newEntities[0], newEntities[1], m_userData);
    da->m_point[0] = m_point[0];
    da->m_point[1] = m_point[1];
    da->m_strength = m_strength;
    da->m_damping = m_damping;
    da->m_impulse = m_impulse;
    return da;
}
