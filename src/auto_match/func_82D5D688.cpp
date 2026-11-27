// hkpSymmetricAgent<hkpConvexListAgent>::getPenetrations (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpConvexListAgent::getPenetrations, whose inline body calls the static function (82D5C358).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"

// hkpConvexListAgent::getPenetrations (82D5C498 out of line), inlined here.
void hkpConvexListAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                         hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpConvexListAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
