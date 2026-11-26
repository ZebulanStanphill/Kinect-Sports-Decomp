// hkpBvTreeStreamAgent::hkpBvTreeStreamAgent (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.cpp): keeps the input's dispatcher, clears the cached AABB and initialises the agent
// track (fn_82D70F30).
#include "havok/hkpBvTreeStreamAgent.h"

hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                           const hkpCollisionInput &input, hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    m_dispatcher = input.m_dispatcher;
    m_cachedAabb.m_min.setZero();
    m_cachedAabb.m_max.setZero();
    hkAgent1nMachine_InitTrack(m_agentTrack);
}
