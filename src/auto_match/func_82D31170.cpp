// The default triangulator's scalar deleting destructor (hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase,
// TriangleBase, DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>), generated from
// its inline destructor: reset(true), then the members in reverse order (the block pool's and the
// mesh's destructors are out of line). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// hkgpAbstractMesh<EDGE, VERTEX, TRIANGLE, ALLOCATOR> (Common/Internal/GeometryProcessing/AbstractMesh/
// hkgpAbstractMesh.h), 0x38 bytes: hkReferencedObject, then the vertex list (+0x8) and the triangle list
// (+0x20), each an hkArray of block pointers, a free list, a used count and a list head. Its destructor
// is out of line (renamed in the maps: fn_82D2C388 for hkgpMeshBase's, fn_82D2E680 for the default
// triangulator's).
struct hkgpAbstractMeshList {
    hkArrayBase<void *> m_blocks;   // +0x0
    void *m_firstFree;              // +0xC
    int m_numUsed;                  // +0x10
    void *m_used;                   // +0x14
};

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
struct hkgpAbstractMesh : public hkReferencedObject {
    virtual ~hkgpAbstractMesh();

    hkgpAbstractMeshList m_vertices;    // +0x8
    hkgpAbstractMeshList m_triangles;   // +0x20
};

class hkgpMeshBase {
public:
    struct Edge {
        hkUlong m_triangleAndIndex;
    };
    struct Vertex;
    struct Triangle;
};

// hkgpTriangulatorBase / hkgpTriangulatorType (Common/Internal/GeometryProcessing/Triangulator/
// hkgpTriangulator.h). The default instantiation, hkgpTriangulatorType<VertexBase, TriangleBase,
// DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>, is 0x6E0 bytes:
//   +0x8   hkgpAbstractMesh<Edge, Vertex, Triangle, hkContainerHeapAllocator> m_mesh
//   +0x40  hkArray of 8-byte items
//   +0x250 a block pool whose destructor is out of line (fn_82D2CA40, frees its 0x388-byte blocks)
// Its destructor resets the triangulator (fn_82D30C78(this, true)).
extern "C" {
void fn_82D30C78(void *self, bool full);   // hkgpTriangulatorType<...>::reset
void fn_82D2CA40(void *self);              // destructor of the block pool at +0x250
}

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

struct hkgpTriangulatorBlockPool {
    ~hkgpTriangulatorBlockPool() { fn_82D2CA40(this); }
    hkArrayBase<void *> m_blocks;
};

struct hkgpTriangulatorEdgeItem {
    hkUint32 m_a;
    hkUint32 m_b;
};

template <typename VERTEX, typename TRIANGLE, typename EDGEDATA, typename ALLOCATOR, int N>
class hkgpTriangulatorType : public hkgpTriangulatorBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    struct Edge {
        hkUlong m_triangleAndIndex;
    };
    struct Vertex;
    struct Triangle;

    hkgpTriangulatorType();
    // Inlined wherever it is used, also into the deleting destructor (an ordinary inline is not).
    HK_FORCE_INLINE virtual ~hkgpTriangulatorType() { reset(true); }
    void reset(bool full) { fn_82D30C78(this, full); }

    hkgpAbstractMesh<Edge, Vertex, Triangle, ALLOCATOR> m_mesh;   // +0x8
    hkArray<hkgpTriangulatorEdgeItem> m_edgeItems;                // +0x40
    hkUint8 m_data[0x250 - 0x4C];                                 // +0x4C
    hkgpTriangulatorBlockPool m_pool;                             // +0x250
    hkUint8 m_data2[0x6E0 - 0x25C];                               // +0x25C
};

typedef hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase,
                             hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,
                             hkContainerHeapAllocator, -1>
    hkgpTriangulator;

void emitVtable_82D31170(hkgpTriangulator *p) { p->hkgpTriangulator::~hkgpTriangulatorType(); }
