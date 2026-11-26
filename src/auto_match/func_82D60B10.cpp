// static hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpMultiRayConvexAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiRayConvexAgent.h"

template void hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
