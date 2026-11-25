// hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereBoxAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpSphereBoxAgent;
extern "C" {
void fn_82D64AF0(hkpSphereBoxAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpSphereBoxAgent::getClosestPoints
}

class hkpSphereBoxAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D64AF0(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
