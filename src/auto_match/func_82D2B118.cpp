// hkgpMesh::CollideShapeTriangle scalar deleting destructor. CollideShapeTriangle derives from the interface
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(CollideShapeTriangle) = 0x20 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkgpMesh.h"

void emitVtable_82D2B118(void *p)
{
    new (p) hkgpMesh::CollideShapeTriangle(HK_NULL, HK_NULL, 0.0f, false, false, false);
}
