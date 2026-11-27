// Fills the dispatcher's AgentFuncs for hkpCapsuleTriangleAgent (keeps its fn_ name): its creation function, the
// static queries and hkpIterativeLinearCastAgent's static linear cast, not flipped, not predictive.
#include "havok/hkpCapsuleTriangleAgent.h"
#include "havok/hkpCollisionDispatcher.h"

extern "C" void fn_82D632F8(hkpCollisionDispatcher::AgentFuncs *p)
{
    p->m_createFunc = hkpCapsuleTriangleAgent::createCapsuleTriangleAgent;
    p->m_getPenetrationsFunc = hkpCapsuleTriangleAgent::staticGetPenetrations;
    p->m_getClosestPointFunc = hkpCapsuleTriangleAgent::staticGetClosestPoints;
    p->m_linearCastFunc = fn_82D75FD0;
    p->m_isFlipped = false;
    p->m_isPredictive = false;
}
