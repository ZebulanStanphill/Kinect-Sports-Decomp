// static hkpSymmetricAgent<hkpConvexListAgent>::staticGetClosestPoints (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp): flips the bodies (and the
// collector's results) and calls hkpConvexListAgent::staticGetClosestPoints (fn_82D5C0E0).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D5C0E0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpConvexListAgent::staticGetClosestPoints

class hkpConvexListAgent : public hkpCollisionAgent {
public:
    hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D5C0E0(bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        staticGetClosestPoints(bodyA, bodyB, input, collector);
    }
};

template void HK_CALL hkpSymmetricAgent<hkpConvexListAgent>::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
