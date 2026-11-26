// static hkpSymmetricAgent<hkpSphereBoxAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpSphereBoxAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereBoxAgent.h"

template void hkpSymmetricAgent<hkpSphereBoxAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
