// hkpCapsuleCapsuleAgent::getPenetrations (+0xC of ??_7hkpCapsuleCapsuleAgent@@6B@): the static query.
#include "havok/hkpCapsuleCapsuleAgent.h"

void hkpCapsuleCapsuleAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
