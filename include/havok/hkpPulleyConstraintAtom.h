// hkpPulleyConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x40 bytes: a rope over
// two fixed pulleys. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FFA0, the hkClassMember array of hkpPulleyConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the loaded members
// alone.
#ifndef HAVOK_HKPPULLEYCONSTRAINTATOM_H
#define HAVOK_HKPPULLEYCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"

struct hkpPulleyConstraintAtom : public hkpConstraintAtom {
    hkpPulleyConstraintAtom() : hkpConstraintAtom(TYPE_PULLEY) {}
    hkpPulleyConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkVector4 m_fixedPivotAinWorld;   // +0x10
    hkVector4 m_fixedPivotBinWorld;   // +0x20
    hkReal m_ropeLength;              // +0x30
    hkReal m_leverageOnBodyB;         // +0x34
};

#endif
