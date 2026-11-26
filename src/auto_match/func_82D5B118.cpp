// hkpHeightFieldAgent scalar deleting destructor; it calls ~hkpHeightFieldAgent (fn_82D5AB78, out of line) and
// frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpCollisionAgent.h"

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpHeightFieldAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
    virtual ~hkpHeightFieldAgent();
};

void emitVtable_82D5B118(void *p, hkpContactMgr *mgr) { new (p) hkpHeightFieldAgent(mgr); }
