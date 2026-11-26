// hkpListAgent::getPenetrations (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): calls staticGetPenetrations, which flips the bodies (and the
// collector's results) and forwards to fn_82D6C3E0.
#include "havok/hkpListAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (82D5F8B8), so the compiler inlines it here.
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
