// hkpLinLimitConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0xC bytes: limits the
// pivots' offset along one axis. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FB30, the hkClassMember array of hkpLinLimitConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded members
// alone.
#ifndef HAVOK_HKPLINLIMITCONSTRAINTATOM_H
#define HAVOK_HKPLINLIMITCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpLinLimitConstraintAtom : public hkpConstraintAtom {
    hkpLinLimitConstraintAtom() : hkpConstraintAtom(TYPE_LIN_LIMIT) {}
    hkpLinLimitConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_axisIndex;   // +0x2
    hkReal m_min;          // +0x4
    hkReal m_max;          // +0x8
};

#endif
