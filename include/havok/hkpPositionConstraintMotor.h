// hkpPositionConstraintMotor (Physics/Dynamics/Constraint/Motor/Position/hkpPositionConstraintMotor.h), 0x24 bytes
// (the game's reflection: hkpPositionConstraintMotorClass, four members): a motor that drives towards a target
// position. The constructor (??0hkpPositionConstraintMotor@@QAA@M@Z, 82DA0DD8) and clone (82DA0E40) are out of line;
// the class declares no destructor. The constructor's default argument follows Havok's header.
#ifndef HAVOK_HKPPOSITIONCONSTRAINTMOTOR_H
#define HAVOK_HKPPOSITIONCONSTRAINTMOTOR_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

class hkpPositionConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpPositionConstraintMotor(hkReal currentPosition = 0.0f);
    hkpPositionConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
    virtual hkpConstraintMotor *clone() const;

    hkReal m_tau;                            // +0x14
    hkReal m_damping;                        // +0x18
    hkReal m_proportionalRecoveryVelocity;   // +0x1C
    hkReal m_constantRecoveryVelocity;       // +0x20
};

#endif
