// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpMultiSphereAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D6D2C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpMultiSphereAgent::staticGetPenetrations
}

class hkpMultiSphereAgent : public hkpCollisionAgent {
public:
    hkpMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6D2C8(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
