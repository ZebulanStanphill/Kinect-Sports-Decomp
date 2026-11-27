// hkpReorientAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpReorientAction.cpp): slot +0x1C of ??_7hkpReorientAction@@6B@. The constructor that takes the axes is
// out of line in the game (fn_82DF4A98, which keeps its fn_ name: its entity parameter type is not
// confirmed), so the object is allocated with the class allocator and constructed through that call.
#include "havok/hkBase.h"
#include "havok/hkpReorientAction.h"

extern "C" hkpReorientAction *fn_82DF4A98(void *mem, hkpEntity *entity, const hkVector4 &rotationAxis,
                                          const hkVector4 &upAxis, hkReal strength, hkReal damping);

hkpAction *hkpReorientAction::clone(const hkArray<hkpEntity *> &newEntities,
                                    const hkArray<hkpPhantom *> &newPhantoms) const
{
    if (newEntities.getSize() != 1) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    void *mem = hkpReorientAction::operator new(sizeof(hkpReorientAction));
    hkpReorientAction *action = fn_82DF4A98(mem, newEntities[0], m_rotationAxis, m_upAxis, m_strength, m_damping);
    action->m_userData = m_userData;
    return action;
}
