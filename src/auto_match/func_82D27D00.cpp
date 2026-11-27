// hkgpMesh::hkgpMesh() (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.cpp), over havok/hkgpMesh.h (merged with the hkgp
// set, which names it ??0hkgpMesh@@QAA@XZ). The triangle tree's constructor is out of line in the game
// (hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::hkAabbTree(), 82D34FF0), and the triangulator member's
// inline constructor sets its domain through the out-of-line fn_82D30F50 with two vector literals (__vmx@
// constants: the rename map names the game's two lbl_ vectors so). Float literals are materialized from the
// first constant object with that value the compiler has seen, so the configured lbl_ floats (2.5e-11f,
// 1e-10f) are defined (selectany) and used once in hkgpMesh_bindConstants first. 3.0f and 2.0f need no
// binding: symbols.txt names their constants __real@40400000 and __real@40000000, which is what a plain
// literal produces. The parentheses keep the multiplication by 2 at run time (without them the compiler folds
// 2.5e-11f * 2.0f).
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkBase.h"
#include "havok/hkMath.h"
#include "havok/hkgpMesh.h"

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

hkgpMesh::hkgpMesh()
{
    m_unknown7D4 = 1e-10f;
    m_convexOverlap = HK_NULL;
    m_unknown7DC = 0.0f;
    m_convexHull = HK_NULL;
    m_unknown7D8 = (hkMath::sqrt(3.0f) * 2.5e-11f) * 2.0f;
    reset();
}
