// hkpPhysicsSystem scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpPhysicsSystem : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpPhysicsSystem(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpPhysicsSystem();
};

void emitVtable_82D7F498(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPhysicsSystem(f); }
