// static hkpSymmetricAgent<hkpSphereBoxAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpSphereBoxAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpSphereBoxAgent;
extern "C" {
void fn_82D645C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpSphereBoxAgent::staticGetPenetrations
}

class hkpSphereBoxAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D645C8(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpSphereBoxAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
