// hkpSpringAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpSpringAction.cpp). Kept as an extern "C" function under its fn_ name with an explicit self;
// classes as in func_82DEEEB8.cpp.
#include "havok/hkBase.h"
#include "havok/hkpSpringAction.h"

extern "C" hkpAction *fn_82DF5430(const hkpSpringAction *self, const hkArray<hkpEntity *> &newEntities,
                                   const hkArray<hkpPhantom *> &newPhantoms)
{
    if (newEntities.getSize() != 2) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    hkpSpringAction *sa = new hkpSpringAction(newEntities[0], newEntities[1], self->m_userData);
    sa->m_positionAinA = self->m_positionAinA;
    sa->m_positionBinB = self->m_positionBinB;
    sa->m_restLength = self->m_restLength;
    sa->m_strength = self->m_strength;
    sa->m_damping = self->m_damping;
    sa->m_onCompression = self->m_onCompression;
    sa->m_onExtension = self->m_onExtension;
    return sa;
}
