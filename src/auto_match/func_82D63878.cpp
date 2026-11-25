// hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpCapsuleTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpCapsuleTriangleAgent;
extern "C" {
void fn_82D62A48(hkpCapsuleTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpCapsuleTriangleAgent::getClosestPoints
}

class hkpCapsuleTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D62A48(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
