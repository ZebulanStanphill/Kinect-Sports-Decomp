// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpMultiSphereAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"

template void hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
