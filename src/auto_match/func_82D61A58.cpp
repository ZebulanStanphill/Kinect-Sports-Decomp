// static hkpSymmetricAgent<hkpMultiSphereTriangleAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpMultiSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereTriangleAgent.h"

template void hkpSymmetricAgent<hkpMultiSphereTriangleAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
