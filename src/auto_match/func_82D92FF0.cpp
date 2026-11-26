// hkMotionState::operator=, the implicit member-wise assignment, emitted out of line: hkpWorldOperationUtil::
// replaceMotionObject (82D8F080) calls it, 82D9D568 has it inline. It copies the transform, the swept transform,
// m_deltaAngle, three floats and the three bytes at +0xAC to +0xAE (nothing at +0xAF).
#include "havok/hkMotionState.h"

// Only makes the compiler emit the implicit assignment out of line.
hkMotionState &(hkMotionState::*emitAssignment_82D92FF0())(const hkMotionState &) { return &hkMotionState::operator=; }
