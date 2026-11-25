// static hkpSymmetricAgent<hkpTransformAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpTransformAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpTransformAgent;
extern "C" {
void fn_82D6B118(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpTransformAgent::staticGetClosestPoints
}

class hkpTransformAgent : public hkpCollisionAgent {
public:
    hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6B118(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpTransformAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
