// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::hkAabbTree(const hkVector4 &, const hkVector4 &,
// const hkVector4 &) (Common/Internal/Collide/Tree/AabbTree); keeps its fn_ name.
//
// Layout (0x80 bytes): the vector members make the class 16-byte aligned, so the members after the
// vtable (one slot, the deleting destructor fn_82D35270) start at +0x10:
//   +0x10 hkUint32 m_root, +0x14 IDXTYPE m_firstFree (0x7fff = none), +0x18 int m_numLeaves,
//   +0x1c Storage { hkArray<Node> m_nodes; hkArray<IDXTYPE> m_freeList; }, whose destructor is out of
//         line (fn_82D34F48, element sizes 0x14 and 2),
//   +0x40 m_offsetLow, +0x50 m_offsetHigh, +0x60 m_scale, +0x70 m_invScale.
// The storage's implicit constructor stores each array's capacity first and leaves a dead
// `addi rX, this, 0x1c`; two plain hkArray members store data, size, capacity in order.
//
// The inverse scale is the reciprocal (vrefp + one Newton-Raphson step) of the scale with w set to 1,
// both taken from lbl_82132D10, the (1,1,1,1) entry of Havok's vector constant table.
// Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" __vector4 __vrefp(__vector4);
extern "C" __vector4 __vnmsubfp(__vector4, __vector4, __vector4);
extern "C" __vector4 __vmaddfp(__vector4, __vector4, __vector4);
extern "C" __vector4 __vrlimi(__vector4, __vector4, unsigned int, unsigned int);

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

extern "C" const hkQuadReal lbl_82132D10;   // (1,1,1,1)

namespace hkAabbTreeData {
struct hkAabbTreeAabb {
    char m_data[0x30];
};
struct hkAabbTreeAabb16 {
    char m_data[0x14];
};
}

template <typename BOUNDING_VOLUME, typename IDXTYPE>
class hkAabbTree {
public:
    struct Storage {
        hkArray<BOUNDING_VOLUME> m_nodes;
        hkArray<IDXTYPE> m_freeList;
    };

    HK_FORCE_INLINE hkAabbTree(const hkVector4 &offsetLow, const hkVector4 &offsetHigh, const hkVector4 &scale)
    {
        m_offsetLow = offsetLow;
        m_offsetHigh = offsetHigh;
        m_scale = scale;
        hkQuadReal s = __vrlimi(scale.m_quad, lbl_82132D10, 1, 0);
        hkQuadReal r = __vrefp(s);
        m_invScale.m_quad = __vmaddfp(__vnmsubfp(r, s, lbl_82132D10), r, r);
        m_root = 0;
        m_numLeaves = 0;
        m_firstFree = IDXTYPE(0x7fff);
    }
    virtual ~hkAabbTree();

    hkUint32 m_root;          // +0x10
    IDXTYPE m_firstFree;      // +0x14
    int m_numLeaves;          // +0x18
    Storage m_storage;        // +0x1c
    hkVector4 m_offsetLow;    // +0x40
    hkVector4 m_offsetHigh;   // +0x50
    hkVector4 m_scale;        // +0x60
    hkVector4 m_invScale;     // +0x70
};

typedef hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16> hkAabbTree16;

extern "C" hkAabbTree16 *fn_82D35080(hkAabbTree16 *self, const hkVector4 &offsetLow, const hkVector4 &offsetHigh,
                                     const hkVector4 &scale)
{
    self->hkAabbTree::hkAabbTree(offsetLow, offsetHigh, scale);
    return self;
}
