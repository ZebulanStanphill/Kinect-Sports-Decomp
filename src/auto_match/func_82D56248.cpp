// hkpBvTreeAgent::createBvBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp):
// the body with the smaller object radius goes first; otherwise the symmetric agent flips them.
// Both arms inline hkpBvTreeAgent(hkpContactMgr *), whose cached AABB is set to HK_REAL_MAX.
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkpBvTreeAgent.h"
#include "havok/hkpSymmetricAgent.h"

// HK_REAL_MAX. Havok writes the literal, so the compiler knows the value cannot
// change: it loads it once for both setAll calls and schedules the load above the
// hkArray stores. Declaring it as a plain extern makes the compiler reload it
// after the vector stores; defining it (selectany, like a __real@ constant) keeps
// the configured name and the original's code.

// The constructor is defined in this file (out of line, 82D56088), so the compiler inlines it here.
hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
{
    m_cachedAabb.m_max.setAll(3.40282e+38f);
    m_cachedAabb.m_min.setAll(3.40282e+38f);
}

hkpCollisionAgent *HK_CALL hkpBvTreeAgent::createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    if (bodyA.getMotionState()->m_objectRadius < bodyB.getMotionState()->m_objectRadius)
    {
        return new hkpBvTreeAgent(mgr);
    }
    return new hkpSymmetricAgent<hkpBvTreeAgent>(mgr);
}
