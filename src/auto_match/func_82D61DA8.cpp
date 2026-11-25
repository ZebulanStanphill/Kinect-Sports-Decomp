// static hkpSymmetricAgent<hkpMultiSphereTriangleAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpMultiSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpMultiSphereTriangleAgent;
extern "C" {
void fn_82D61718(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpMultiSphereTriangleAgent::staticGetClosestPoints
}

class hkpMultiSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D61718(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpMultiSphereTriangleAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
