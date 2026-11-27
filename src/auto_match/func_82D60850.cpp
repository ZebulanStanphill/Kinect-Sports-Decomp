// hkpMultiRayConvexAgent::getPenetrations (+0xC of ??_7hkpMultiRayConvexAgent@@6B@): the static query.
#include "havok/hkpMultiRayConvexAgent.h"

void hkpMultiRayConvexAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
