// hkpBvTreeAgent::getPenetrations (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp), its vtable's slot +0xC:
// calls the static function.
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
