// hkpConvexVerticesShape scalar deleting destructor; it calls ~hkpConvexVerticesShape (fn_82D3F380, out of line) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) {}
    virtual ~hkpConvexVerticesShape();
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;
};

void emitVtable_82D402B0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConvexVerticesShape(f); }
