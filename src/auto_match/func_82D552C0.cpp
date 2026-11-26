// hkpSymmetricAgent<hkpShapeCollectionAgent>::getClosestPoints (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpShapeCollectionAgent::getClosestPoints, out of line (fn_82D6BD10).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpShapeCollectionAgent.h"

template void hkpSymmetricAgent<hkpShapeCollectionAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
