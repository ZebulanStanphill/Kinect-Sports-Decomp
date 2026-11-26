// hkpLimitedHingeConstraintData scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    hkpLimitedHingeConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
    virtual ~hkpLimitedHingeConstraintData();
};

void emitVtable_82D7F1D0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpLimitedHingeConstraintData(f); }
