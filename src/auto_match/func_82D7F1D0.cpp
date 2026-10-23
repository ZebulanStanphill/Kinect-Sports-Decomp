// hkpLimitedHingeConstraintData scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    hkpLimitedHingeConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
    virtual ~hkpLimitedHingeConstraintData();
};

void emitVtable_82D7F1D0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpLimitedHingeConstraintData(f); }
