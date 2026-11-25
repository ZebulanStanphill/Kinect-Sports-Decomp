// static hkpSymmetricAgent<hkpBvAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpBvAgent;
extern "C" {
void fn_82D6E680(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpBvAgent::staticGetClosestPoints
}

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6E680(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpBvAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
