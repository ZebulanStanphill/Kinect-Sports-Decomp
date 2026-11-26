// hkpRagdollConstraintData::Atoms::Atoms() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/
// hkpRagdollConstraintData.h), out of line in the game: the atoms' constructors set their types and
// default fields; the ball socket's velocity stabilization factor goes through hkUFloat8::operator= (out of
// line). hkpRagdollConstraintData::hkpRagdollConstraintData() (82D97CB8) calls it.
#include "havok/hkBase.h"
#include "havok/hkpRagdollConstraintData.h"

hkpRagdollConstraintData::Atoms::Atoms()
{
}
