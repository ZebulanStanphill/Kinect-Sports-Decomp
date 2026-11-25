// hkpListAgent's scalar deleting destructor (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.h; folded with
// hkpSymmetricAgent<hkpListAgent>'s): the implicit destructor inlined (m_agentTrack's sector array, whose
// destructor is out of line as fn_82CE4C80, then hkBaseObject's vtable), then the class allocator's delete.
#include "havok/hkpCollisionAgent.h"

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
