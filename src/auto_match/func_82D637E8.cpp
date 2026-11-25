// hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpCapsuleTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpCapsuleTriangleAgent;
extern "C" {
void fn_82D62F78(hkpCapsuleTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpCapsuleTriangleAgent::getPenetrations
}

class hkpCapsuleTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D62F78(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
