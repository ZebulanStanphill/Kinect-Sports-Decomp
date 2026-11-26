// hkpSymmetricAgent<hkpMultiSphereAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiSphereAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"

template void hkpSymmetricAgent<hkpMultiSphereAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
