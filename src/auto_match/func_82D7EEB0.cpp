// hkpKeyframedRigidMotion scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpMotion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    hkpKeyframedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
    virtual ~hkpKeyframedRigidMotion();
};

void emitVtable_82D7EEB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpKeyframedRigidMotion(f); }
