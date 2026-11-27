// static hkpSymmetricAgent<hkpConvexListAgent>::staticGetClosestPoints (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpConvexListAgent::staticGetClosestPoints (82D5C0E0).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpConvexListAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
