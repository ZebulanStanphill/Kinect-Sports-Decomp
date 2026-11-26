// hkgpMesh::ExtrudeShape::~ExtrudeShape, the implicit destructor (Common/Internal/GeometryProcessing/Mesh/
// hkgpMesh.cpp), emitted out of line: the deleting destructor (fn_82D2E610) calls it. It destroys the hkArray
// of 0x30-byte planes at +0x10, then the interface base hkgpMesh::IConvexOverlap::IConvexShape stores its
// vtable. The function at the end only makes the compiler emit the vtable.
#include "havok/hkgpMesh.h"

void emitVtable_82D2CFE0(void *p) { new (p) hkgpMesh::ExtrudeShape; }
