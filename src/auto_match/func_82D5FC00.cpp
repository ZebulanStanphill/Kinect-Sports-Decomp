// hkpSymmetricAgent<hkpListAgent>::createAgent (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp):
// allocates the agent with the class allocator (no null check) and runs the inlined constructors:
// hkpListAgent's with the bodies swapped, then hkpSymmetricAgent's vtable. hkpSymmetricAgent's constructor
// must be HK_FORCE_INLINE for the compiler to inline the pair (as in the game).
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
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpCollisionAgent(mgr)
    {
        m_dispatcher = input.m_dispatcher;
        hkAgent1nMachine_InitTrack(m_agentTrack);
    }

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkpAgent1nTrack m_agentTrack;           // +0x10
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}

    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr)
    {
        return new hkpSymmetricAgent<AGENT>(bodyA, bodyB, input, mgr);
    }
};

template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpListAgent>::createAgent(const hkpCdBody &bodyA,
                                                                                const hkpCdBody &bodyB,
                                                                                const hkpCollisionInput &input,
                                                                                hkpContactMgr *mgr);
