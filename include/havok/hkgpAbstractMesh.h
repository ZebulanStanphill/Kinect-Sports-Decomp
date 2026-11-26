// hkgpAbstractMesh<EDGE, VERTEX, TRIANGLE, ALLOCATOR> (Common/Internal/GeometryProcessing/AbstractMesh/
// hkgpAbstractMesh.h), 0x38 bytes: a mesh as a list of vertices and a list of triangles. The game has three
// instantiations, each with a vtable, a destructor and a deleting destructor under their real names:
//   hkgpConvexHullImpl's (82D14010, 82D14728), a member at +0x10 of hkgpConvexHullImpl;
//   hkgpMeshBase's (82D2C388, 82D2CBC0), the base class of hkgpMesh;
//   the default triangulator's (82D2E680, 82D2E6F0), a member at +0x8 of hkgpTriangulatorType.
// RTTI: hkgpAbstractMesh is a class and derives from hkReferencedObject; its vtable adds nothing to
// hkReferencedObject's three slots.
//
// The layout is the game's. The vertex list is at +0x8 and the triangle list at +0x20; the constructors that
// build a mesh (82D16868, 82D27D00) create an empty array at each and store 0 at +0xC and +0x10 of each list,
// in that order. The destructor is user-written and empty and is out of line in the game, so it is declared
// here; the three units named above define it. It destroys the triangle list, then the vertex list.
//
// A list (0x18 bytes) is a pool allocator for its items, the head of the list of items in use (+0xC; an item
// starts with its next and previous pointers: the allocation function 82D2D830 links a new item
// in front of the head) and the number of items in use (+0x10). Nothing is seen to use the word at +0x14.
// A list's destructor calls its reset function, which frees the pools without freeing the array and clears
// the head and the count; that function is out of line in the game, one for each item size and only under
// fn_ names, so it is declared here and specialised in the header of the item type, like the destructor of
// hkGeometryProcessing::PoolAllocator.
// No symbol of the game names the list: hkgpAbstractMeshDefinitions::List, its members and reset follow
// Havok's header, except m_unknown14.
#ifndef HAVOK_HKGPABSTRACTMESH_H
#define HAVOK_HKGPABSTRACTMESH_H

#include "havok/hkBase.h"
#include "havok/hkGeometryProcessing.h"

namespace hkgpAbstractMeshDefinitions {

template <typename T, typename ALLOCATOR>
struct List {
    HK_FORCE_INLINE List() : m_used(HK_NULL), m_numUsed(0) {}
    ~List() { reset(); }
    void reset();   // out of line, see above

    hkGeometryProcessing::PoolAllocator<T, 32, ALLOCATOR> m_allocator;   // +0x0
    T *m_used;                                                           // +0xC
    int m_numUsed;                                                       // +0x10
    hkUint32 m_unknown14;                                                // +0x14
};

}

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
class hkgpAbstractMesh : public hkReferencedObject {
public:
    typedef hkgpAbstractMeshDefinitions::List<VERTEX, ALLOCATOR> VertexList;
    typedef hkgpAbstractMeshDefinitions::List<TRIANGLE, ALLOCATOR> TriangleList;

    HK_FORCE_INLINE hkgpAbstractMesh() {}
    virtual ~hkgpAbstractMesh();   // out of line: 82D14010, 82D2C388, 82D2E680

    VertexList m_vertices;       // +0x8
    TriangleList m_triangles;    // +0x20
};

#endif
