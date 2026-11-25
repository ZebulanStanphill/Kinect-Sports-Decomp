// hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiRayConvexAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpMultiRayConvexAgent;
extern "C" {
void fn_82D60198(hkpMultiRayConvexAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpMultiRayConvexAgent::getClosestPoints
}

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D60198(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
