// hkpSymmetricAgent<hkpMoppAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpMoppAgent::getPenetrations, out of line (fn_82D583D0).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D583D0(hkpCollisionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpBvTreeAgent::getPenetrations

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    hkpBvTreeAgent(hkpContactMgr *mgr);
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D583D0(this, bodyA, bodyB, input, collector);
    }
};

class hkpMoppAgent : public hkpBvTreeAgent {
public:
    hkpMoppAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
};

template void hkpSymmetricAgent<hkpMoppAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
