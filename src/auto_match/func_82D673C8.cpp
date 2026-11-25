// static hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpSphereCapsuleAgent;
extern "C" {
void fn_82D66B70(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpSphereCapsuleAgent::staticGetClosestPoints
}

class hkpSphereCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D66B70(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
