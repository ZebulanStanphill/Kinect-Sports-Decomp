// static hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetClosestPoints (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpHeightFieldAgent::staticGetClosestPoints (fn_82D59FB0).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D59FB0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpHeightFieldAgent::staticGetClosestPoints

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    hkpHeightFieldAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D59FB0(bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        staticGetClosestPoints(bodyA, bodyB, input, collector);
    }
};

template void HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
