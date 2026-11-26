// hkpSetLocalRotationsConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x70 bytes:
// the constraint space's rotation in each body's space. The members, their offsets and types are the game's
// reflection table for the class (lbl_8213FA88, the hkClassMember array of
// hkpSetLocalRotationsConstraintAtomClass). The constructor is inline in the constraint datas' constructors; it
// sets the atom type. The finish constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPSETLOCALROTATIONSCONSTRAINTATOM_H
#define HAVOK_HKPSETLOCALROTATIONSCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkRotation.h"
#include "havok/hkpConstraintAtom.h"

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalRotationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_ROTATIONS) {}
    hkpSetLocalRotationsConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkRotation m_rotationA;   // +0x10
    hkRotation m_rotationB;   // +0x40
};

#endif
