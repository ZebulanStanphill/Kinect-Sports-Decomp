// hkpCallbackConstraintMotor::hkpCallbackConstraintMotor(CallbackType, CalcMotorDataCallbackFunc) (hkpCallbackConstraintMotor.cpp). The limits are the literals 1e6f/-1e6f; the game's copies are lbl_82057560/lbl_8214186C, so this matches only with those named __real@49742400/__real@c9742400.

#include "havok/hkBase.h"
#include "havok/hkpCallbackConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

hkpCallbackConstraintMotor::hkpCallbackConstraintMotor(CallbackType callbackType, CalcMotorDataCallbackFunc callbackFunc)
    : m_callbackType(callbackType)
{
    m_type = TYPE_CALLBACK;
    setMaxForce(1e6f);
    m_callbackFunc = callbackFunc;
}
