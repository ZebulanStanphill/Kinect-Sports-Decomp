// hkpSpringDamperConstraintMotor::hkpSpringDamperConstraintMotor() (hkpSpringDamperConstraintMotor.cpp). The limits are the literals 1e6f/-1e6f; the game's copies are lbl_82057560/lbl_8214186C, so this matches only with those named __real@49742400/__real@c9742400 (loads of extern constants cannot move above the stores).

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

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

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

// hkpSpringDamperConstraintMotor (Physics/Dynamics/Constraint/Motor/SpringDamper/hkpSpringDamperConstraintMotor.h).
class hkpSpringDamperConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpSpringDamperConstraintMotor();
    hkpSpringDamperConstraintMotor(hkReal springConstant, hkReal springDamping, hkReal maxForce);
    virtual hkpConstraintMotor *clone() const;

    hkReal m_springConstant;   // +0x14
    hkReal m_springDamping;    // +0x18
};

hkpSpringDamperConstraintMotor::hkpSpringDamperConstraintMotor()
{
    m_type = TYPE_SPRING_DAMPER;
    setMaxForce(1e6f);
    m_springConstant = 0.0f;
    m_springDamping = 0.0f;
}
