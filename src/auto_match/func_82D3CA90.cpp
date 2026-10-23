// hkpBoxShape::~hkpBoxShape, the implicit destructor (Physics/Collide/Shape/Convex/Box/hkpBoxShape.h),
// emitted out of line: hkpBoxShape's deleting destructor (fn_82D39138) calls it. Nothing to destroy, so
// only hkBaseObject's vtable store is left. The function at the end only makes the compiler emit the
// vtable.
#include "havok/hkpShape.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpBoxShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBoxShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_BOX; }

    hkVector4 m_halfExtents;   // +0x20
};

void emitVtable_82D3CA90(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBoxShape(f); }
