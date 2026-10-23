// hkpConvexTransformShapeBase scalar deleting destructor, generated from the implicit destructor (the
// hkpSingleShapeContainer member at +0x14, then the bases); identical code also serves
// hkpConvexTransformShape, hkpConvexTranslateShape and hkpTriSampledHeightFieldBvTreeShape. The function
// at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTransformShapeBase(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag), m_childShape(flag) {}

    hkpSingleShapeContainer m_childShape;   // +0x14
};

void emitVtable_82D39DE8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConvexTransformShapeBase(f); }
