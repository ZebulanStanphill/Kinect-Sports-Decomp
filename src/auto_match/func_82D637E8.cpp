// hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpCapsuleTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpCapsuleTriangleAgent.h"

template void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
