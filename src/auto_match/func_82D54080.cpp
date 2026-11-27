// hkpBvTreeStreamAgent::getClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.cpp), its
// vtable's slot +0x10: calls hkpBvTreeAgent's static function.
#include "havok/hkpBvTreeStreamAgent.h"
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeStreamAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                       hkpCdPointCollector &collector)
{
    hkpBvTreeAgent::staticGetClosestPoints(bodyA, bodyB, input, collector);
}
