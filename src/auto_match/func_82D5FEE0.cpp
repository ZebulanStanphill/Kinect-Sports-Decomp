// hkpSymmetricAgent<hkpListAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpListAgent::getPenetrations, which inlines staticGetPenetrations and flips them back before
// forwarding to fn_82D6C3E0.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6C3E0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // what hkpListAgent's staticGetPenetrations forwards to, flipped

class hkpListAgent : public hkpCollisionAgent {
public:
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
        fn_82D6C3E0(bodyB, bodyA, input, flipCollector);
    }
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        staticGetPenetrations(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpListAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
