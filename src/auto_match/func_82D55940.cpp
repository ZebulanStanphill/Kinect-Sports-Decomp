// hkpSymmetricAgent<hkpMoppAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpMoppAgent::getPenetrations, out of line (82D583D0).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMoppAgent.h"

template void hkpSymmetricAgent<hkpMoppAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
