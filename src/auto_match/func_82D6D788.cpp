// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpMultiSphereAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"

template void hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
