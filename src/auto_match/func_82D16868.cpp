// hkgpConvexHullImpl's constructor (Common/Internal/GeometryProcessing/ConvexHull), keeping its fn_ name
// (C units call it). Layout from its destructor fn_82D16300 and hkgpAbstractMesh's (fn_82D14010):
// a BuildConfig, the mesh at +0x10 (hkReferencedObject + two lists), three hkArrays, and a unique id
// taken from a global counter; the body then calls reset(false) (fn_82D14080).
#include "havok/hkBase.h"
extern "C" {
extern const float lbl_821344F4;
extern long lbl_8323B6AC;   // the id counter
long _InterlockedExchangeAdd(long *, long);
}

// hkgpAbstractMeshDefinitions::List: an hkArray of blocks, then the used-item list and its count.
template <typename T, typename ALLOCATOR> struct hkgpMeshList {
    HK_FORCE_INLINE hkgpMeshList() : m_used(0), m_numUsed(0) {}
    hkArray<void *, ALLOCATOR> m_blocks;
    T *m_used;
    int m_numUsed;
    int m_pad;
};

template <typename EDGE, typename VERTEX, typename TRIANGLE, typename ALLOCATOR>
class hkgpAbstractMesh : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkgpAbstractMesh() {}
    virtual ~hkgpAbstractMesh();   // out of line, fn_82D14010
    hkgpMeshList<VERTEX, ALLOCATOR> m_vertices;     // +0x8
    hkgpMeshList<TRIANGLE, ALLOCATOR> m_triangles;  // +0x20
};

struct Bytes48 { int a[12]; };
struct Bytes16 { int a[4]; };
struct Bytes64 { int a[16]; };

struct hkgpConvexHullImpl {
    struct Edge;
    struct Vertex;
    struct Triangle;
    typedef hkgpAbstractMesh<Edge, Vertex, Triangle, hkContainerHeapAllocator> Mesh;

    // hkgpConvexHull::BuildConfig defaults.
    struct BuildConfig {
        HK_FORCE_INLINE BuildConfig()
            : m_allowLowerDimensions(false), m_minCosAngle(lbl_821344F4), m_b8(false), m_b9(true), m_ba(false),
              m_bb(true), m_bc(false), m_bd(false) {}
        hkBool m_allowLowerDimensions;
        hkReal m_minCosAngle;
        hkBool m_b8, m_b9, m_ba, m_bb, m_bc, m_bd;
    };

    HK_FORCE_INLINE hkgpConvexHullImpl()
    {
        m_uid = _InterlockedExchangeAdd(&lbl_8323B6AC, 1);
        reset(false);
    }
    void reset(int keepConfig);

    BuildConfig m_config;        // +0x0
    Mesh m_mesh;                 // +0x10
    hkArray<Bytes64> m_a;        // +0x48
    hkArray<Bytes16> m_b;        // +0x54
    hkArray<Bytes48> m_c;        // +0x60
    char m_rest[0x1b0 - 0x6c];
    long m_uid;                  // +0x1b0
};

extern "C" void fn_82D14080(hkgpConvexHullImpl *self, int keepConfig);
inline void hkgpConvexHullImpl::reset(int keepConfig) { fn_82D14080(this, keepConfig); }

extern "C" hkgpConvexHullImpl *fn_82D16868(hkgpConvexHullImpl *self)
{
    self->hkgpConvexHullImpl::hkgpConvexHullImpl();
    return self;
}
