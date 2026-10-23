// hkpLinearParametricCurve scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpParametricCurve : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpParametricCurve(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpLinearParametricCurve : public hkpParametricCurve {
public:
    hkpLinearParametricCurve(hkFinishLoadedObjectFlag flag) : hkpParametricCurve(flag) {}
    virtual ~hkpLinearParametricCurve();
};

void emitVtable_82D7F340(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpLinearParametricCurve(f); }
