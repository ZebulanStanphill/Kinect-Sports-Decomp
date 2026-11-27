// static hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpBvTreeAgent::staticGetClosestPoints (82D57DB8).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
