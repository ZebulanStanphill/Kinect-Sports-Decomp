// hkpConvexListAgent::getClosestPoints (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp), its
// vtable's slot +0x10: calls the static function.
#include "havok/hkpConvexListAgent.h"

void hkpConvexListAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}
