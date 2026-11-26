// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// hkpSphereTriangleAgent::createTriangleSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereTriangleAgent.h"

extern "C" hkpCollisionAgent *fn_82D654F8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereTriangleAgent *agent = new hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
