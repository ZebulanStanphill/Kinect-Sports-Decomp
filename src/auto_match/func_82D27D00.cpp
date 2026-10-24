// hkgpMesh::hkgpMesh() (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.cpp). Keeps its fn_ name.
// Layouts follow the Matching destructor unit func_82D27E90. The default triangulator member's
// inline constructor sets its domain through the out-of-line fn_82D30F50 with two vector
// literals (__vmx@ constants: the rename map names the game's two lbl_ vectors so). Float
// literals are materialized from the first constant object with that value the compiler has
// seen, so the configured lbl_ floats (2.5e-11f, 1e-10f) are defined (selectany) and used
// once in hkgpMesh_bindConstants first. 3.0f and 2.0f need no binding: symbols.txt names their
// constants __real@40400000 and __real@40000000, which is what a plain literal produces. The
// parentheses keep the multiplication by 2 at run time (without them the compiler folds
// 2.5e-11f * 2.0f).
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" float __fsqrts(float);   // compiler intrinsic (fsqrts)

class hkVector4 {
public:
    HK_FORCE_INLINE void set(hkReal x, hkReal y, hkReal z, hkReal w = 0.0f) { hkQuadReal q = { x, y, z, w }; m_quad = q; }
    hkQuadReal m_quad;
};

struct hkMath {
    static HK_FORCE_INLINE hkReal sqrt(hkReal r) { return __fsqrts(r); }
};

extern "C" {
__declspec(selectany) extern const float lbl_82134B50 = 2.5e-11f;
__declspec(selectany) extern const float lbl_8209AA08 = 1e-10f;
}

// Makes the configured names the compiler's constant-pool entries for these values (see above).
void hkgpMesh_bindConstants(float *out)
{
    out[0] = lbl_82134B50;
    out[1] = lbl_8209AA08;
}

// hkgpAbstractMesh lists: an hkArray of block pointers, a free list, a used count and a list head.
template <typename T>
struct hkgpAbstractMeshList {
    HK_FORCE_INLINE hkgpAbstractMeshList() : m_firstFree(HK_NULL), m_numUsed(0) {}
    hkArray<void *> m_blocks;   // +0x0
    T *m_firstFree;             // +0xC
    int m_numUsed;              // +0x10
    T *m_used;                  // +0x14
};

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
class hkgpAbstractMesh : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkgpAbstractMesh() {}
    virtual ~hkgpAbstractMesh();

    hkgpAbstractMeshList<VERTEX> m_vertices;    // +0x8
    hkgpAbstractMeshList<TRIANGLE> m_triangles; // +0x20
};

class hkgpMeshBase {
public:
    struct Edge {
        hkUlong m_triangleAndIndex;
    };
    struct Vertex;
    struct Triangle;
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
class hkgpTriangulatorType;

// hkgpTriangulatorType<...>::reset(domainMin, domainMax, margin, clear) (out of line; parameter names guessed).
extern "C" void fn_82D30F50(void *self, const hkVector4 &domainMin, const hkVector4 &domainMax, hkReal margin, bool clear);

template <typename VERTEX, typename TRIANGLE, typename EDGEDATA, typename ALLOCATOR, int N>
class hkgpTriangulatorType : public hkgpTriangulatorBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    struct Edge {
        TRIANGLE *m_triangle;
        hkUint32 m_index;
    };
    struct Vertex;
    struct Triangle;

    HK_FORCE_INLINE hkgpTriangulatorType()
    {
        m_x24c = 0;
        hkVector4 dmin;
        dmin.set(-1.0f, -1.0f, 0.0f, 0.0f);
        hkVector4 dmax;
        dmax.set(1.0f, 1.0f, 0.0f, 0.0f);
        reset(dmin, dmax, 0.0f, true);
    }
    virtual ~hkgpTriangulatorType();
    HK_FORCE_INLINE void reset(const hkVector4 &domainMin, const hkVector4 &domainMax, hkReal margin, bool clear)
    {
        fn_82D30F50(this, domainMin, domainMax, margin, clear);
    }

    hkgpAbstractMesh<Edge, Vertex, Triangle, ALLOCATOR> m_mesh;   // +0x8
    hkInplaceArray<Edge, 64> m_stack;                             // +0x40
    int m_x24c;                                                   // +0x24C
    hkArray<void *> m_blocks;                                     // +0x250
    hkUint8 m_data2[0x6E0 - 0x25C];                               // +0x25C
};

typedef hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase,
                             hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,
                             hkContainerHeapAllocator, -1>
    hkgpTriangulator;

extern "C" void fn_82D34FF0(void *self);   // hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::hkAabbTree()
extern "C" void fn_82D27C70(void *self);   // hkgpMesh::reset

// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32> (0x80 bytes), whose constructor keeps its fn_ name.
struct __declspec(align(16)) hkgpMeshTree {
    HK_FORCE_INLINE hkgpMeshTree() { fn_82D34FF0(this); }
    hkUint8 m_data[0x80];
};

class hkgpMesh : public hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle,
                                         hkContainerHeapAllocator> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkgpMesh();
    virtual ~hkgpMesh();
    HK_FORCE_INLINE void reset() { fn_82D27C70(this); }

    hkUint32 m_x38;                       // +0x38
    hkUint32 m_x3c;                       // +0x3C
    hkgpTriangulator m_triangulator;      // +0x40
    hkgpMeshTree m_tree;                  // +0x720
    hkArray<hkVector4> m_arrayA;          // +0x7A0
    hkArray<hkVector4> m_arrayB;          // +0x7AC
    void *m_x7b8;                         // +0x7B8
    hkUint32 m_x7bc;                      // +0x7BC
    hkVector4 m_x7c0;                     // +0x7C0
    hkBool m_x7d0;                        // +0x7D0
    hkReal m_x7d4;                        // +0x7D4
    hkReal m_x7d8;                        // +0x7D8
    hkReal m_x7dc;                        // +0x7DC
};

HK_FORCE_INLINE hkgpMesh::hkgpMesh()
{
    m_x7d4 = 1e-10f;
    m_x38 = 0;
    m_x7dc = 0.0f;
    m_x7b8 = HK_NULL;
    m_x7d8 = (hkMath::sqrt(3.0f) * 2.5e-11f) * 2.0f;
    reset();
}

extern "C" hkgpMesh *fn_82D27D00(hkgpMesh *self)
{
    self->hkgpMesh::hkgpMesh();
    return self;
}
