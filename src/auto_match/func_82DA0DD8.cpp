// hkpPositionConstraintMotor::hkpPositionConstraintMotor(hkReal) (hkpPositionConstraintMotor.cpp), /O2.
// The constants are literals: 1e6f/-1e6f are configured as __real@49742400/__real@c9742400, and the rename map
// names the game's copies of 0.8f and 2.0f (lbl_820579A8, lbl_82005344) __real@3f4ccccd/__real@40000000.
// 1.0f is lbl_82002AE0, which Matching units reference, so it keeps that name: a static constant with it gives
// the literal's code (an extern is reloaded after the stores; a second such static in .rdata would be
// addressed from the first one's address).

// hkEnum (Common/Base/Types/hkBaseTypes.h): an enum stored in a smaller integer type.
template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    hkEnum() {}
    hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    operator ENUM() const { return static_cast<ENUM>(m_storage); }
    void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};
#include "havok/hkBase.h"

// The game's 1.0f (see above).
static const float lbl_82002AE0 = 1.0f;

// hkpConstraintMotor (Physics/Dynamics/Constraint/Motor/hkpConstraintMotor.h): hkReferencedObject,
// then hkEnum<MotorType, hkInt8> m_type (+0x8). Vtable slot 3 (+0xC) is clone().
// Havok's hkReferencedObject copy constructor sets m_referenceCount = 1 and copies nothing; the shared header
// does not declare it, so the motor's copy constructor reproduces it with hkReferencedObject().
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
    virtual hkpConstraintMotor *clone() const;

    hkEnum<MotorType, hkInt8> m_type;   // +0x8
};

class hkpLimitedForceConstraintMotor : public hkpConstraintMotor {
public:
    hkpLimitedForceConstraintMotor() {}
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

// hkpPositionConstraintMotor (Physics/Dynamics/Constraint/Motor/Position/hkpPositionConstraintMotor.h).
class hkpPositionConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpPositionConstraintMotor(hkReal currentPosition = 0.0f);
    virtual hkpConstraintMotor *clone() const;

    hkReal m_tau;                            // +0x14
    hkReal m_damping;                        // +0x18
    hkReal m_proportionalRecoveryVelocity;   // +0x1C
    hkReal m_constantRecoveryVelocity;       // +0x20
};

hkpPositionConstraintMotor::hkpPositionConstraintMotor(hkReal currentPosition)
{
    m_type = TYPE_POSITION;
    setMaxForce(1e6f);
    m_tau = 0.8f;
    m_damping = lbl_82002AE0;
    m_constantRecoveryVelocity = lbl_82002AE0;
    m_proportionalRecoveryVelocity = 2.0f;
}
