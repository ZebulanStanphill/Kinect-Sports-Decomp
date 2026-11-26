// hkpTwistLimitConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x14 bytes: limits
// the twist about one axis. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FC50, the hkClassMember array of hkpTwistLimitConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type and m_isEnabled = true. The finish constructor (Havok's)
// leaves the loaded members alone.
#ifndef HAVOK_HKPTWISTLIMITCONSTRAINTATOM_H
#define HAVOK_HKPTWISTLIMITCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpTwistLimitConstraintAtom : public hkpConstraintAtom {
    hkpTwistLimitConstraintAtom() : hkpConstraintAtom(TYPE_TWIST_LIMIT), m_isEnabled(true) {}
    hkpTwistLimitConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_isEnabled;               // +0x2
    hkUint8 m_twistAxis;               // +0x3
    hkUint8 m_refAxis;                 // +0x4
    hkReal m_minAngle;                 // +0x8
    hkReal m_maxAngle;                 // +0xC
    hkReal m_angularLimitsTauFactor;   // +0x10
};

#endif
