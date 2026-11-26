// Fills the dispatcher's AgentFuncs for hkpBoxBoxAgent (keeps its fn_ name): its creation function, the static
// queries and hkpIterativeLinearCastAgent's static linear cast, not flipped, not predictive.
#include "havok/hkpBoxBoxAgent.h"
#include "havok/hkpCollisionDispatcher.h"

extern "C" void fn_82D688E8(hkpCollisionDispatcher::AgentFuncs *p)
{
    p->m_createFunc = hkpBoxBoxAgent::createBoxBoxAgent;
    p->m_getPenetrationsFunc = fn_82D686D8;
    p->m_getClosestPointFunc = fn_82D684C0;
    p->m_linearCastFunc = fn_82D75FD0;
    p->m_isFlipped = false;
    p->m_isPredictive = false;
}
