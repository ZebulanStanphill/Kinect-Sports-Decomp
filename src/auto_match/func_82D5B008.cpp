// hkpSymmetricAgent<hkpHeightFieldAgent>::getClosestPoints (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpHeightFieldAgent::getClosestPoints, whose inline body calls the static function (fn_82D59FB0).
#include "havok/hkpHeightFieldAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (fn_82D5A7C8), so the compiler inlines it here.
void hkpHeightFieldAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                           hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpHeightFieldAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
