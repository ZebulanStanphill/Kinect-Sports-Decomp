// hkpSymmetricAgent<hkpBvTreeAgent>::getClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp):
// flips the bodies (and the collector's results) and calls hkpBvTreeAgent::getClosestPoints, which is defined in
// the same file and inlined here (it calls the static function).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                      hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpBvTreeAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                   const hkpCollisionInput &input,
                                                                   hkpCdPointCollector &collector);
