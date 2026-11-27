// hkpBvTreeAgent::linearCast (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp), its vtable's slot +0x14:
// calls the static function.
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeAgent::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                                hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
    staticLinearCast(bodyA, bodyB, input, collector, startCollector);
}
