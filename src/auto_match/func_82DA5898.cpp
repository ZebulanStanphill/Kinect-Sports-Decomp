// hkpSpringDamperConstraintMotor::clone (hkpSpringDamperConstraintMotor.cpp): new with the implicit copy constructor.

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

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

hkpConstraintMotor *hkpSpringDamperConstraintMotor::clone() const
{
    hkpSpringDamperConstraintMotor *m = new hkpSpringDamperConstraintMotor(*this);
    return m;
}
