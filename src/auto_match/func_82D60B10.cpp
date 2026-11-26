// static hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpMultiRayConvexAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D60418(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpMultiRayConvexAgent::staticGetClosestPoints
}

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D60418(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
