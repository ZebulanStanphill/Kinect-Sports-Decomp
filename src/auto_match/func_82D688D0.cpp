// hkpBoxBoxAgent::getPenetrations (+0xC of ??_7hkpBoxBoxAgent@@6B@): the static query.
#include "havok/hkpBoxBoxAgent.h"

void hkpBoxBoxAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                     hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
