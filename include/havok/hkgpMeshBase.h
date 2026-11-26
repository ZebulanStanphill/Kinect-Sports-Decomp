// hkgpMeshBase (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h): the edge, vertex and triangle types of
// hkgpMesh, which derives from hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex,
// hkgpMeshBase::Triangle, hkContainerHeapAllocator> (RTTI; the mangled names say the three are structs).
// hkgpMeshBase itself is not a base class of hkgpMesh.
//
// A vertex and a triangle are 0x50 bytes each: both lists use pools of 0xA08 bytes (32 items and two words),
// so the game has one reset function (82D2B8D8) and one pool allocator destructor (82D2C2D0) for the two.
// Like every list item they start with the next and previous pointers (82D21DA0 unlinks a triangle).
//  - Vertex: the position is at +0x10 (82D2A8A0, 82D2A940, 82D28C88's copy of 82D1F788); PrismPolicy's
//    callback (82D2A9B8) clears the real at +0x3C of the vertices of two overlapping triangles.
//  - Triangle: the three vertices are at +0x8; 82D21DA0 clears the three links at +0x14, each the address of
//    the neighbouring triangle with the index of its side in the low two bits; +0x20 is a vector that
//    CollideShapeTriangle's callback (82D2D050) passes as the direction to getSupportingVertex, taken to be the
//    plane; +0x40 is the triangle's leaf in hkgpMesh's tree, 0x7FFFFFFF when it has none (82D22698).
// The other members are not known. The member names are guesses. Nothing in the game is known to use Edge:
// it is declared like the triangulator's.
#ifndef HAVOK_HKGPMESHBASE_H
#define HAVOK_HKGPMESHBASE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkgpAbstractMesh.h"

extern "C" {
void fn_82D2B8D8(void *self);   // the vertex and triangle lists' reset
void fn_82D2C2D0(void *self);   // the vertex and triangle pool allocators' destructor
}

class hkgpMeshBase {
public:
    struct Triangle;

    struct Edge {
        Triangle *m_triangle;   // +0x0
        hkUint32 m_index;       // +0x4
    };

    struct Vertex {
        Vertex *m_next;              // +0x0
        Vertex *m_prev;              // +0x4
        hkUint32 m_unknown8[2];      // +0x8
        hkVector4 m_position;        // +0x10
        hkUint8 m_unknown20[0x1C];   // +0x20
        hkReal m_unknown3C;          // +0x3C
        hkUint8 m_unknown40[0x10];   // +0x40
    };

    struct Triangle {
        Triangle *m_next;            // +0x0
        Triangle *m_prev;            // +0x4
        Vertex *m_vertices[3];       // +0x8
        hkUlong m_links[3];          // +0x14
        hkVector4 m_plane;           // +0x20
        hkUlong m_leaf;              // +0x40
        hkUint8 m_unknown44[0xC];    // +0x44
    };
};

// The out-of-line list and allocator functions (see hkgpAbstractMesh.h).
template <>
inline void hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex, hkContainerHeapAllocator>::reset()
{
    fn_82D2B8D8(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex, 32, hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D2C2D0(this);
}

template <>
inline void hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Triangle, hkContainerHeapAllocator>::reset()
{
    fn_82D2B8D8(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Triangle, 32, hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D2C2D0(this);
}

#endif
