#include "havok/hkpConvexListShape.h"
const void *getVtablehkpConvexListShape() {
 union { void *ptr; char buf[sizeof(hkpConvexListShape)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpConvexListShape(f);
 return u.ptr;
}
