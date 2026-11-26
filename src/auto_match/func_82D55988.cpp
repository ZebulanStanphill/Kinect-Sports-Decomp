// hkpSymmetricAgent<hkpMoppAgent>::getClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpMoppAgent::getClosestPoints, out of line (fn_82D583B8).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMoppAgent.h"

template void hkpSymmetricAgent<hkpMoppAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
