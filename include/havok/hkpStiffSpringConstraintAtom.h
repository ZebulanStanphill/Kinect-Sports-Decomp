// hkpStiffSpringConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x8 bytes: keeps the
// two pivots at a fixed distance. The members, their offsets and types are the game's reflection table for the
// class (lbl_8213FA10, the hkClassMember array of hkpStiffSpringConstraintAtomClass). The constructor is inline in
// the constraint datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded
// members alone.
#ifndef HAVOK_HKPSTIFFSPRINGCONSTRAINTATOM_H
#define HAVOK_HKPSTIFFSPRINGCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpStiffSpringConstraintAtom : public hkpConstraintAtom {
    hkpStiffSpringConstraintAtom() : hkpConstraintAtom(TYPE_STIFF_SPRING) {}
    hkpStiffSpringConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkReal m_length;   // +0x4
};

#endif
