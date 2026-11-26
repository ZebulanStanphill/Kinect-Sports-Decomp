// hkpSymmetricAgent<hkpBvAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"

template void hkpSymmetricAgent<hkpBvAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
