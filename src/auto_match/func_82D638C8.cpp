// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// static hkpSymmetricAgent<hkpCapsuleTriangleAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpCapsuleTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpCapsuleTriangleAgent;
extern "C" {
void fn_82D62CD8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpCapsuleTriangleAgent::staticGetClosestPoints
}

class hkpCapsuleTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D62CD8(bodyA, bodyB, input, collector);
    }
};

extern "C" void fn_82D638C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
    hkpSymmetricAgent<hkpCapsuleTriangleAgent>::staticGetClosestPoints(bodyA, bodyB, input, collector);
}
