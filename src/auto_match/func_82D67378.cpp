// hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpSphereCapsuleAgent;
extern "C" {
void fn_82D668B0(hkpSphereCapsuleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpSphereCapsuleAgent::getClosestPoints
}

class hkpSphereCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D668B0(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
