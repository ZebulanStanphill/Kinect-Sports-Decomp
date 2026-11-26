// hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSphereCapsuleAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (fn_82D66670), so the compiler inlines it here.
void hkpSphereCapsuleAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                            hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
