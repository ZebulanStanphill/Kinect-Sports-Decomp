// hkpRagdollMotorConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x50 bytes: drives
// the three angles of a ragdoll joint with motors. The members, their offsets and types are the game's reflection
// table for the class (lbl_8213FE50, the hkClassMember array of hkpRagdollMotorConstraintAtomClass). The
// constructor is inline in the constraint datas' constructors; it sets the atom type and m_isEnabled = true,
// m_initializedOffset = 0, m_previousTargetAnglesOffset = 0. The finish constructor (Havok's) leaves the loaded
// members alone.
#ifndef HAVOK_HKPRAGDOLLMOTORCONSTRAINTATOM_H
#define HAVOK_HKPRAGDOLLMOTORCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkMatrix3.h"
#include "havok/hkpConstraintAtom.h"

class hkpConstraintMotor;

struct hkpRagdollMotorConstraintAtom : public hkpConstraintAtom {
    hkpRagdollMotorConstraintAtom()
        : hkpConstraintAtom(TYPE_RAGDOLL_MOTOR), m_isEnabled(true), m_initializedOffset(0), m_previousTargetAnglesOffset(0)
    {
    }
    hkpRagdollMotorConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkBool m_isEnabled;                     // +0x2
    hkInt16 m_initializedOffset;            // +0x4
    hkInt16 m_previousTargetAnglesOffset;   // +0x6
    hkMatrix3 m_target_bRca;                // +0x10
    hkpConstraintMotor *m_motors[3];        // +0x40
};

#endif
