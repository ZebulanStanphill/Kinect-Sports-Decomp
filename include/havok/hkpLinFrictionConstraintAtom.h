// hkpLinFrictionConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x8 bytes: friction
// along one axis. The members, their offsets and types are the game's reflection table for the class (lbl_8213FEC8,
// the hkClassMember array of hkpLinFrictionConstraintAtomClass). The constructor is inline in the constraint datas'
// constructors; it sets the atom type and m_isEnabled = true. The finish constructor (Havok's) leaves the loaded
// members alone.
#ifndef HAVOK_HKPLINFRICTIONCONSTRAINTATOM_H
#define HAVOK_HKPLINFRICTIONCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpLinFrictionConstraintAtom : public hkpConstraintAtom {
    hkpLinFrictionConstraintAtom() : hkpConstraintAtom(TYPE_LIN_FRICTION), m_isEnabled(true) {}
    hkpLinFrictionConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_isEnabled;         // +0x2
    hkUint8 m_frictionAxis;      // +0x3
    hkReal m_maxFrictionForce;   // +0x4
};

#endif
