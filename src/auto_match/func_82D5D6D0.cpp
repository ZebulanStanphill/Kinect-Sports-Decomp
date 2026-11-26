// hkpSymmetricAgent<hkpConvexListAgent>::getClosestPoints (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpConvexListAgent::getClosestPoints, whose inline body calls the static function (fn_82D5C0E0).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"

// hkpConvexListAgent::getClosestPoints (fn_82D5C340 out of line), inlined here.
void hkpConvexListAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpConvexListAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
