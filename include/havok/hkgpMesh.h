// hkgpMesh (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h, .inl and .cpp: the paths are in the game's
// assert strings), 0x7E0 bytes, 16-byte aligned: a triangle mesh with a triangulator and an AABB tree over
// its triangles, and the convex shapes and tree collectors its queries use.
// RTTI: hkgpMesh -> hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator> ->
// hkReferencedObject; its vtable (??_7hkgpMesh@@6B@) adds nothing to hkReferencedObject's three slots. The
// nested classes' names and whether each is a class or a struct are the RTTI's too.
//
// The layout is the game's:
//  - the constructor (82D27D00, out of line) builds the base mesh, the
//    triangulator at +0x40, the tree at +0x720 (through its out-of-line constructor) and two empty arrays at
//    +0x7A0 and +0x7AC, then stores 1e-10f at +0x7D4, 0 at +0x38, 0.0f at +0x7DC, 0 at +0x7B8 and
//    sqrt(3) * 2.5e-11f * 2 at +0x7D8, and calls reset;
//  - reset (82D27C70) deletes the object at +0x7B8 through its vtable, resets the triangulator, copies a
//    constant vector to +0x7C0, resets the two lists and clears the byte at +0x7D0;
//  - the destructor (82D27E90) calls reset, then destroys the two arrays of 16-byte items, the tree and the
//    triangulator;
//  - +0x38 is the convex overlap interface: 82D229F0, 82D22B50 and 82D1F608 call its second slot with two
//    convex shapes, and 82D1F490 and 82D1F558 hand it to a CollideShapeTriangle;
//  - +0x7B8 is an hkgpConvexHull: 82D1EA60 passes it to one of hkgpConvexHull's functions (82D0B6F0).
// What the arrays, the vector and the reals at the end hold is not known; m_convexOverlap, m_trianglesTree
// and m_convexHull are named by their use, not after Havok.
//
// The interfaces:
//  - IConvexOverlap::IConvexShape has no base class and its deleting destructor (82D1E840) frees through the
//    global operator delete. Its vtable has three more slots: 82D2A660, which asserts "Not implemented" and
//    returns 0 (ConvexHullShape's, 82D2A6E8, returns the hull's number of vertices); a pure one that takes a
//    direction and writes a vertex (TriangleShape's, 82D2A8A0, writes the triangle's vertex furthest along the
//    direction, with 0.5 or'ed with the vertex's index in w); and a pure one that returns a box by value
//    (TriangleShape's, 82D2A940; ExtrudeShape's, 82D2CF18, asserts "Unsupported operation" and returns an empty
//    box). The two pure slots are plain virtual functions here so that a unit can construct a subclass without
//    declaring them, as hkpConstraintData.h does. The slots' names follow Havok's header.
//  - IConvexOverlap has no vtable in the game's symbols. Its second slot returns the distance of two shapes
//    (the callers compare it with a tolerance; the third argument is a byte) and its third slot whether two
//    shapes overlap within a real (82D2A9B8). Its first slot is taken to be the destructor, like IConvexShape's;
//    nothing is seen to call it. The slots' names are guesses.
// TriangleShape, ConvexHullShape and PrismShape<1> (8 bytes each) share one deleting destructor (82D2A7D8), which
// frees 8 bytes through Havok's non-virtual class allocator. ExtrudeShape (0x80 bytes) has an out-of-line
// implicit destructor (82D2CFE0) and its own deleting destructor (82D2E610), whose operator delete tests the
// pointer; CollideShapeTriangle's callback (82D2D050) builds one on the stack: an in-place array of two
// 0x30-byte items at +0x10 that 82D1D8F0 fills from the six corners of the extruded triangle.
// The collectors' members are named by what their callbacks do with them (WeldingPolicy: 82D2A840,
// CollideShapeTriangle: 82D2D050, PrismPolicy: 82D2A9B8, NearestFeaturePolicy: 82D2A740).
#ifndef HAVOK_HKGPMESH_H
#define HAVOK_HKGPMESH_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkAabb.h"
#include "havok/hkAabbTreeQueryUtils.h"
#include "havok/hkgpMeshBase.h"
#include "havok/hkgpTriangulator.h"

