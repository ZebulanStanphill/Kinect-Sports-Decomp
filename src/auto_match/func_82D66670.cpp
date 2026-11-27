// hkpSphereCapsuleAgent::getPenetrations (+0xC of ??_7hkpSphereCapsuleAgent@@6B@): the static query.
#include "havok/hkpSphereCapsuleAgent.h"

void hkpSphereCapsuleAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
