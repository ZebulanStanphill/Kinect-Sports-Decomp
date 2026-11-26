// hkgpMesh scalar deleting destructor (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h); it calls
// ~hkgpMesh (out of line, already named) and frees through the class allocator. Hierarchy from the RTTI:
// hkgpMesh -> hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator> ->
// hkReferencedObject. The function at the end only makes the compiler emit the vtable: hkgpMesh's
// constructor is out of line, so it copies an object.
#include "havok/hkgpMesh.h"

void emitVtable_82D32FA0(void *p, const hkgpMesh *q) { new (p) hkgpMesh(*q); }
