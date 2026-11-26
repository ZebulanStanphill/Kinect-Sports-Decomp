// static hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetPenetrations (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpHeightFieldAgent::staticGetPenetrations (fn_82D59D40).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpHeightFieldAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
