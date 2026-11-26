// hkpLinConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x4 bytes: fixes the pivots'
// offset along one axis. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FAD0, the hkClassMember array of hkpLinConstraintAtomClass). The constructor is inline in the constraint
// datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPLINCONSTRAINTATOM_H
#define HAVOK_HKPLINCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpLinConstraintAtom : public hkpConstraintAtom {
    hkpLinConstraintAtom() : hkpConstraintAtom(TYPE_LIN) {}
    hkpLinConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_axisIndex;   // +0x2
};

#endif
