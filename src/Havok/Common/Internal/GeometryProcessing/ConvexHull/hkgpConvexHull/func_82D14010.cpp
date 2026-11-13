// hkgpAbstractMesh<hkgpConvexHullImpl::Edge, Vertex, Triangle, hkContainerHeapAllocator>::~hkgpAbstractMesh
// (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h). The destructor is user-written and
// empty; the vertex list (+0x8) and triangle list (+0x20) are destroyed in reverse order, each by its
// out-of-line clear (fn_82D132A0 / fn_82D13318, which free the 0x808- / 0x908-byte blocks) and then its
// block allocator's out-of-line destructor (fn_82D13EA0 / fn_82D13F58). Those keep their fn_ names
// (Matching units define them) and are reached through the inline destructors below. The explicit
// instantiation at the end makes the compiler emit the destructor.
#include "havok/hkBase.h"

extern "C" {
void fn_82D132A0(void *self);   // vertex list: clear
void fn_82D13EA0(void *self);   // vertex list: block allocator destructor
void fn_82D13318(void *self);   // triangle list: clear
void fn_82D13F58(void *self);   // triangle list: block allocator destructor
}

// The lists: hkArray of block pointers (+0x0), then the free list (+0xC), the number of used items
// (+0x10) and the item list head (+0x14).
struct hkgpConvexHullImplVertexAllocator {
    ~hkgpConvexHullImplVertexAllocator() { fn_82D13EA0(this); }
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
};
struct hkgpConvexHullImplVertexList : hkgpConvexHullImplVertexAllocator {
    ~hkgpConvexHullImplVertexList() { fn_82D132A0(this); }
    void *m_used;
};
struct hkgpConvexHullImplTriangleAllocator {
    ~hkgpConvexHullImplTriangleAllocator() { fn_82D13F58(this); }
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
};
struct hkgpConvexHullImplTriangleList : hkgpConvexHullImplTriangleAllocator {
    ~hkgpConvexHullImplTriangleList() { fn_82D13318(this); }
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
    virtual ~hkgpAbstractMesh() {}

    hkgpConvexHullImplVertexList m_vertices;     // +0x8
    hkgpConvexHullImplTriangleList m_triangles;  // +0x20
};

template hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle,
                          hkContainerHeapAllocator>::~hkgpAbstractMesh();
