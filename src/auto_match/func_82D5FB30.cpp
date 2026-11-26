// hkpListAgent::createAgent (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): allocates the agent
// with the class allocator (no null check) and runs the inlined constructor. The agent function table built
// by fn_82D5FBB8 (a Matching unit) lists it, so it keeps its fn_ name and is written as extern "C".
#include "havok/hkpListAgent.h"

// The constructor is defined in this file (out of line, 82D5FAC8), so the compiler inlines it here.
hkpListAgent::hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    m_dispatcher = input.m_dispatcher;
    hkAgent1nMachine_InitTrack(m_agentTrack);
}

extern "C" hkpCollisionAgent *fn_82D5FB30(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    return new hkpListAgent(bodyA, bodyB, input, mgr);
}
