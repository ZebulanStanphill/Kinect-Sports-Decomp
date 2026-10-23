// hkpBvTreeStreamAgent scalar deleting destructor (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.h; folded with hkpSymmetricAgent<hkpBvTreeStreamAgent>'s): the inline destructor
// (vtable, then m_agentTrack's sector array, whose destructor is out of line as fn_82CE4C80, then
// hkBaseObject's vtable), then the class allocator's delete. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpContactMgr;

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8).
class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

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

class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    ~hkpBvTreeStreamAgent() {}

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkAabb m_cachedAabb;                    // +0x10
    hkpAgent1nTrack m_agentTrack;           // +0x30
};

void emitVtable_82D54FD8(hkpBvTreeStreamAgent *p) { p->hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent(); }
