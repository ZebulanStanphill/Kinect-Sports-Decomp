// static hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpSphereCapsuleAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D66508(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpSphereCapsuleAgent::staticGetPenetrations
}

class hkpSphereCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D66508(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpSphereCapsuleAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
