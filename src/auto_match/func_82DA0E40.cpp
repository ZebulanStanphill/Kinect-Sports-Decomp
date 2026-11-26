// hkpPositionConstraintMotor::clone (Physics/Dynamics/Constraint/Motor/...): new with the implicit copy constructor.

#include "havok/hkBase.h"
#include "havok/hkpPositionConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

hkpConstraintMotor *hkpPositionConstraintMotor::clone() const
{
    hkpPositionConstraintMotor *m = new hkpPositionConstraintMotor(*this);
    return m;
}
