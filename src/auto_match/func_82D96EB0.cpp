// hkpHingeConstraintData::Atoms::Atoms() (Physics/Dynamics/Constraint/Bilateral/Hinge/
// hkpHingeConstraintData.h), out of line in the game: the atoms' constructors set their types, the ball
// socket's solving method, velocity stabilization factor (hkUFloat8::operator=, out of line) and maximum
// impulse (HK_REAL_MAX, __real@7f7fffee). hkpHingeConstraintData::hkpHingeConstraintData() (82D96B50) calls it.
#include "havok/hkBase.h"
#include "havok/hkpHingeConstraintData.h"

hkpHingeConstraintData::Atoms::Atoms()
{
}
