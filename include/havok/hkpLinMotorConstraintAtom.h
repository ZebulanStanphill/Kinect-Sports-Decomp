// hkpLinMotorConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x10 bytes: drives the
// pivots' offset along one axis with a motor. The members, their offsets and types are the game's reflection table
// for the class (lbl_8213FF10, the hkClassMember array of hkpLinMotorConstraintAtomClass). The constructor is
// inline in the constraint datas' constructors; it sets the atom type and m_isEnabled = true, m_initializedOffset =
// 0, m_previousTargetPositionOffset = 0. The finish constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPLINMOTORCONSTRAINTATOM_H
#define HAVOK_HKPLINMOTORCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

class hkpConstraintMotor;

struct hkpLinMotorConstraintAtom : public hkpConstraintAtom {
    hkpLinMotorConstraintAtom()
        : hkpConstraintAtom(TYPE_LIN_MOTOR), m_isEnabled(true), m_initializedOffset(0), m_previousTargetPositionOffset(0)
    {
    }
    hkpLinMotorConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkBool m_isEnabled;                       // +0x2
    hkUint8 m_motorAxis;                      // +0x3
    hkInt16 m_initializedOffset;              // +0x4
    hkInt16 m_previousTargetPositionOffset;   // +0x6
    hkReal m_targetPosition;                  // +0x8
    hkpConstraintMotor *m_motor;              // +0xC
};

#endif
