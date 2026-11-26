// hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereBoxAgent's function.
#include "havok/hkpSphereBoxAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (fn_82D64738), so the compiler inlines it here.
void hkpSphereBoxAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                        hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
