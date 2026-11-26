// hkpAngMotorConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x14 bytes: drives the
// angle about one axis with a motor. The members, their offsets and types are the game's reflection table for the
// class (lbl_8213FDA8, the hkClassMember array of hkpAngMotorConstraintAtomClass). The constructor is inline in the
// constraint datas' constructors; it sets the atom type and m_isEnabled = true, m_initializedOffset = 0,
// m_previousTargetAngleOffset = 0. The finish constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPANGMOTORCONSTRAINTATOM_H
#define HAVOK_HKPANGMOTORCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

class hkpConstraintMotor;

struct hkpAngMotorConstraintAtom : public hkpConstraintAtom {
    hkpAngMotorConstraintAtom()
        : hkpConstraintAtom(TYPE_ANG_MOTOR), m_isEnabled(true), m_initializedOffset(0), m_previousTargetAngleOffset(0)
    {
    }
    hkpAngMotorConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkBool m_isEnabled;                                  // +0x2
    hkUint8 m_motorAxis;                                 // +0x3
    hkInt16 m_initializedOffset;                         // +0x4
    hkInt16 m_previousTargetAngleOffset;                 // +0x6
    hkInt16 m_correspondingAngLimitSolverResultOffset;   // +0x8
    hkReal m_targetAngle;                                // +0xC
    hkpConstraintMotor *m_motor;                         // +0x10
};

#endif
