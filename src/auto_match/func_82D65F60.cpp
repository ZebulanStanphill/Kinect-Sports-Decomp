// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// static hkpSymmetricAgent<hkpSphereTriangleAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpSphereTriangleAgent;
extern "C" {
void fn_82D656C0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpSphereTriangleAgent::staticGetPenetrations
}

class hkpSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D656C0(bodyA, bodyB, input, collector);
    }
};

extern "C" void fn_82D65F60(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
{
    hkpSymmetricAgent<hkpSphereTriangleAgent>::staticGetPenetrations(bodyA, bodyB, input, collector);
}
