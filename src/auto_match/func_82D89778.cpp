// hkpNullContactMgrFactory scalar deleting destructor (Physics/Dynamics/Collide/ContactListener/hkpNullContactMgrFactory.h),
// generated from the implicit destructor: the embedded hkpNullContactMgr (+0x8, 0xC bytes; hkpContactMgr::m_type
// = 3 at +0x10, from the factory's construction in fn_82D80DF0) leaves its hkBaseObject vtable store, then the
// factory's. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpContactMgr.h"
#include "havok/hkpContactMgrFactory.h"

class hkpNullContactMgr : public hkpContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullContactMgr() : hkpContactMgr(TYPE_NULL_CONTACT_MGR) {}
};

class hkpNullContactMgrFactory : public hkpContactMgrFactory {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullContactMgrFactory() {}
    virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                            const hkpCollisionInput &env);

    hkpNullContactMgr m_contactMgr;   // +0x8
};

void emitVtable_82D89778(void *p) { new (p) hkpNullContactMgrFactory; }
