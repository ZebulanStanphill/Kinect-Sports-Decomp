// hkgpAbstractMesh<hkgpTriangulatorType<...>::Edge, Vertex, Triangle, hkContainerHeapAllocator> scalar deleting
// destructor for the default triangulator (hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, TriangleBase,
// DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>), from
// Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h; it calls the out-of-line destructor
// (fn_82D2E680, already named) and frees through the class allocator. The constructor at the end only makes
// the compiler emit the vtable.
#include "havok/hkBase.h"

// A list: hkArray of block pointers (+0x0), then the free list (+0xC), the number of used items (+0x10)
// and the item list head (+0x14).
struct hkgpTriangulatorList {
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
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
    hkgpAbstractMesh() {}
    virtual ~hkgpAbstractMesh();

    hkgpTriangulatorList m_vertices;    // +0x8
    hkgpTriangulatorList m_triangles;   // +0x20
};

typedef hkgpAbstractMesh<hkgpTriangulator::Edge, hkgpTriangulator::Vertex, hkgpTriangulator::Triangle,
                         hkContainerHeapAllocator>
    hkgpTriangulatorMesh;

void emitVtable_82D2E6F0(void *p) { new (p) hkgpTriangulatorMesh(); }
