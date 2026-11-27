// hkpCompressedMeshShape::~hkpCompressedMeshShape, the implicit destructor (Physics/Collide/Shape/Compound/
// Collection/CompressedMesh/hkpCompressedMeshShape.h), emitted out of line: the deleting destructor
// (82D46320) calls it. The hkArrays are destroyed in reverse order; the elements of the named material,
// convex piece and chunk arrays are destroyed first to last. The convex piece and chunk destructors are out
// of line (82D39710, 82D395E0). The copy at the end only makes the compiler emit the vtable (the header declares
// no inline constructor), and with it this destructor.
#include "havok/hkpCompressedMeshShape.h"

void emitVtable_82D46000(void *p, const void *q)
{
    new (p) hkpCompressedMeshShape(*(const hkpCompressedMeshShape *)q);
}
