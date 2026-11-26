// static hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpMultiRayConvexAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D60698(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpMultiRayConvexAgent::staticGetPenetrations
}

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D60698(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
