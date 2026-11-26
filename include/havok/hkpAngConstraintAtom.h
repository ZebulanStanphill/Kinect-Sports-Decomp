// hkpAngConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x4 bytes: locks rotation
// about a run of axes. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FB90, the hkClassMember array of hkpAngConstraintAtomClass). The constructor is inline in the constraint
// datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPANGCONSTRAINTATOM_H
#define HAVOK_HKPANGCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpAngConstraintAtom : public hkpConstraintAtom {
    hkpAngConstraintAtom() : hkpConstraintAtom(TYPE_ANG) {}
    hkpAngConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_firstConstrainedAxis;   // +0x2
    hkUint8 m_numConstrainedAxes;     // +0x3
};

#endif
