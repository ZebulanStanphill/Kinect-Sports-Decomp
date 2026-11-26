// hkpSymmetricAgent<hkpListAgent>::createAgent (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp):
// allocates the agent with the class allocator (no null check) and runs the inlined constructors:
// hkpListAgent's with the bodies swapped, then hkpSymmetricAgent's vtable. hkpSymmetricAgent's constructor
// must be HK_FORCE_INLINE for the compiler to inline the pair (as in the game).
#include "havok/hkpListAgent.h"
#include "havok/hkpSymmetricAgent.h"

// The constructor is defined in this file (out of line, 82D5FAC8), so the compiler inlines it here.
hkpListAgent::hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    m_dispatcher = input.m_dispatcher;
    hkAgent1nMachine_InitTrack(m_agentTrack);
}

template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpListAgent>::createAgent(const hkpCdBody &bodyA,
                                                                                const hkpCdBody &bodyB,
                                                                                const hkpCollisionInput &input,
                                                                                hkpContactMgr *mgr);
