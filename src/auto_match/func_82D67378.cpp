// hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereCapsuleAgent.h"

template void hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
