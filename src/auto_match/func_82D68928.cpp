// hkpBoxBoxAgent::registerAgent (keeps its fn_ name): registers createBoxBoxAgent with the static queries and
// hkpIterativeLinearCastAgent's static linear cast for box against box (shape type 4), through
// fn_82D59158 (the dispatcher's registerCollisionAgent).
#include "havok/hkpBoxBoxAgent.h"
#include "havok/hkpCollisionDispatcher.h"

extern "C" void fn_82D59158(void *dispatcher, const hkpCollisionDispatcher::AgentFuncs *f, int typeA, int typeB);

extern "C" void fn_82D68928(void *d)
{
    hkpCollisionDispatcher::AgentFuncs f;
    f.m_createFunc = hkpBoxBoxAgent::createBoxBoxAgent;
    f.m_isFlipped = false;
    f.m_getPenetrationsFunc = fn_82D686D8;
    f.m_getClosestPointFunc = fn_82D684C0;
    f.m_linearCastFunc = fn_82D75FD0;
    f.m_isPredictive = false;
    fn_82D59158(d, &f, 4, 4);
}
