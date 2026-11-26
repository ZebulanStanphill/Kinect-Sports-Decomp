// static hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereCapsuleAgent.h"

template void hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
