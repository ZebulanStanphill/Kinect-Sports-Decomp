// hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator>::~hkgpAbstractMesh
// (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h). The destructor is user-written and
// empty; the vertex list (+0x8) and triangle list (+0x20) are destroyed in reverse order, each by its
// out-of-line clear and then its block allocator's out-of-line destructor. Both lists use 0xa08-byte
// blocks, so their functions were folded into one pair (fn_82D2B8D8 clear, fn_82D2C2D0 allocator
// destructor); those keep their fn_ names (Matching units define them) and are reached through the
// inline destructors below. The explicit instantiation at the end makes the compiler emit the destructor.
#include "havok/hkBase.h"

extern "C" {
void fn_82D2B8D8(void *self);   // list: clear (frees the 0xa08-byte blocks)
void fn_82D2C2D0(void *self);   // list: block allocator destructor
}

// A list: hkArray of block pointers (+0x0), then the free list (+0xC), the number of used items (+0x10)
// and the item list head (+0x14).
struct hkgpMeshBaseAllocator {
    ~hkgpMeshBaseAllocator() { fn_82D2C2D0(this); }
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
};
struct hkgpMeshBaseList : hkgpMeshBaseAllocator {
    ~hkgpMeshBaseList() { fn_82D2B8D8(this); }
    void *m_used;
};

class hkgpMeshBase {
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

    hkgpMeshBaseList m_vertices;    // +0x8
    hkgpMeshBaseList m_triangles;   // +0x20
};

template hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle,
                          hkContainerHeapAllocator>::~hkgpAbstractMesh();
