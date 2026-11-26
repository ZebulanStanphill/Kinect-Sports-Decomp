// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// hkpSphereSphereAgent::createSphereSphereAgent, creation function: new hkpSphereSphereAgent with the constructor inlined.
#include "havok/hkpSphereSphereAgent.h"

extern "C" hkpCollisionAgent *fn_82D674D0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereSphereAgent *agent = new hkpSphereSphereAgent(mgr);
    return agent;
}
