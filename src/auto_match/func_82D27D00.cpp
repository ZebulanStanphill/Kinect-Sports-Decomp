// hkgpMesh::hkgpMesh() (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.cpp). Keeps its fn_ name.
// The class itself stays declared here: hkgpMesh.h has the tree as an hkAabbTree, whose constructor
// keeps its fn_ name (fn_82D34FF0), so the header's class would call it by its mangled name.
// The default triangulator member's
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
#include "havok/hkMath.h"
#include "havok/hkgpMeshBase.h"
#include "havok/hkgpTriangulator.h"

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
