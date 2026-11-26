// hkpLimitedHingeConstraintData::Atoms::Atoms() (Physics/Dynamics/Constraint/Bilateral/LimitedHinge/
// hkpLimitedHingeConstraintData.h), out of line in the game: the atoms' constructors set their types and
// default fields; the ball socket's velocity stabilization factor goes through hkUFloat8::operator= (out of
// line). hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData() (82D93C00) calls it.
#include "havok/hkBase.h"
#include "havok/hkpLimitedHingeConstraintData.h"

hkpLimitedHingeConstraintData::Atoms::Atoms()
{
}
