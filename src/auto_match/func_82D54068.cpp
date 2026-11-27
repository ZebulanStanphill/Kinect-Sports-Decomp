// hkpBvTreeStreamAgent::getPenetrations (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.cpp), its
// vtable's slot +0xC: calls hkpBvTreeAgent's static function.
#include "havok/hkpBvTreeStreamAgent.h"
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeStreamAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                       hkpCdBodyPairCollector &collector)
{
    hkpBvTreeAgent::staticGetPenetrations(bodyA, bodyB, input, collector);
}
