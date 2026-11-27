// hkpSymmetricAgent<hkpBvTreeAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp):
// flips the bodies (and the collector's results) and calls hkpBvTreeAgent::getPenetrations, which is defined in
// the same file and inlined here (it calls the static function).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeAgent.h"

void hkpBvTreeAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                     hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpBvTreeAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                  const hkpCollisionInput &input,
                                                                  hkpCdBodyPairCollector &collector);
