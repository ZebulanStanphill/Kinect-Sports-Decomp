// static hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpMultiRayConvexAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiRayConvexAgent.h"

template void hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
