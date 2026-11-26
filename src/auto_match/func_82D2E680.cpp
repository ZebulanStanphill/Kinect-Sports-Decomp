// hkgpAbstractMesh<hkgpTriangulatorType<...>::Edge, Vertex, Triangle, hkContainerHeapAllocator>::~hkgpAbstractMesh
// for the default triangulator (hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, TriangleBase,
// DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>), from
// Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h. The destructor is user-written and
// empty; the vertex list (+0x8, 0x288-byte pools) and triangle list (+0x20, 0x488-byte pools) are
// destroyed in reverse order, each by its out-of-line reset (fn_82D2BA38 / fn_82D2BAB0) and then its pool
// allocator's out-of-line destructor (fn_82D2CDA0 / fn_82D2CE58). Those keep their fn_ names (Matching
// units define them) and are reached through the specialisations in hkgpTriangulator.h. The explicit
// instantiation at the end makes the compiler emit the destructor.
#include "havok/hkgpTriangulator.h"

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
hkgpAbstractMesh<EDGE, VERTEX, TRIANGLE, ALLOCATOR>::~hkgpAbstractMesh()
{
}

template hkgpAbstractMesh<hkgpTriangulator::Edge, hkgpTriangulator::Vertex, hkgpTriangulator::Triangle,
                          hkContainerHeapAllocator>::~hkgpAbstractMesh();
