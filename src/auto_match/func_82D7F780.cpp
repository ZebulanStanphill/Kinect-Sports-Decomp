// hkpPrismaticConstraintData's scalar deleting destructor: it calls the out-of-line destructor (fn_82D96FB0,
// ??1hkpPrismaticConstraintData@@UAA@XZ) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpPrismaticConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpPrismaticConstraintData() {}
    virtual ~hkpPrismaticConstraintData();
};

void emitVtable_82D7F780(void *p) { new (p) hkpPrismaticConstraintData; }
