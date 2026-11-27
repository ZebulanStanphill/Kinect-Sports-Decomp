// hkpHeightFieldAgent::getClosestPoints (+0x10 of ??_7hkpHeightFieldAgent@@6B@): the static query.
#include "havok/hkpHeightFieldAgent.h"

void hkpHeightFieldAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                           hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}
