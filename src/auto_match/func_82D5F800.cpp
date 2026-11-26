// static hkpListAgent::staticGetClosestPoints (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): flips the
// bodies (and the collector's results) and forwards to hkpShapeCollectionAgent::staticGetClosestPoints (fn_82D6BE30).
#include "havok/hkpListAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"

void HK_CALL hkpListAgent::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                          hkpCdPointCollector &collector)
{
    hkpSymmetricAgent<hkpShapeCollectionAgent>::staticGetClosestPoints(bodyA, bodyB, input, collector);
}
