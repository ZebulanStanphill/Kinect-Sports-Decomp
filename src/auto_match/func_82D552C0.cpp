// hkpSymmetricAgent<hkpShapeCollectionAgent>::getClosestPoints (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpShapeCollectionAgent::getClosestPoints, out of line (fn_82D6BD10).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6BD10(hkpCollisionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpShapeCollectionAgent::getClosestPoints

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6BD10(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpShapeCollectionAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
