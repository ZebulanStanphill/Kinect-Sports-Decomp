// hkpHeightFieldAgent scalar deleting destructor; it calls ~hkpHeightFieldAgent (fn_82D5AB78, out of line) and
// frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpContactMgr;

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpHeightFieldAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
    virtual ~hkpHeightFieldAgent();
};

void emitVtable_82D5B118(void *p, hkpContactMgr *mgr) { new (p) hkpHeightFieldAgent(mgr); }
