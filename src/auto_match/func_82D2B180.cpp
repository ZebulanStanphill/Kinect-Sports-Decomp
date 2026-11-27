// hkgpMesh::NearestFeaturePolicy scalar deleting destructor. NearestFeaturePolicy derives from
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::ClosestPointCollector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(NearestFeaturePolicy) = 0x60 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkgpMesh.h"

void emitVtable_82D2B180(void *p) { new (p) hkgpMesh::NearestFeaturePolicy; }
