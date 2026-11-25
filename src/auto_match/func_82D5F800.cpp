// static hkpListAgent::staticGetClosestPoints (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): flips the bodies (and the collector's results)
// and forwards to fn_82D6BE30.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6BE30(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // what hkpListAgent's staticGetClosestPoints forwards to, flipped

class hkpListAgent : public hkpCollisionAgent {
public:
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        staticGetClosestPoints(bodyA, bodyB, input, collector);
    }
};

void HK_CALL hkpListAgent::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
    hkpSymmetricAgentFlipCollector flipCollector(collector);
    fn_82D6BE30(bodyB, bodyA, input, flipCollector);
}
