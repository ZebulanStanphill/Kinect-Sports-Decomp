// static hkpSymmetricAgent<hkpTransformAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpTransformAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTransformAgent.h"

template void hkpSymmetricAgent<hkpTransformAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
