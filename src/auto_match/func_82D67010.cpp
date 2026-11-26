// static hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereCapsuleAgent.h"

template void hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
