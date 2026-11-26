// hkpSymmetricAgent<hkpShapeCollectionAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpShapeCollectionAgent::getPenetrations, out of line (fn_82D6C2B0).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpShapeCollectionAgent.h"

template void hkpSymmetricAgent<hkpShapeCollectionAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
