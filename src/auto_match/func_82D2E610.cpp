// hkgpMesh::ExtrudeShape scalar deleting destructor (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.cpp):
// calls the out-of-line implicit destructor ??1ExtrudeShape@hkgpMesh@@UAA@XZ (fn_82D2CFE0), then, when
// deleting, frees sizeof(ExtrudeShape) = 0x80 bytes to the heap through Havok's non-virtual class
// allocator, whose operator delete checks for null. The class layout follows func_82D2CFE0.cpp.
// The function at the end only makes the compiler emit the vtable, and with it this function.
#include "havok/hkgpMesh.h"

void emitVtable_82D2E610(void *p) { new (p) hkgpMesh::ExtrudeShape; }
