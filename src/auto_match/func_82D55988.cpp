// hkpSymmetricAgent<hkpMoppAgent>::getClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpMoppAgent::getClosestPoints, out of line (fn_82D583B8).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D583B8(hkpCollisionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpBvTreeAgent::getClosestPoints

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    hkpBvTreeAgent(hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D583B8(this, bodyA, bodyB, input, collector);
    }
};

class hkpMoppAgent : public hkpBvTreeAgent {
public:
    hkpMoppAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
};

template void hkpSymmetricAgent<hkpMoppAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
