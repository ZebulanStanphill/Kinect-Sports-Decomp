// hkp2dAngConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x4 bytes: leaves rotation
// free about one axis only. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FB78, the hkClassMember array of hkp2dAngConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded members
// alone.
#ifndef HAVOK_HKP2DANGCONSTRAINTATOM_H
#define HAVOK_HKP2DANGCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkp2dAngConstraintAtom() : hkpConstraintAtom(TYPE_2D_ANG) {}
    hkp2dAngConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_freeRotationAxis;   // +0x2
};

#endif
