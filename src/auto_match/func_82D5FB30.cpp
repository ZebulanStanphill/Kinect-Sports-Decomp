// hkpListAgent::createAgent (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.cpp): allocates the agent
// with the class allocator (no null check) and runs the inlined constructor. The agent function table built
// by fn_82D5FBB8 (a Matching unit) lists it, so it keeps its fn_ name and is written as extern "C".
#include "havok/hkBase.h"

class hkpCdBody;
class hkpContactMgr;
class hkpConstraintOwner;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef hkUint32 hkpShapeKey;

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8). Vtable slots from func_82D60AC8.
class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

    hkpContactMgr *m_contactMgr;   // +0x8
};

class hkpCollisionDispatcher;
class hkpAgent1nSector;

struct hkpCollisionInput {
    hkpCollisionDispatcher *m_dispatcher;   // +0x0
};

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

extern "C" hkpCollisionAgent *fn_82D5FB30(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    return new hkpListAgent(bodyA, bodyB, input, mgr);
}
