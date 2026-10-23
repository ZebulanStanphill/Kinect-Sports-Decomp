// hkpPointToPathConstraintData scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPointToPathConstraintData : public hkpConstraintData {
public:
    hkpPointToPathConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
    virtual ~hkpPointToPathConstraintData();
};

void emitVtable_82D7F568(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPointToPathConstraintData(f); }
