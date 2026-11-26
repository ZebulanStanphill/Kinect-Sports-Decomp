// hkpVelocityConstraintMotor (Physics/Dynamics/Constraint/Motor/Velocity/hkpVelocityConstraintMotor.h), 0x20 bytes
// (the game's reflection: hkpVelocityConstraintMotorClass, three members): a motor that drives towards a target
// velocity. clone (82D94090) is out of line and copies the motor with the implicit copy constructor. The game has no
// symbol for the two constructors (Havok's header declares them); the class declares no destructor.
#ifndef HAVOK_HKPVELOCITYCONSTRAINTMOTOR_H
#define HAVOK_HKPVELOCITYCONSTRAINTMOTOR_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

class hkpVelocityConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpVelocityConstraintMotor();
    hkpVelocityConstraintMotor(hkReal velocityTarget, hkReal maxForce);
    hkpVelocityConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
    virtual hkpConstraintMotor *clone() const;

    hkReal m_tau;                                      // +0x14
    hkReal m_velocityTarget;                           // +0x18
    hkBool m_useVelocityTargetFromConstraintTargets;   // +0x1C
};

#endif
