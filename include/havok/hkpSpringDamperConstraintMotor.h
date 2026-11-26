// hkpSpringDamperConstraintMotor (Physics/Dynamics/Constraint/Motor/SpringDamper/hkpSpringDamperConstraintMotor.h),
// 0x1C bytes (the game's reflection: hkpSpringDamperConstraintMotorClass, two members): a motor that drives towards
// the target like a damped spring. Both constructors (82DA5808, 82DA5858) and clone (82DA5898) are out of line; the
// class declares no destructor (the vtable's slot 0 is a deleting destructor the linker folded with others).
#ifndef HAVOK_HKPSPRINGDAMPERCONSTRAINTMOTOR_H
#define HAVOK_HKPSPRINGDAMPERCONSTRAINTMOTOR_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

class hkpSpringDamperConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpSpringDamperConstraintMotor();
    hkpSpringDamperConstraintMotor(hkReal springConstant, hkReal springDamping, hkReal maxForce);
    hkpSpringDamperConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
    virtual hkpConstraintMotor *clone() const;

    hkReal m_springConstant;   // +0x14
    hkReal m_springDamping;    // +0x18
};

#endif
