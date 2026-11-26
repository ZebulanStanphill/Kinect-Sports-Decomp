// static hkpSymmetricAgent<hkpBvAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
void fn_82D6EA18(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpBvAgent::staticGetPenetrations
}

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6EA18(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpBvAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
