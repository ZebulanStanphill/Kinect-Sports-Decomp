// hkpListAgent::hkpListAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &, hkpContactMgr *)
// (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): keeps the input's dispatcher and initialises
// the agent track (fn_82D70F30, which keeps its fn_ name because a Matching unit calls it).
#include "havok/hkpCollisionAgent.h"

class hkpAgent1nSector;

// hkpAgent1nTrack (Physics/Collide/Agent3/Machine/1n/hkpAgent1nTrack.h).
struct hkpAgent1nTrack {
    hkArray<hkpAgent1nSector *> m_sectors;
};

extern "C" void fn_82D70F30(hkpAgent1nTrack *track);   // hkAgent1nMachine_InitTrack
static HK_FORCE_INLINE void hkAgent1nMachine_InitTrack(hkpAgent1nTrack &track) { fn_82D70F30(&track); }

class hkpListAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkpAgent1nTrack m_agentTrack;           // +0x10
};

hkpListAgent::hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    m_dispatcher = input.m_dispatcher;
    hkAgent1nMachine_InitTrack(m_agentTrack);
}
