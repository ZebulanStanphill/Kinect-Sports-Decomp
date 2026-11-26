// static hkpSymmetricAgent<hkpBvAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"

template void hkpSymmetricAgent<hkpBvAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
