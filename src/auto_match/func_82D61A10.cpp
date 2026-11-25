// hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getPenetrations (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpMultiSphereTriangleAgent;
extern "C" {
void fn_82D611F8(hkpMultiSphereTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpMultiSphereTriangleAgent::getPenetrations
}

class hkpMultiSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D611F8(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
