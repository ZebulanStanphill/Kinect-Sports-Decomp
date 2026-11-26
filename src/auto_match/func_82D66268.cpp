// hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereTriangleAgent.h"

template void hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
