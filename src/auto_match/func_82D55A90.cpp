// hkpBvTreeAgent scalar deleting destructor: calls the user-written destructor (fn_82D558B0) out of line,
// then frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpCollisionAgent.h"

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
    virtual ~hkpBvTreeAgent();

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
};

void emitVtable_82D55A90(void *p) { new (p) hkpBvTreeAgent(0); }
