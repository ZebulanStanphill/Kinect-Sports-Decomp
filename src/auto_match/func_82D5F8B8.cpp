// static hkpListAgent::staticGetPenetrations (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): flips the bodies (and the collector's results)
// and forwards to hkpShapeCollectionAgent::staticGetPenetrations (fn_82D6C3E0).
#include "havok/hkpListAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"

void HK_CALL hkpListAgent::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                         hkpCdBodyPairCollector &collector)
{
    hkpSymmetricAgent<hkpShapeCollectionAgent>::staticGetPenetrations(bodyA, bodyB, input, collector);
}
