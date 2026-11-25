// static hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpBvTreeAgent::staticGetClosestPoints (fn_82D57DB8).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D57DB8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpBvTreeAgent::staticGetClosestPoints

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    hkpBvTreeAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D57DB8(bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        staticGetClosestPoints(bodyA, bodyB, input, collector);
    }
};

template void HK_CALL hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
