// hkpListAgent's scalar deleting destructor (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.h; folded with
// hkpSymmetricAgent<hkpListAgent>'s): the implicit destructor inlined (m_agentTrack's sector array, whose
// destructor is out of line as fn_82CE4C80, then hkBaseObject's vtable), then the class allocator's delete.
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

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8).
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

// hkpAgent1nTrack (Physics/Collide/Agent3/Machine/1n/hkpAgent1nTrack.h): one hkArray<hkpAgent1nSector *>.
// Its destructor (the array's) is out of line, fn_82CE4C80, and keeps its fn_ name (a Matching C unit
// defines it); the array is declared without a destructor so it is not destroyed twice.
struct hkpAgent1nTrack;
extern "C" void fn_82CE4C80(hkpAgent1nTrack *self);
struct hkpAgent1nTrack {
    HK_FORCE_INLINE ~hkpAgent1nTrack() { fn_82CE4C80(this); }
    hkArrayBase<hkpAgent1nSector *> m_sectors;
};

class hkpListAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    // Out of line as fn_82D5FAC8 (it also stores m_dispatcher and initialises the track); only its vtable
    // store matters here.
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpCollisionAgent(mgr) {}

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkpAgent1nTrack m_agentTrack;           // +0x10
};

// Emits the vtable (and with it the deleting destructor).
void emitVtable_82D5FDA0(void *p, const hkpCdBody &a, const hkpCdBody &b, const hkpCollisionInput &in, hkpContactMgr *m)
{
    new (p) hkpListAgent(a, b, in, m);
}
