// static hkpSymmetricAgent<hkpTransformAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpTransformAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTransformAgent.h"

template void hkpSymmetricAgent<hkpTransformAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
