// hkpSpringDamperConstraintMotor::hkpSpringDamperConstraintMotor(hkReal, hkReal, hkReal) (hkpSpringDamperConstraintMotor.cpp).

#include "havok/hkBase.h"
#include "havok/hkpSpringDamperConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

hkpSpringDamperConstraintMotor::hkpSpringDamperConstraintMotor(hkReal springConstant, hkReal springDamping, hkReal maxForce)
{
    setMaxForce(maxForce);
    m_type = TYPE_SPRING_DAMPER;
    m_springConstant = springConstant;
    m_springDamping = springDamping;
}