class hkgpConvexHull;

extern "C" void fn_82D27C70(void *self);   // hkgpMesh::reset

class hkgpMesh : public hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle,
                                         hkContainerHeapAllocator> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

    typedef hkgpMeshBase::Edge Edge;
    typedef hkgpMeshBase::Vertex Vertex;
    typedef hkgpMeshBase::Triangle Triangle;
    typedef hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32> TrianglesTree;
    typedef hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int> TreeQueries;

    class IConvexOverlap {
    public:
        class IConvexShape {
        public:
            static void operator delete(void *p) { fn_8265CA20(p); }
            virtual ~IConvexShape() {}
            virtual int getMaxIndex() const;                                                      // +0x4
            virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // +0x8, pure
            virtual hkAabb getBoundingBox() const;                                                // +0xC, pure
        };

        virtual ~IConvexOverlap() {}
        virtual hkReal distance(const IConvexShape *a, const IConvexShape *b, bool flag) const;        // +0x4
        virtual bool overlap(const IConvexShape &a, const IConvexShape &b, hkReal tolerance) const;    // +0x8
    };

    struct TriangleShape : public IConvexOverlap::IConvexShape {
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, TriangleShape);
        HK_FORCE_INLINE TriangleShape(Triangle *triangle) : m_triangle(triangle) {}
        virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // 82D2A8A0
        virtual hkAabb getBoundingBox() const;                                                // 82D2A940

        Triangle *m_triangle;   // +0x4
    };

    struct ConvexHullShape : public IConvexOverlap::IConvexShape {
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, ConvexHullShape);
        ConvexHullShape(const hkgpConvexHull *hull) : m_hull(hull) {}
        virtual int getMaxIndex() const;                                                      // 82D2A6E8
        virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // 82D2A6F0
        virtual hkAabb getBoundingBox() const;                                                // 82D2A6F8

        const hkgpConvexHull *m_hull;   // +0x4
    };

    // The game has PrismShape<1> only; what the argument selects is not known.
    template <int N>
    class PrismShape : public IConvexOverlap::IConvexShape {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, PrismShape);
        PrismShape(Triangle *triangle) : m_triangle(triangle) {}
        virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // 82D2AB18
        virtual hkAabb getBoundingBox() const;                                                // 82D2AC18

        Triangle *m_triangle;   // +0x4
    };

    class ExtrudeShape : public IConvexOverlap::IConvexShape {
    public:
        // Havok's non-virtual class allocator with a null test in operator delete (82D2E610).
        HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t nbytes)
        {
            return hkMemoryRouter::getInstance().heap().blockAlloc(static_cast<int>(nbytes));
        }
        HK_FORCE_INLINE void HK_CALL operator delete(void *p)
        {
            if (p)
                hkMemoryRouter::getInstance().heap().blockFree(p, sizeof(ExtrudeShape));
        }
        HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; }
        HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}

        // 0x30 bytes; what the three vectors are is not known.
        struct Plane {
            hkVector4 m_v[3];
        };

        ExtrudeShape() {}
        virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // 82D2CF10
        virtual hkAabb getBoundingBox() const;                                                // 82D2CF18

        hkInplaceArray<Plane, 2> m_planes;   // +0x10 (the storage at +0x20)
    };

    // Finds a leaf whose box is centred within a radius of a point: 0x30 bytes.
    struct WeldingPolicy : public TreeQueries::Collector {
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, WeldingPolicy);
        virtual hkReal processLeaf(const TreeQueries::Node *leaf);   // 82D2A840

        hkVector4 m_center;        // +0x10
        hkReal m_radiusSquared;    // +0x20
        hkUlong m_hit;             // +0x24, the leaf's data
    };

    // Collides a convex shape with the triangles the query reports: 0x20 bytes. For each triangle the callback
    // takes the distance from m_overlap (of m_shape and the triangle, or the triangle extruded along its
    // plane when m_extrude is set), keeps the least and the greatest, and when the distance is below the
    // tolerance adds it to m_sum, sets m_hit and stops the query unless m_all is set.
    struct CollideShapeTriangle : public TreeQueries::Collector {
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, CollideShapeTriangle);
        HK_FORCE_INLINE CollideShapeTriangle(const IConvexOverlap *overlap, const IConvexOverlap::IConvexShape *shape,
                                             hkReal tolerance, bool flag, bool all, bool extrude)
            : m_overlap(overlap), m_shape(shape)
        {
            m_minDistance = 3.40282e+38f;
            m_hit = false;
            m_maxDistance = -3.40282e+38f;
            m_extrude = extrude;
            m_sum = 0.0f;
            m_tolerance = tolerance;
            m_flag = flag;
            m_all = all;
        }
        virtual hkReal processLeaf(const TreeQueries::Node *leaf);   // 82D2D050

        hkReal m_tolerance;                              // +0x4
        const IConvexOverlap *m_overlap;                 // +0x8
        const IConvexOverlap::IConvexShape *m_shape;     // +0xC
        hkReal m_sum;                                    // +0x10
        hkReal m_minDistance;                            // +0x14
        hkReal m_maxDistance;                            // +0x18
        bool m_all;                                      // +0x1C
        bool m_hit;                                      // +0x1D
        bool m_flag;                                     // +0x1E, the third argument of IConvexOverlap::distance
        bool m_extrude;                                  // +0x1F
    };

    // Finds the triangle nearest to a point: 0x60 bytes (its deleting destructor, 82D2B180, frees that much).
    // RTTI: ClosestPointCollector, then Collector. For each leaf the callback (82D2A740) takes the distance of
    // m_point to the leaf's triangle from fn_82D1CE60 and, when it is less than m_closestDistance, keeps it,
    // the triangle and the two vectors fn_82D1CE60 gave (what they are is not known).
    struct NearestFeaturePolicy : public TreeQueries::ClosestPointCollector {
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, NearestFeaturePolicy);
        virtual hkReal processLeaf(const TreeQueries::Node *leaf);   // 82D2A740

        hkVector4 m_resultA;     // +0x30
        hkVector4 m_resultB;     // +0x40
        Triangle *m_triangle;    // +0x50
    };

    // Tests the pairs of triangles a tree-against-tree query reports as prisms: 0x10 bytes. Its vtable has
    // TreeTreeCollector's deleting destructor. The callback (82D2A9B8) returns 1 for two triangles that share
    // a vertex and 0 otherwise.
    struct PrismPolicy : public TreeQueries::TreeTreeCollector {
        virtual hkBool32 processPair(const TreeQueries::Node *a, const TreeQueries::Node *b);

        int m_numPairs;                     // +0x4
        int m_numTests;                     // +0x8
        const IConvexOverlap *m_overlap;    // +0xC
    };

    hkgpMesh();   // out of line (82D27D00)
    virtual ~hkgpMesh();   // out of line (82D27E90)

    // Out of line in the game and known only under its fn_ name.
    HK_FORCE_INLINE void reset() { fn_82D27C70(this); }

    IConvexOverlap *m_convexOverlap;     // +0x38
    hkgpTriangulator m_triangulator;     // +0x40
    TrianglesTree m_trianglesTree;       // +0x720
    hkArray<hkVector4> m_unknown7A0;     // +0x7A0
    hkArray<hkVector4> m_unknown7AC;     // +0x7AC
    hkgpConvexHull *m_convexHull;        // +0x7B8
    hkVector4 m_unknown7C0;              // +0x7C0
    hkBool m_unknown7D0;                 // +0x7D0
    hkReal m_unknown7D4;                 // +0x7D4, 1e-10f
    hkReal m_unknown7D8;                 // +0x7D8, sqrt(3) * 2.5e-11f * 2
    hkReal m_unknown7DC;                 // +0x7DC, 0
};

#endif
