// hkpBvTreeStreamAgent (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.h), 0x40 bytes.
// The layout is the game's: the constructor (82D54230) keeps the input's dispatcher at +0xC, clears both
// corners of the cached AABB at +0x10 and initialises the agent track at +0x30; the deleting destructor
// (82D54FD8) runs the inline destructor, which destroys the track. The destructor is user-written and empty:
// it stores the class vtable before the track is destroyed (an implicit one does not). The constructor is out
// of line in every unit that creates the agent (82D542B8, 82D54A38, 82D54900, 82D54C48).
// Its vtable (??_7hkpBvTreeStreamAgent@@6B@) overrides every hkpCollisionAgent slot, all under fn_ names
// (+0xC 82D54068, +0x10 82D54080, +0x14 82D54098, +0x18 82D54318, +0x1C 82D540B0 ...); none is declared here.
// The registerAgent functions store hkpBvTreeAgent's static queries for it.
// The member names follow Havok's header.
#ifndef HAVOK_HKPBVTREESTREAMAGENT_H
#define HAVOK_HKPBVTREESTREAMAGENT_H

#include "havok/hkAabb.h"
#include "havok/hkpAgent1nTrack.h"
#include "havok/hkpCollisionAgent.h"

class hkpCollisionDispatcher;

class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpContactMgr *mgr);   // out of line (82D54230)
    ~hkpBvTreeStreamAgent() {}

    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkAabb m_cachedAabb;                    // +0x10
    hkpAgent1nTrack m_agentTrack;           // +0x30
};

#endif
