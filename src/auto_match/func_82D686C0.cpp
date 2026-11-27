// hkpBoxBoxAgent::getClosestPoints (+0x10 of ??_7hkpBoxBoxAgent@@6B@): the static query.
#include "havok/hkpBoxBoxAgent.h"

void hkpBoxBoxAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                      hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}
