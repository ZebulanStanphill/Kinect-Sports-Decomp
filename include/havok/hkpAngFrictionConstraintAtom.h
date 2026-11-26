// hkpAngFrictionConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0xC bytes: angular
// friction about a run of axes. The members, their offsets and types are the game's reflection table for the class
// (lbl_8213FD48, the hkClassMember array of hkpAngFrictionConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type and m_isEnabled = true, m_numFrictionAxes = 1. The finish
// constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPANGFRICTIONCONSTRAINTATOM_H
#define HAVOK_HKPANGFRICTIONCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    hkpAngFrictionConstraintAtom() : hkpConstraintAtom(TYPE_ANG_FRICTION), m_isEnabled(true), m_numFrictionAxes(1) {}
    hkpAngFrictionConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_isEnabled;           // +0x2
    hkUint8 m_firstFrictionAxis;   // +0x3
    hkUint8 m_numFrictionAxes;     // +0x4
    hkReal m_maxFrictionTorque;    // +0x8
};

#endif
