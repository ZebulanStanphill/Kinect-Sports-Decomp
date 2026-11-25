// hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpMultiSphereTriangleAgent;
extern "C" {
void fn_82D614F0(hkpMultiSphereTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpMultiSphereTriangleAgent::getClosestPoints
}

class hkpMultiSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D614F0(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
