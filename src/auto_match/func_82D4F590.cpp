// hkpStorageExtendedMeshShape::MeshSubpartStorage scalar deleting destructor: calls the user-written
// destructor (fn_82D4F308) out of line, then frees through the class allocator. The copy at the end only makes
// the compiler emit the vtable (the header declares no inline constructor).
#include "havok/hkBase.h"
#include "havok/hkpStorageExtendedMeshShape.h"

void emitVtable_82D4F590(void *p, const void *q)
{
    typedef hkpStorageExtendedMeshShape::MeshSubpartStorage Storage;
    new (p) Storage(*(const Storage *)q);
}
