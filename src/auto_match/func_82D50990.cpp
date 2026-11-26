// hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape(const hkpSampledHeightFieldShape *)
// (Physics/Collide/Shape/HeightField/StorageSampledHeightField/hkpStorageSampledHeightFieldShape.cpp): copies the
// other height field's members and samples. In the game it is known only as fn_82D50990; the header declares the
// constructor and it is defined here, HK_FORCE_INLINE, inside the extern "C" function.
#include "havok/hkpStorageSampledHeightFieldShape.h"

HK_FORCE_INLINE hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape(const hkpSampledHeightFieldShape *src)
{
    m_heightfieldType = HEIGHTFIELD_STORAGE;
    m_xRes = src->m_xRes;
    m_zRes = src->m_zRes;
    hkBool flip = src->getTriangleFlip();
    m_triangleFlip = flip;
    int n = m_zRes * m_xRes;
    m_heightCenter = src->m_heightCenter;
    m_intToFloatScale = src->m_intToFloatScale;
    m_floatToIntScale = src->m_floatToIntScale;
    m_floatToIntOffsetFloorCorrected = src->m_floatToIntOffsetFloorCorrected;
    m_extents = src->m_extents;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    hkArrayBase<float> &a = m_storage;
    if (a.getCapacity() < n) {
        int cap;
        if(n < a.getCapacity() * 2) cap = a.getCapacity() * 2; else cap = n;
        hkArrayUtil::_reserve(alloc, &a, cap, sizeof(float));
    }
    a.m_size = n;
    for (int z = 0; z < m_zRes; ++z) {
        for (int x = 0; x < m_xRes; ++x) {
            float h = src->getHeightAt(x,z);
            m_storage.m_data[z * m_xRes + x] = h;
        }
    }
}
extern "C" hkpStorageSampledHeightFieldShape *fn_82D50990(hkpStorageSampledHeightFieldShape *self, const hkpSampledHeightFieldShape *src)
{
    self->hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape(src);
    return self;
}
