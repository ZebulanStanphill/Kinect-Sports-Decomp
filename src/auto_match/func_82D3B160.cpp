// hkpSimpleMeshShape scalar deleting destructor; it calls ~hkpSimpleMeshShape (fn_82D3B058, out of line) and frees
// through the class allocator. The copy at the end only makes the compiler emit the vtable (the header declares
// no inline constructor).
#include "havok/hkpSimpleMeshShape.h"

void emitVtable_82D3B160(void *p, const void *q)
{
    new (p) hkpSimpleMeshShape(*(const hkpSimpleMeshShape *)q);
}
