// hkpPointToPathConstraintData scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpPointToPathConstraintData : public hkpConstraintData {
public:
    hkpPointToPathConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
    virtual ~hkpPointToPathConstraintData();
};

void emitVtable_82D7F568(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPointToPathConstraintData(f); }
