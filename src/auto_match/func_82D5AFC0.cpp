// hkpSymmetricAgent<hkpHeightFieldAgent>::getPenetrations (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpHeightFieldAgent::getPenetrations, whose inline body calls the static function (fn_82D59D40).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D59D40(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpHeightFieldAgent::staticGetPenetrations

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    hkpHeightFieldAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D59D40(bodyA, bodyB, input, collector);
    }
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        staticGetPenetrations(bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpHeightFieldAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
