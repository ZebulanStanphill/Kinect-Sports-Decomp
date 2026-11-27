// hkpConvexListAgent::linearCast (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp), its vtable's
// slot +0x14: calls the static function.
#include "havok/hkpConvexListAgent.h"

void hkpConvexListAgent::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                    const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                    hkpCdPointCollector *startCollector)
{
    staticLinearCast(bodyA, bodyB, input, collector, startCollector);
}
