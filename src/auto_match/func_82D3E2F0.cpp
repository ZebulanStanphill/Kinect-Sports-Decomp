#include "havok/hkAabb.h"
#include "havok/hkpShape.h"

extern "C" {

extern const __vector4 lbl_8323B1A0;   // cached-extents sentinel
extern const float lbl_82138458;       // HK_REAL_MAX / 2
}

struct ChildInfo_82D3E2F0 {
    const hkpShape *m_shape;
    char pad04[0xc];
};

struct ListShape_82D3E2F0 {
    char pad00[0x18];
    ChildInfo_82D3E2F0 *m_childInfo;   // 0x18
    int m_numChildren;                 // 0x1c
    char pad20[0x10];
    hkVector4 m_aabbHalfExtents;       // 0x30
};

extern "C" void fn_82D3DAC0(ListShape_82D3E2F0 *self, hkAabb &aabb);

extern "C" void fn_82D3E2F0(ListShape_82D3E2F0 *self, const hkTransform &localToWorld, float tolerance, hkAabb &out)
{
    hkVector4 sentinel;
    sentinel.m_quad = lbl_8323B1A0;
    if (self->m_aabbHalfExtents.compareLessThanEqual4(sentinel).allAreSet()) {
        hkAabb aabb;
        fn_82D3DAC0(self, aabb);
    }
    out.m_min.setAll(lbl_82138458);
    out.m_max.setNeg4(out.m_min);
    for (int i = 0; i < self->m_numChildren; i++) {
        hkAabb childAabb;
        const hkpShape *child = self->m_childInfo[i].m_shape;
        child->getAabb(localToWorld, tolerance, childAabb);
        out.m_min.setMin4(out.m_min, childAabb.m_min);
        out.m_max.setMax4(out.m_max, childAabb.m_max);
    }
}
