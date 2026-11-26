// hkgpMesh::TriangleShape scalar deleting destructor (identical code also
// serves hkgpMesh::ConvexHullShape and hkgpMesh::PrismShape<1>).
// TriangleShape derives from the interface hkgpMesh::IConvexOverlap::IConvexShape
// (RTTI) and has Havok's non-virtual class allocator, so deleting frees
// sizeof(TriangleShape) = 8 bytes to the heap. The implicit destructor leaves
// only IConvexShape's vtable store. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkgpMesh.h"

void emitVtable_82D2A7D8(void *p) { new (p) hkgpMesh::TriangleShape(HK_NULL); }
