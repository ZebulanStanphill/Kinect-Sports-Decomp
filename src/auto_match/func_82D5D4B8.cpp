// static hkpSymmetricAgent<hkpConvexListAgent>::staticGetPenetrations (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpConvexListAgent::staticGetPenetrations (fn_82D5C358).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpConvexListAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
