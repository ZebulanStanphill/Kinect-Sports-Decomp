// hkpConstraintMotor and hkpLimitedForceConstraintMotor
// (Physics/Dynamics/Constraint/Motor/hkpConstraintMotor.h,
// hkpLimitedForceConstraintMotor.h).
#ifndef HAVOK_HKPCONSTRAINTMOTOR_H
#define HAVOK_HKPCONSTRAINTMOTOR_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"

// 0xC bytes
class hkpConstraintMotor : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    enum MotorType {
        TYPE_INVALID = 0,
        TYPE_POSITION = 1,
        TYPE_VELOCITY = 2,
        TYPE_SPRING_DAMPER = 3,
        TYPE_CALLBACK = 4,
        TYPE_MAX
    };
    hkpConstraintMotor() : m_type(TYPE_INVALID) {}
    hkpConstraintMotor(const hkpConstraintMotor &other) : hkReferencedObject(), m_type(other.m_type) {}
    hkpConstraintMotor(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual hkpConstraintMotor *clone() const;

    hkEnum<MotorType, hkInt8> m_type;   // +0x8
};

// 0x14 bytes
class hkpLimitedForceConstraintMotor : public hkpConstraintMotor {
public:
    hkpLimitedForceConstraintMotor() {}
    hkpLimitedForceConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpConstraintMotor(flag) {}
    void setMaxForce(hkReal f)
    {
        m_minForce = -f;
        m_maxForce = f;
    }
    void setMinMaxForces(hkReal fmin, hkReal fmax)
    {
        m_minForce = fmin;
        m_maxForce = fmax;
    }

    hkReal m_minForce;   // +0xC
    hkReal m_maxForce;   // +0x10
};

#endif
