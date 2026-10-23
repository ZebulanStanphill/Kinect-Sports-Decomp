// hkpBoxShape scalar deleting destructor; it calls ~hkpBoxShape (out of line, already named) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpBoxShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBoxShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_BOX; }
    virtual ~hkpBoxShape();

    hkVector4 m_halfExtents;   // +0x20
};

void emitVtable_82D39138(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBoxShape(f); }
