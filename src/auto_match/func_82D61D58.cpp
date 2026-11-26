// hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereTriangleAgent.h"

template void hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
