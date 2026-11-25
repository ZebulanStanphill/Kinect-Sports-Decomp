// hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpSphereTriangleAgent;
extern "C" {
void fn_82D65580(hkpSphereTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpSphereTriangleAgent::getPenetrations
}

class hkpSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D65580(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
