// hkgpAbstractMesh<hkgpConvexHullImpl::Edge, Vertex, Triangle, hkContainerHeapAllocator> scalar deleting
// destructor (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h); it calls the out-of-line
// destructor (fn_82D14010, already named) and frees through the class allocator. The constructor at the end
// only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// A list: hkArray of block pointers (+0x0), then the free list (+0xC), the number of used items (+0x10)
// and the item list head (+0x14).
struct hkgpConvexHullImplList {
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
    void *m_used;
};

class hkgpConvexHullImpl {
public:
    struct Edge {
        hkUlong m_triangleAndIndex;
    };
    struct Vertex;
    struct Triangle;
};

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
struct hkgpAbstractMesh : public hkReferencedObject {
    hkgpAbstractMesh() {}
    virtual ~hkgpAbstractMesh();

    hkgpConvexHullImplList m_vertices;    // +0x8
    hkgpConvexHullImplList m_triangles;   // +0x20
};

typedef hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle,
                         hkContainerHeapAllocator>
    hkgpConvexHullImplMesh;

void emitVtable_82D14728(void *p) { new (p) hkgpConvexHullImplMesh(); }
