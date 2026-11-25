// static hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpBvTreeAgent::staticGetPenetrations (fn_82D58028).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D58028(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpBvTreeAgent::staticGetPenetrations

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    hkpBvTreeAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D58028(bodyA, bodyB, input, collector);
    }
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        staticGetPenetrations(bodyA, bodyB, input, collector);
    }
};

template void HK_CALL hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
