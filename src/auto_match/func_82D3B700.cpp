// hkpTransformShape scalar deleting destructor, generated from the implicit destructor (the
// hkpSingleShapeContainer member at +0x10, then the bases). The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpTransformShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTransformShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag), m_childShape(flag) { m_type = hkpShapeType(0xf); }

    hkpSingleShapeContainer m_childShape;   // +0x10
};

void emitVtable_82D3B700(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpTransformShape(f); }
