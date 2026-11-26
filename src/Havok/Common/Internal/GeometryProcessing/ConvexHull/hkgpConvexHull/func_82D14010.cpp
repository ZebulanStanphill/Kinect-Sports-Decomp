// hkgpAbstractMesh<hkgpConvexHullImpl::Edge, Vertex, Triangle, hkContainerHeapAllocator>::~hkgpAbstractMesh
// (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h). The destructor is user-written and
// empty; the vertex list (+0x8) and triangle list (+0x20) are destroyed in reverse order, each by its
// out-of-line reset (fn_82D132A0 / fn_82D13318, which free the 0x808- / 0x908-byte pools) and then its
// pool allocator's out-of-line destructor (fn_82D13EA0 / fn_82D13F58). Those keep their fn_ names
// (Matching units define them) and are reached through the specialisations in hkgpConvexHullImpl.h. The
// explicit instantiation at the end makes the compiler emit the destructor.
#include "havok/hkgpConvexHullImpl.h"

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
hkgpAbstractMesh<EDGE, VERTEX, TRIANGLE, ALLOCATOR>::~hkgpAbstractMesh()
{
}

template hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle,
                          hkContainerHeapAllocator>::~hkgpAbstractMesh();
