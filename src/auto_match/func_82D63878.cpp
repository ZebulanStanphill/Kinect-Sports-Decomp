// hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpCapsuleTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpCapsuleTriangleAgent.h"

template void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
