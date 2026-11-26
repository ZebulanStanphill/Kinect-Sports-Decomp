// static hkpSymmetricAgent<hkpBvAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"

template void hkpSymmetricAgent<hkpBvAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
