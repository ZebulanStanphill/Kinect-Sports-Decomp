// hkgpAbstractMesh<hkgpConvexHullImpl::Edge, Vertex, Triangle, hkContainerHeapAllocator> scalar deleting
// destructor (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h); it calls the out-of-line
// destructor (fn_82D14010, already named) and frees through the class allocator. The constructor at the end
// only makes the compiler emit the vtable.
#include "havok/hkgpConvexHullImpl.h"

typedef hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle,
                         hkContainerHeapAllocator>
    hkgpConvexHullImplMesh;

void emitVtable_82D14728(void *p) { new (p) hkgpConvexHullImplMesh(); }
