// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::hkAabbTree(const hkVector4 &, const hkVector4 &,
// const hkVector4 &) (Common/Internal/Collide/Tree/AabbTree), the 16-bit tree's constructor, out of line in
// the game: offset low, offset high and scale. hkpAabbTreeWorldManager's constructor (82DB16D0) calls it with
// three vectors of the broad phase. The class is havok/hkAabbTree.h.
//
// The node storage's implicit constructor (two hkArrayBase members) stores each array's capacity first and
// leaves a dead `addi rX, this, 0x1c`. The inverse scale is the reciprocal (vrefp + one Newton-Raphson step)
// of the scale with w set to 1, both taken from lbl_82132D10, the (1,1,1,1) entry of Havok's vector constant
// table. Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkAabbTree.h"

template <>
hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::hkAabbTree(const hkVector4 &offsetLow,
                                                                    const hkVector4 &offsetHigh,
                                                                    const hkVector4 &scale)
{
    m_offsetLow = offsetLow;
    m_offsetHigh = offsetHigh;
    m_scale = scale;
    hkQuadReal s = __vrlimi(scale.m_quad, lbl_82132D10, 1, 0);
    hkQuadReal r = __vrefp(s);
    m_invScale.m_quad = __vmaddfp(__vnmsubfp(r, s, lbl_82132D10), r, r);
    m_root = HK_NULL;
    m_numLeaves = 0;
    m_firstFree = hkUint16(0x7fff);
}
