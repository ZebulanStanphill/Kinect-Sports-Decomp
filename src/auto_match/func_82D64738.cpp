// hkpSphereBoxAgent::getPenetrations (+0xC of ??_7hkpSphereBoxAgent@@6B@): the static query.
#include "havok/hkpSphereBoxAgent.h"

void hkpSphereBoxAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
