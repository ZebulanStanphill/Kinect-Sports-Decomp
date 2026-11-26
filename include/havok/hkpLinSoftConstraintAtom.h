// hkpLinSoftConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0xC bytes: a soft linear
// constraint along one axis. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FAE8, the hkClassMember array of hkpLinSoftConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded members
// alone.
#ifndef HAVOK_HKPLINSOFTCONSTRAINTATOM_H
#define HAVOK_HKPLINSOFTCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpLinSoftConstraintAtom : public hkpConstraintAtom {
    hkpLinSoftConstraintAtom() : hkpConstraintAtom(TYPE_LIN_SOFT) {}
    hkpLinSoftConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_axisIndex;   // +0x2
    hkReal m_tau;          // +0x4
    hkReal m_damping;      // +0x8
};

#endif
