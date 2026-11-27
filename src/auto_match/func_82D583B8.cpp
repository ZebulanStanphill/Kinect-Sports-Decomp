// hkpBvTreeAgent::getClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp), its vtable's slot +0x10:
// calls the static function.
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}
