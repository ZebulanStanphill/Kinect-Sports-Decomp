// hkMotionState::operator=: the implicit member-wise assignment, emitted out of line here under its fn_ name
// (hkpRigidBody::setMotionType, 82D8F080, calls it).
#include "havok/hkMotionState.h"

extern "C" void fn_82D92FF0(hkMotionState *self, const hkMotionState *other)
{
    *self = *other;
}
