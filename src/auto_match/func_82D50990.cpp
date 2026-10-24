#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4]; unsigned int u[4];
} __vector4;
class hkVector4 { public: __vector4 m_quad; HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; } };
class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape() : hkpShape((hkpShapeType)13) {}
    virtual void slot2c();
    virtual void slot30();
};
class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    virtual float getHeightAt(int x, int z) const;
    virtual hkBool getTriangleFlip() const;
    int m_xRes, m_zRes;
    float m_heightCenter;
    char pad1c; hkBool m_useProjectionBasedHeight; char pad1e[2];
    hkVector4 m_intToFloatScale, m_floatToIntScale, m_floatToIntOffsetFloorCorrected, m_extents;
};
extern "C" void fn_82CE6310(hkMemoryAllocator *, void *, int, int);
class hkpStorageSampledHeightFieldShape : public hkpSampledHeightFieldShape {
public:
    HK_FORCE_INLINE hkpStorageSampledHeightFieldShape(const hkpSampledHeightFieldShape *src);
    hkArray<float> m_storage;
    hkBool m_triangleFlip;
};
HK_FORCE_INLINE hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape(const hkpSampledHeightFieldShape *src)
{
    m_useProjectionBasedHeight = false;
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
        fn_82CE6310(&alloc, &a, cap, sizeof(float));
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
