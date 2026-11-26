// hkpConvexListShape::setUseCachedAabb(bool useCachedAabb): stores the flag and, when it is set,
// caches the center and half extents of the union of the children's AABBs (identity transform,
// zero tolerance). Classes as in func_82D3DAC0.cpp.

#include "havok/hkpShape.h"
#include "havok/hkAabb.h"

struct ConvexListShape_82D48570 {
    char pad00[0x20];
    hkVector4 m_aabbHalfExtents;    // 0x20
    hkVector4 m_aabbCenter;         // 0x30
    bool m_useCachedAabb;           // 0x40
    hkpConvexShape **m_childShapes; // 0x44
    int m_numChildShapes;           // 0x48
};

extern "C" const hkTransform lbl_8323B1D0; // hkTransform::getIdentity()

extern "C" void fn_82D48570(ConvexListShape_82D48570 *self, bool useCachedAabb)
{
    self->m_useCachedAabb = useCachedAabb;
    if (useCachedAabb) {
        hkAabb aabb;
        aabb.m_min.setAll(3.40282e+38f);
        aabb.m_max.setAll(-3.40282e+38f);
        for (int i = 0; i < self->m_numChildShapes; i++) {
            hkAabb childAabb;
            self->m_childShapes[i]->getAabb(lbl_8323B1D0, 0.0f, childAabb);
            aabb.m_min.setMin4(aabb.m_min, childAabb.m_min);
            aabb.m_max.setMax4(aabb.m_max, childAabb.m_max);
        }
        hkVector4 sum;
        sum.setAdd4(aabb.m_min, aabb.m_max);
        self->m_aabbCenter.setMul4(hkVector4::getHalf(), sum);
        hkVector4 extent;
        extent.setSub4(aabb.m_max, aabb.m_min);
        self->m_aabbHalfExtents.setMul4(hkVector4::getHalf(), extent);
    }
}
