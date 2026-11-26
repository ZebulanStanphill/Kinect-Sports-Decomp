// hkgpMesh::~hkgpMesh (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.cpp). RTTI: hkgpMesh derives from
// hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator>, whose destructor is out
// of line (fn_82D2C388). The body resets the mesh (fn_82D27C70); then the members are destroyed in reverse
// order: two hkArrays of 16-byte items, an hkAabbTree<hkAabbTreeAabb, hkUint32> (inline destructor: its
// out-of-line clear fn_82D34CA8, then its node storage's destructor fn_82D1E718) and a default
// triangulator (inline destructor).
#include "havok/hkgpMesh.h"

hkgpMesh::~hkgpMesh()
{
    reset();
}
