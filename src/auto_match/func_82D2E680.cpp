// hkgpAbstractMesh<hkgpTriangulatorType<...>::Edge, Vertex, Triangle, hkContainerHeapAllocator>::~hkgpAbstractMesh
// for the default triangulator (hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, TriangleBase,
// DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>), from
// Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h. The destructor is user-written and
// empty; the vertex list (+0x8, 0x288-byte blocks) and triangle list (+0x20, 0x488-byte blocks) are
// destroyed in reverse order, each by its out-of-line clear (fn_82D2BA38 / fn_82D2BAB0) and then its block
// allocator's out-of-line destructor (fn_82D2CDA0 / fn_82D2CE58). Those keep their fn_ names (Matching
// units define them) and are reached through the inline destructors below. The explicit instantiation at
// the end makes the compiler emit the destructor.
#include "havok/hkBase.h"

extern "C" {
void fn_82D2BA38(void *self);   // vertex list: clear
void fn_82D2CDA0(void *self);   // vertex list: block allocator destructor
void fn_82D2BAB0(void *self);   // triangle list: clear
void fn_82D2CE58(void *self);   // triangle list: block allocator destructor
}

// The lists: hkArray of block pointers (+0x0), then the free list (+0xC), the number of used items
// (+0x10) and the item list head (+0x14).
struct hkgpTriangulatorVertexAllocator {
    ~hkgpTriangulatorVertexAllocator() { fn_82D2CDA0(this); }
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
};
struct hkgpTriangulatorVertexList : hkgpTriangulatorVertexAllocator {
    ~hkgpTriangulatorVertexList() { fn_82D2BA38(this); }
    void *m_used;
};
struct hkgpTriangulatorTriangleAllocator {
    ~hkgpTriangulatorTriangleAllocator() { fn_82D2CE58(this); }
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
};
struct hkgpTriangulatorTriangleList : hkgpTriangulatorTriangleAllocator {
    ~hkgpTriangulatorTriangleList() { fn_82D2BAB0(this); }
    void *m_used;
};

class hkgpTriangulatorBase : public hkReferencedObject {
public:
    struct VertexBase {
    };
    struct TriangleBase {
    };
    template <typename ALLOCATOR>
    struct DefaultEdgeData {
    };
};

template <typename VERTEX, typename TRIANGLE, typename EDGEDATA, typename ALLOCATOR, int N>
class hkgpTriangulatorType : public hkgpTriangulatorBase {
public:
    struct Edge {
        hkUlong m_triangleAndIndex;
    };
    struct Vertex;
    struct Triangle;
};

typedef hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase,
                             hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,
                             hkContainerHeapAllocator, -1>
    hkgpTriangulator;

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
struct hkgpAbstractMesh : public hkReferencedObject {
    virtual ~hkgpAbstractMesh() {}

    hkgpTriangulatorVertexList m_vertices;     // +0x8
    hkgpTriangulatorTriangleList m_triangles;  // +0x20
};

template hkgpAbstractMesh<hkgpTriangulator::Edge, hkgpTriangulator::Vertex, hkgpTriangulator::Triangle,
                          hkContainerHeapAllocator>::~hkgpAbstractMesh();
