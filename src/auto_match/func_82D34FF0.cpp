// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::hkAabbTree() (Common/Internal/Collide/Tree/AabbTree);
// keeps its fn_ name.
//
// Layout (0x80 bytes): the vector members make the class 16-byte aligned, so the members after the
// vtable (one slot, the deleting destructor) start at +0x10:
//   +0x10 hkUint32 m_root, +0x14 IDXTYPE m_firstFree (0x7fffffff = none), +0x18 int m_numLeaves,
//   +0x1c Storage { hkArray<Node> m_nodes; hkArray<IDXTYPE> m_freeList; }, whose destructor is out of
//         line (fn_82D1E718 here, element sizes 0x30 and 4; fn_82D34F48 for the 16-bit tree),
//   +0x40 m_offsetLow, +0x50 m_offsetHigh, +0x60 m_scale, +0x70 m_invScale.
// The storage's implicit constructor stores each array's capacity first and leaves a dead
// `addi rX, this, 0x1c`. clear() (fn_82D34CA8) resets the sizes and the three scalars.
//
// The offsets are read from the zero vector lbl_8323B1A0 (.data, reloaded after each store). The
// scale and inverse scale are two separate vector literals (1,1,1,0): one load of the compiler's
// constant, then a vmr copy. lbl_821CE8A0 is that constant, renamed to its __vmx@ name.
// Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

extern "C" hkQuadReal lbl_8323B1A0;   // zero vector

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

    HK_FORCE_INLINE hkAabbTree()
    {
        m_offsetLow.m_quad = lbl_8323B1A0;
        m_offsetHigh.m_quad = lbl_8323B1A0;
        hkQuadReal scale = { 1.0f, 1.0f, 1.0f, 0.0f };
        hkQuadReal invScale = { 1.0f, 1.0f, 1.0f, 0.0f };
        m_scale.m_quad = scale;
        m_invScale.m_quad = invScale;
        m_root = 0;
        m_numLeaves = 0;
        m_firstFree = IDXTYPE(0x7fffffff);
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

typedef hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32> hkAabbTree32;

extern "C" hkAabbTree32 *fn_82D34FF0(hkAabbTree32 *self)
{
    self->hkAabbTree::hkAabbTree();
    return self;
}
