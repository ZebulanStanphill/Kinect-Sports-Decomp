// hkpMotion::setWorldSelectFlagsNeg(int, int, int) (Physics/Dynamics/Motion/hkpMotion.h), the out-of-line copy of
// the inline member: hkpEntity::activate (82D89BD8) calls it; hkpWorldOperationUtil::replaceMotionObject
// (82D8F080) and 82D9D568 have it inline.
#include "havok/hkpMotion.h"

// Only makes the compiler emit the inline member out of line.
void (hkpMotion::*emitSetWorldSelectFlagsNeg_82D80768())(int, int, int) { return &hkpMotion::setWorldSelectFlagsNeg; }
