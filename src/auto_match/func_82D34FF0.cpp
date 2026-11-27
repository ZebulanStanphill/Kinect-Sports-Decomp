// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::hkAabbTree() (Common/Internal/Collide/Tree/AabbTree),
// the 32-bit tree's default constructor, out of line in the game. hkgpMesh's constructor (82D27D00) calls it
// for its triangle tree. The class is havok/hkAabbTree.h.
//
// The node storage's implicit constructor (two hkArrayBase members) stores each array's capacity first and
// leaves a dead `addi rX, this, 0x1c`. The offsets are read from the zero vector lbl_8323B1A0 (.data,
// reloaded after each store). The scale and inverse scale are two separate vector literals (1,1,1,0): one
// load of the compiler's constant, then a vmr copy. lbl_821CE8A0 is that constant, renamed to its __vmx@ name.
// Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkAabbTree.h"

extern "C" hkQuadReal lbl_8323B1A0;   // zero vector

template <>
hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::hkAabbTree()
{
    m_offsetLow.m_quad = lbl_8323B1A0;
    m_offsetHigh.m_quad = lbl_8323B1A0;
    hkQuadReal scale = { 1.0f, 1.0f, 1.0f, 0.0f };
    hkQuadReal invScale = { 1.0f, 1.0f, 1.0f, 0.0f };
    m_scale.m_quad = scale;
    m_invScale.m_quad = invScale;
    m_root = HK_NULL;
    m_numLeaves = 0;
    m_firstFree = hkUint32(0x7fffffff);
}
