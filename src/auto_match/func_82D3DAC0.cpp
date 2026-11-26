// hkpListShape::recalcAabbExtents(hkAabb &aabbOut): the union of the children's AABBs (identity
// transform, zero tolerance) into aabbOut, then the cached center and half extents from it.

#include "havok/hkAabb.h"
#include "havok/hkpShape.h"

struct hkpListShapeChildInfo {
    const hkpShape *m_shape;            // 0x00
    unsigned int m_collisionFilterInfo; // 0x04
    char pad08[8];
};

struct ListShape_82D3DAC0 {
    char pad00[0x18];
    hkpListShapeChildInfo *m_childInfo; // 0x18
    int m_numChildren;                  // 0x1c
    char pad20[0x10];
    hkVector4 m_aabbHalfExtents; // 0x30
    hkVector4 m_aabbCenter;      // 0x40
};

extern "C" const hkTransform lbl_8323B1D0; // hkTransform::getIdentity()

extern "C" void fn_82D3DAC0(ListShape_82D3DAC0 *self, hkAabb &aabbOut)
{
    self->m_childInfo[0].m_shape->getAabb(lbl_8323B1D0, 0.0f, aabbOut);
    for (int i = 1; i < self->m_numChildren; i++) {
        hkAabb childAabb;
        const hkpShape *shape = self->m_childInfo[i].m_shape;
        shape->getAabb(lbl_8323B1D0, 0.0f, childAabb);
        aabbOut.m_min.setMin4(aabbOut.m_min, childAabb.m_min);
        aabbOut.m_max.setMax4(aabbOut.m_max, childAabb.m_max);
    }
    hkVector4 sum;
    sum.setAdd4(aabbOut.m_min, aabbOut.m_max);
    self->m_aabbCenter.setMul4(hkVector4::getHalf(), sum);
    hkVector4 extent;
    extent.setSub4(aabbOut.m_max, aabbOut.m_min);
    self->m_aabbHalfExtents.setMul4(hkVector4::getHalf(), extent);
}
