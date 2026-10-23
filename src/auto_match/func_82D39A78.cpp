#include "havok/hkpShape.h"
class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpConvexListShape(hkFinishLoadedObjectFlag f) : hkpConvexShape(f) {}
};
const void *getVtablehkpConvexListShape() {
 union { void *ptr; char buf[sizeof(hkpConvexListShape)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpConvexListShape(f);
 return u.ptr;
}
