// hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiRayConvexAgent's function.
#include "havok/hkpMultiRayConvexAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (fn_82D60850), so the compiler inlines it here.
void hkpMultiRayConvexAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
