// hkpConvexVerticesShape scalar deleting destructor; it calls ~hkpConvexVerticesShape (fn_82D3F380, out of line) and frees
// through the class allocator. The copy at the end only makes the compiler emit the vtable (the header declares
// no inline constructor).
#include "havok/hkpConvexVerticesShape.h"

void emitVtable_82D402B0(void *p, const void *q)
{
    new (p) hkpConvexVerticesShape(*(const hkpConvexVerticesShape *)q);
}
