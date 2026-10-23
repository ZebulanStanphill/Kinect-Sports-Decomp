// hkgpMesh scalar deleting destructor (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h); it calls
// ~hkgpMesh (out of line, already named) and frees through the class allocator. Hierarchy from the RTTI:
// hkgpMesh -> hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator> ->
// hkReferencedObject. The constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// A list: hkArray of block pointers (+0x0), then the free list (+0xC), the number of used items (+0x10)
// and the item list head (+0x14).
struct hkgpMeshBaseList {
    hkArrayBase<void *> m_blocks;
    void *m_firstFree;
    int m_numUsed;
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
    hkgpAbstractMesh() {}
    virtual ~hkgpAbstractMesh();

    hkgpMeshBaseList m_vertices;    // +0x8
    hkgpMeshBaseList m_triangles;   // +0x20
};

class hkgpMesh : public hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle,
                                         hkContainerHeapAllocator> {
public:
    hkgpMesh() {}
    virtual ~hkgpMesh();
};

void emitVtable_82D32FA0(void *p) { new (p) hkgpMesh(); }
