// hkpAngLimitConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x10 bytes: limits the
// angle about one axis. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FBC0, the hkClassMember array of hkpAngLimitConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type and m_isEnabled = true. The finish constructor (Havok's)
// leaves the loaded members alone.
#ifndef HAVOK_HKPANGLIMITCONSTRAINTATOM_H
#define HAVOK_HKPANGLIMITCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpAngLimitConstraintAtom : public hkpConstraintAtom {
    hkpAngLimitConstraintAtom() : hkpConstraintAtom(TYPE_ANG_LIMIT), m_isEnabled(true) {}
    hkpAngLimitConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_isEnabled;               // +0x2
    hkUint8 m_limitAxis;               // +0x3
    hkReal m_minAngle;                 // +0x4
    hkReal m_maxAngle;                 // +0x8
    hkReal m_angularLimitsTauFactor;   // +0xC
};

#endif
