// hkgpMesh::WeldingPolicy scalar deleting destructor. WeldingPolicy derives from the interface
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(WeldingPolicy) = 0x30 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkgpMesh.h"

void emitVtable_82D2B0B0(void *p) { new (p) hkgpMesh::WeldingPolicy; }
