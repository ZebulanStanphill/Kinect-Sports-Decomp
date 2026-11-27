// hkpConvexListAgent::getPenetrations (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp), its
// vtable's slot +0xC: calls the static function.
#include "havok/hkpConvexListAgent.h"

void hkpConvexListAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                         hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}
