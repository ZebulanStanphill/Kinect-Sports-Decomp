// hkpHeightFieldAgent::getPenetrations (+0xC of ??_7hkpHeightFieldAgent@@6B@): the static query.
#include "havok/hkpHeightFieldAgent.h"

void hkpHeightFieldAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                          hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
