// hkpCollisionDispatcher scalar deleting destructor; it calls ~hkpCollisionDispatcher (fn_82D597D8, out of
// line) and frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpCollisionDispatcher : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionDispatcher(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpCollisionDispatcher();
};

void emitVtable_82D59C48(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCollisionDispatcher(f); }
