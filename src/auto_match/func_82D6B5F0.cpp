// static hkpSymmetricAgent<hkpTransformAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpTransformAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpTransformAgent;
extern "C" {
void fn_82D6B238(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpTransformAgent::staticGetPenetrations
}

class hkpTransformAgent : public hkpCollisionAgent {
public:
    hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6B238(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpTransformAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
