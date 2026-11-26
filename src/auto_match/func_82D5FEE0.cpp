// hkpSymmetricAgent<hkpListAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpListAgent::getPenetrations, which inlines staticGetPenetrations and flips them back before
// forwarding to fn_82D6C3E0.
#include "havok/hkpListAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (82D5F8B8, 82D5FA80), so the compiler inlines them here.
void HK_CALL hkpListAgent::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                         hkpCdBodyPairCollector &collector)
{
    hkpSymmetricAgent<hkpShapeCollectionAgent>::staticGetPenetrations(bodyA, bodyB, input, collector);
}

void hkpListAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                   hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpListAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                              const hkpCollisionInput &input,
                                                              hkpCdBodyPairCollector &collector);
