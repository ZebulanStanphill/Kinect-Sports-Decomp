// hkpCallbackConstraintMotor::clone (Physics/Dynamics/Constraint/Motor/...): new with the implicit copy constructor.

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

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
