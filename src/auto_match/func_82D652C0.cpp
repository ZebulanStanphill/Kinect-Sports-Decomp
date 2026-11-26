// hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereBoxAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereBoxAgent.h"

template void hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
