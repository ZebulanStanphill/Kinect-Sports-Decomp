// hkpSymmetricAgent<hkpListAgent>::getClosestPoints (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpListAgent::getClosestPoints, which inlines staticGetClosestPoints and flips them back before
// forwarding to fn_82D6BE30.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6BE30(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // what hkpListAgent's staticGetClosestPoints forwards to, flipped

class hkpListAgent : public hkpCollisionAgent {
public:
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        hkpSymmetricAgentFlipCollector flipCollector(collector);
        fn_82D6BE30(bodyB, bodyA, input, flipCollector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        staticGetClosestPoints(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpListAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
