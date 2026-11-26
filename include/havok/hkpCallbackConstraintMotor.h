// hkpCallbackConstraintMotor (Physics/Dynamics/Constraint/Motor/Callback/hkpCallbackConstraintMotor.h), 0x28 bytes: a
// motor whose output a callback computes. The members, their offsets and types are the game's reflection table for
// the class (lbl_83182CE0, with the CallbackType enum of lbl_8213A58C; the enumerator names follow Havok's header).
// The constructor (82D9C868) and clone (82D9C8B0) are out of line; the class declares no destructor.
#ifndef HAVOK_HKPCALLBACKCONSTRAINTMOTOR_H
#define HAVOK_HKPCALLBACKCONSTRAINTMOTOR_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkpConstraintMotor.h"

class hkpConstraintMotorInput;
class hkpConstraintMotorOutput;

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
    hkpCallbackConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
    virtual hkpConstraintMotor *clone() const;

    CalcMotorDataCallbackFunc m_callbackFunc;        // +0x14
    hkEnum<CallbackType, hkUint32> m_callbackType;   // +0x18
    hkUlong m_userData0;                             // +0x1C
    hkUlong m_userData1;                             // +0x20
    hkUlong m_userData2;                             // +0x24
};

#endif
