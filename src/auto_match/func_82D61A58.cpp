// static hkpSymmetricAgent<hkpMultiSphereTriangleAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpMultiSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D61370(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpMultiSphereTriangleAgent::staticGetPenetrations
}

class hkpMultiSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D61370(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpMultiSphereTriangleAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
