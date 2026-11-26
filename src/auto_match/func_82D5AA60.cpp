// static hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetClosestPoints (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpHeightFieldAgent::staticGetClosestPoints (fn_82D59FB0).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpHeightFieldAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
