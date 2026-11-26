// hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereTriangleAgent.h"

template void hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
