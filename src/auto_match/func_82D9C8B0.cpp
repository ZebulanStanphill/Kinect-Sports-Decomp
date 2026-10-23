// hkpCallbackConstraintMotor::clone (Physics/Dynamics/Constraint/Motor/...): new with the implicit copy constructor.

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

class hkpConstraintMotorInput;
class hkpConstraintMotorOutput;

// hkpCallbackConstraintMotor (Physics/Dynamics/Constraint/Motor/Callback/hkpCallbackConstraintMotor.h).
class hkpCallbackConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    enum CallbackType {
        CALLBACK_MOTOR_TYPE_HAVOK_DEMO_SPRING_DAMPER = 0,
        CALLBACK_MOTOR_TYPE_USER_0,
        CALLBACK_MOTOR_TYPE_USER_1,
        CALLBACK_MOTOR_TYPE_USER_2,
        CALLBACK_MOTOR_TYPE_USER_3
    };
    typedef void(HK_CALL *CalcMotorDataCallbackFunc)(const hkpCallbackConstraintMotor &motor,
                                                     const hkpConstraintMotorInput *input,
                                                     hkpConstraintMotorOutput *output);
    hkpCallbackConstraintMotor(CallbackType callbackType, CalcMotorDataCallbackFunc callbackFunc);
    virtual hkpConstraintMotor *clone() const;

    CalcMotorDataCallbackFunc m_callbackFunc;            // +0x14
    hkEnum<CallbackType, hkUint32> m_callbackType;       // +0x18
    hkUlong m_userData0;                                 // +0x1C
    hkUlong m_userData1;                                 // +0x20
    hkUlong m_userData2;                                 // +0x24
};

hkpConstraintMotor *hkpCallbackConstraintMotor::clone() const
{
    hkpCallbackConstraintMotor *m = new hkpCallbackConstraintMotor(*this);
    return m;
}
