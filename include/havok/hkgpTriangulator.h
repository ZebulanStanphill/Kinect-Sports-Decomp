// hkgpTriangulatorBase and hkgpTriangulatorType<VERTEX, TRIANGLE, EDGEDATA, ALLOCATOR, N>
// (Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.h): a 2D triangulator over a 16x16 grid.
// The game has one instantiation, the default triangulator hkgpTriangulatorType<hkgpTriangulatorBase::
// VertexBase, TriangleBase, DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>, 0x6E0
// bytes, a member of hkgpMesh at +0x40. Its symbols give the names and say which are structs; what the last
// template argument means is not known.
// RTTI: hkgpTriangulatorType -> hkgpTriangulatorBase -> hkReferencedObject. Its vtable adds nothing to
// hkReferencedObject's three slots; hkgpTriangulatorBase has RTTI but no vtable of its own in the game.
//
// The layout is the game's:
//  - the constructor (inline in hkgpMesh's, 82D27D00) builds an in-place array of 64 8-byte items at +0x40,
//    stores 0 at +0x24C, builds the pool allocator at +0x250 and sets the domain to (-1, -1)..(1, 1) through
//    the out-of-line 82D30F50;
//  - 82D30F50 stores its last argument at +0x65C, fills the four vectors at +0x660 from the sine and cosine of
//    its angle argument and the size of the domain, computes the four vectors at +0x6A0 from them and calls
//    the reset function;
//  - the reset function (82D30C78) resets the mesh's two lists (at +0x10 and +0x28 of the triangulator),
//    clears the 256 pointers from +0x25C, destroys (82D2E8C0) and frees the 0x10-byte object +0x24C points to,
//    frees the 0x388-byte pools of the allocator at +0x250 and, when its argument is set, creates the four
//    corner vertices and the two triangles of the domain and enters them in the grid of roots;
//  - the destructor (inline in ~hkgpMesh, 82D27E90, and in the deleting destructor 82D31170) calls
//    reset(true), then destroys the pool allocator (82D2CA40), the in-place array and the mesh (82D2E680).
// A vertex is 0x14 bytes and a triangle 0x24 (the pools are 0x288 and 0x488 bytes, see
// hkGeometryProcessing.h); their members are what 82D2D830 (allocate a vertex) and 82D30C78 write. How they
// use VERTEX and TRIANGLE (hkgpTriangulatorBase's VertexBase and TriangleBase, declared empty here) is not
// known.
//
// reset, setDomain, m_stack, m_edgeDataPolicy, m_roots, m_margin, m_localToWorld and m_worldToLocal are named
// after Havok's header where it was remembered and by what the functions do otherwise; none of the names is
// in the game, and EdgeDataBox is this header's name. The type of the object at +0x24C and
// the items of the pool at +0x250 (0x1C bytes) are not known.
#ifndef HAVOK_HKGPTRIANGULATOR_H
#define HAVOK_HKGPTRIANGULATOR_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkMatrix4.h"
#include "havok/hkgpAbstractMesh.h"

extern "C" {
void fn_82D30C78(void *self, bool createDomainTriangulation);   // hkgpTriangulatorType<...>::reset
// hkgpTriangulatorType<...>::setDomain
void fn_82D30F50(void *self, const hkVector4 &dmin, const hkVector4 &dmax, hkReal angle, bool margin);
void fn_82D2BA38(void *self);   // the vertex list's reset
void fn_82D2CDA0(void *self);   // the vertex pool allocator's destructor
void fn_82D2BAB0(void *self);   // the triangle list's reset
void fn_82D2CE58(void *self);   // the triangle pool allocator's destructor
void fn_82D2CA40(void *self);   // the destructor of the pool allocator at +0x250
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

template <typename VERTEX, typename TRIANGLE, typename EDGEDATA, typename ALLOCATOR, int N>
class hkgpTriangulatorType : public hkgpTriangulatorBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

    struct Triangle;

    // 8 bytes: an edge is a triangle and the index of one of its sides.
    struct Edge {
        Triangle *m_triangle;   // +0x0
        hkUint32 m_index;       // +0x4
    };

    // 0x14 bytes. 82D2D830 copies the top bit of the last word and its other 31 bits separately.
    struct Vertex {
        Vertex *m_next;            // +0x0
        Vertex *m_prev;            // +0x4
        int m_x;                   // +0x8, 0..0x7FFF
        int m_y;                   // +0xC
        hkUint32 m_dataAndFlag;    // +0x10, 0x7FFFFFFF in a new vertex
    };

    // 0x24 bytes. A link is the neighbouring triangle's address with the index of its side in the low bits.
    struct Triangle {
        Triangle *m_next;         // +0x0
        Triangle *m_prev;         // +0x4
        Vertex *m_vertices[3];    // +0x8
        hkUlong m_links[3];       // +0x14
        hkUint16 m_flags;         // +0x20, 0x1000: the root of its grid cell
        hkUint16 m_data;          // +0x22
    };


    // The items of the pool allocator at +0x250, 0x1C bytes each.
    struct EdgeDataBox;

    typedef hkgpAbstractMesh<Edge, Vertex, Triangle, ALLOCATOR> Mesh;

    HK_FORCE_INLINE hkgpTriangulatorType()
    {
        m_edgeDataPolicy = HK_NULL;
        hkVector4 dmin;
        dmin.set(-1.0f, -1.0f, 0.0f, 0.0f);
        hkVector4 dmax;
        dmax.set(1.0f, 1.0f, 0.0f, 0.0f);
        setDomain(dmin, dmax, 0.0f, true);
    }
    // Inlined wherever it is used, also into the deleting destructor (an ordinary inline is not).
    HK_FORCE_INLINE virtual ~hkgpTriangulatorType() { reset(true); }

    // Both out of line in the game and known only under their fn_ names.
    HK_FORCE_INLINE void reset(bool createDomainTriangulation) { fn_82D30C78(this, createDomainTriangulation); }
    HK_FORCE_INLINE void setDomain(const hkVector4 &dmin, const hkVector4 &dmax, hkReal angle, bool margin)
    {
        fn_82D30F50(this, dmin, dmax, angle, margin);
    }

    Mesh m_mesh;                                                                   // +0x8
    hkInplaceArray<Edge, 64, ALLOCATOR> m_stack;                                                       // +0x40
    void *m_edgeDataPolicy;                                                        // +0x24C
    hkGeometryProcessing::PoolAllocator<EdgeDataBox, 32, ALLOCATOR> m_edgeData;    // +0x250
    Triangle *m_roots[16][16];                                                     // +0x25C
    int m_margin;                                                                  // +0x65C
    hkMatrix4 m_localToWorld;                                                      // +0x660
    hkMatrix4 m_worldToLocal;                                                      // +0x6A0
};

typedef hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase,
                             hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,
                             hkContainerHeapAllocator, -1>
    hkgpTriangulator;

// The default triangulator's out-of-line list and allocator functions (see hkgpAbstractMesh.h).
template <>
inline void hkgpAbstractMeshDefinitions::List<hkgpTriangulator::Vertex, hkContainerHeapAllocator>::reset()
{
    fn_82D2BA38(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpTriangulator::Vertex, 32, hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D2CDA0(this);
}

template <>
inline void hkgpAbstractMeshDefinitions::List<hkgpTriangulator::Triangle, hkContainerHeapAllocator>::reset()
{
    fn_82D2BAB0(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpTriangulator::Triangle, 32, hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D2CE58(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpTriangulator::EdgeDataBox, 32,
                                           hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D2CA40(this);
}

#endif
