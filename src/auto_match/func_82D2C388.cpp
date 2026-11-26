// hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator>::~hkgpAbstractMesh
// (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h). The destructor is user-written and
// empty; the vertex list (+0x8) and triangle list (+0x20) are destroyed in reverse order, each by its
// out-of-line reset and then its pool allocator's out-of-line destructor. Both lists use 0xa08-byte
// pools, so their functions were folded into one pair (fn_82D2B8D8 reset, fn_82D2C2D0 allocator
// destructor); those keep their fn_ names (Matching units define them) and are reached through the
// specialisations in hkgpMeshBase.h. The explicit instantiation at the end makes the compiler emit the
// destructor.
#include "havok/hkgpMeshBase.h"

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
hkgpAbstractMesh<EDGE, VERTEX, TRIANGLE, ALLOCATOR>::~hkgpAbstractMesh()
{
}

template hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle,
                          hkContainerHeapAllocator>::~hkgpAbstractMesh();
