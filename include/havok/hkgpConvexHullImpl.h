// hkgpConvexHullImpl (Common/Internal/GeometryProcessing/ConvexHull), 0x1C0 bytes, 16-byte aligned: the
// implementation behind hkgpConvexHull, which allocates it with Havok's non-virtual class allocator (82D0D6E8
// allocates and 82D0D640 frees 0x1C0 bytes). It has no vtable; the game's symbols name it only as the scope of
// the three types its mesh is instantiated with (structs).
//
// The layout is the game's:
//  - the constructor (82D16868, out of line and known only under that name) builds a BuildConfig at +0x0, the
//    mesh at +0x10 and three empty arrays at +0x48, +0x54 and +0x60, takes the hull's id from a global counter
//    (lbl_8323B6AC, interlocked) and calls reset(false);
//  - the destructor (82D16300, out of line and known only under that name) calls reset(false) and destroys
//    the three arrays, with items of 0x30, 0x10 and 0x40 bytes, and the mesh (82D14010);
//  - the reset function (82D14080) resets the mesh's two lists, empties the three arrays, clears the two
//    flags at +0x1B4 and +0x1B5, sets the dimension at +0x1A8 to -1 and the two reals at +0x1A0 to 0, and
//    restores the default configuration unless its argument is set;
//  - hkgpConvexHull's accessors read the rest: the dimension (82D0B1D8); the volume at +0x1A0 (82D0B6F8),
//    the surface area at +0x1A4 (82D0B7C0), the centre of mass at +0x150 (82D0BAA8) and the inertia at +0x170
//    (82D0B9E0), which assert "No mass properties available" with the id when the byte at +0x1B4 is clear;
//    the size of the array at +0x54 (82D0B2B0) and its items (82D0B378), which assert "No index available"
//    when the byte at +0x1B5 is clear; 82D0B8E8 copies the four vectors from +0x120 and the one at +0x160.
// A vertex is 0x40 bytes and a triangle 0x48 (the pools are 0x808 and 0x908 bytes, see
// hkGeometryProcessing.h); like every list item they start with the next and previous pointers, and a
// vertex has its position at +0x10 (82D0C930). The rest of them, the bytes from +0x6C to +0x120 and the
// items of the arrays at +0x48 and +0x60 are not known. The member names are guesses.
#ifndef HAVOK_HKGPCONVEXHULLIMPL_H
#define HAVOK_HKGPCONVEXHULLIMPL_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkMatrix3.h"
#include "havok/hkgpAbstractMesh.h"
#include "havok/hkgpConvexHull.h"

extern "C" {
void fn_82D14080(void *self, int keepConfig);   // hkgpConvexHullImpl::reset
void fn_82D132A0(void *self);                   // the vertex list's reset
void fn_82D13EA0(void *self);                   // the vertex pool allocator's destructor
void fn_82D13318(void *self);                   // the triangle list's reset
void fn_82D13F58(void *self);                   // the triangle pool allocator's destructor
}

class hkgpConvexHullImpl {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES, hkgpConvexHullImpl);

    struct Triangle;

    // Nothing in the game is known to use Edge: it is declared like the triangulator's.
    struct Edge {
        Triangle *m_triangle;   // +0x0
        hkUint32 m_index;       // +0x4
    };

    struct Vertex {
        Vertex *m_next;              // +0x0
        Vertex *m_prev;              // +0x4
        hkUint32 m_unknown8[2];      // +0x8
        hkVector4 m_position;        // +0x10
        hkUint8 m_unknown20[0x20];   // +0x20
    };

    struct Triangle {
        Triangle *m_next;            // +0x0
        Triangle *m_prev;            // +0x4
        hkUint8 m_unknown8[0x40];    // +0x8
    };

    typedef hkgpAbstractMesh<Edge, Vertex, Triangle, hkContainerHeapAllocator> Mesh;

    struct Item40 {
        hkUint32 m_unknown[16];
    };
    struct Item30 {
        hkUint32 m_unknown[12];
    };

    hkgpConvexHullImpl();    // out of line (82D16868)
    ~hkgpConvexHullImpl();   // out of line (82D16300)

    // Out of line in the game and known only under its fn_ name.
    HK_FORCE_INLINE void reset(int keepConfig) { fn_82D14080(this, keepConfig); }

    hkgpConvexHull::BuildConfig m_config;   // +0x0
    Mesh m_mesh;                            // +0x10
    hkArray<Item40> m_unknown48;            // +0x48
    hkArray<hkVector4> m_indexed;           // +0x54
    hkArray<Item30> m_unknown60;            // +0x60
    hkUint8 m_unknown6C[0xB4];              // +0x6C
    hkVector4 m_unknown120[3];              // +0x120
    hkVector4 m_centerOfMass;               // +0x150
    hkVector4 m_unknown160;                 // +0x160
    hkMatrix3 m_inertia;                    // +0x170
    hkReal m_volume;                        // +0x1A0
    hkReal m_surfaceArea;                   // +0x1A4
    int m_dimensions;                       // +0x1A8, -1 after a reset
    hkUint32 m_unknown1AC;                  // +0x1AC
    long m_uid;                             // +0x1B0
    hkBool m_hasMassProperties;             // +0x1B4
    hkBool m_hasIndexing;                   // +0x1B5
};

// The out-of-line list and allocator functions (see hkgpAbstractMesh.h).
template <>
inline void hkgpAbstractMeshDefinitions::List<hkgpConvexHullImpl::Vertex, hkContainerHeapAllocator>::reset()
{
    fn_82D132A0(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpConvexHullImpl::Vertex, 32, hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D13EA0(this);
}

template <>
inline void hkgpAbstractMeshDefinitions::List<hkgpConvexHullImpl::Triangle, hkContainerHeapAllocator>::reset()
{
    fn_82D13318(this);
}

template <>
inline hkGeometryProcessing::PoolAllocator<hkgpConvexHullImpl::Triangle, 32,
                                           hkContainerHeapAllocator>::~PoolAllocator()
{
    fn_82D13F58(this);
}

#endif
