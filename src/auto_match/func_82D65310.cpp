// static hkpSymmetricAgent<hkpSphereBoxAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpSphereBoxAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D64E28(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpSphereBoxAgent::staticGetClosestPoints
}

class hkpSphereBoxAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D64E28(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpSphereBoxAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
