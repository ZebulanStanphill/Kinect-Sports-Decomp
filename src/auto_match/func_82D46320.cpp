// hkpCompressedMeshShape scalar deleting destructor; it calls ~hkpCompressedMeshShape (fn_82D46000, out of line) and frees
// through the class allocator. The copy at the end only makes the compiler emit the vtable (the header declares
// no inline constructor).
#include "havok/hkpCompressedMeshShape.h"

void emitVtable_82D46320(void *p, const void *q)
{
    new (p) hkpCompressedMeshShape(*(const hkpCompressedMeshShape *)q);
}
