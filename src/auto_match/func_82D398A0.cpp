// hkpSampledHeightFieldShape scalar deleting destructor; it calls ~hkpSampledHeightFieldShape (out of line,
// already named) and frees through the class allocator. Hierarchy from the RTTI: hkpSampledHeightFieldShape
// -> hkpHeightFieldShape -> hkpShape. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag) {}
    virtual ~hkpSampledHeightFieldShape();
};

void emitVtable_82D398A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSampledHeightFieldShape(f); }
