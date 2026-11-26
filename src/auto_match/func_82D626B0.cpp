// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// hkpCapsuleTriangleAgent::createTriangleCapsuleAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpCapsuleTriangleAgent.h"

extern "C" hkpCollisionAgent *fn_82D626B0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpCapsuleTriangleAgent *agent = new hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
