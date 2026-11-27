// hkpSpringAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpSpringAction.cpp): slot +0x1C of ??_7hkpSpringAction@@6B@.
#include "havok/hkBase.h"
#include "havok/hkpSpringAction.h"

hkpAction *hkpSpringAction::clone(const hkArray<hkpEntity *> &newEntities,
                                  const hkArray<hkpPhantom *> &newPhantoms) const
{
    if (newEntities.getSize() != 2) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    hkpSpringAction *sa = new hkpSpringAction(newEntities[0], newEntities[1], m_userData);
    sa->m_positionAinA = m_positionAinA;
    sa->m_positionBinB = m_positionBinB;
    sa->m_restLength = m_restLength;
    sa->m_strength = m_strength;
    sa->m_damping = m_damping;
    sa->m_onCompression = m_onCompression;
    sa->m_onExtension = m_onExtension;
    return sa;
}
