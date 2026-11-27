// Fills the dispatcher's AgentFuncs for hkpSphereTriangleAgent (keeps its fn_ name): its creation function, the
// static queries and hkpIterativeLinearCastAgent's static linear cast, not flipped, not predictive.
#include "havok/hkpSphereTriangleAgent.h"
#include "havok/hkpCollisionDispatcher.h"

extern "C" void fn_82D65CF0(hkpCollisionDispatcher::AgentFuncs *p)
{
    p->m_createFunc = hkpSphereTriangleAgent::createSphereTriangleAgent;
    p->m_getPenetrationsFunc = hkpSphereTriangleAgent::staticGetPenetrations;
    p->m_getClosestPointFunc = hkpSphereTriangleAgent::staticGetClosestPoints;
    p->m_linearCastFunc = fn_82D75FD0;
    p->m_isFlipped = false;
    p->m_isPredictive = false;
}
