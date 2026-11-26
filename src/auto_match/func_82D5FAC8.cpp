// hkpListAgent::hkpListAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &, hkpContactMgr *)
// (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): keeps the input's dispatcher and initialises
// the agent track (fn_82D70F30, which keeps its fn_ name because a Matching unit calls it).
#include "havok/hkpListAgent.h"

hkpListAgent::hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    m_dispatcher = input.m_dispatcher;
    hkAgent1nMachine_InitTrack(m_agentTrack);
}
