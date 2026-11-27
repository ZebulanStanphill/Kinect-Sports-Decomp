// hkpBvTreeStreamAgent::linearCast (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.cpp), its
// vtable's slot +0x14: calls hkpBvTreeAgent's static function.
#include "havok/hkpBvTreeStreamAgent.h"
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeStreamAgent::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                                       hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
    hkpBvTreeAgent::staticLinearCast(bodyA, bodyB, input, collector, startCollector);
}
