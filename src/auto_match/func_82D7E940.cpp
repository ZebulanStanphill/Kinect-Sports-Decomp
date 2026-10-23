// hkpConstraintInstance scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpConstraintInstance : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpConstraintInstance(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpConstraintInstance();
};

void emitVtable_82D7E940(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConstraintInstance(f); }
