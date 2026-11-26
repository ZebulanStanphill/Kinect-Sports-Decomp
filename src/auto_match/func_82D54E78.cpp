// static hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpBvTreeAgent::staticGetPenetrations (fn_82D58028).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
