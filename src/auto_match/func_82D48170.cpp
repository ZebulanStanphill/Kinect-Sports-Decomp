// hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldShape *)
// (Physics/Collide/Shape/HeightField/CompressedSampledHeightField/hkpCompressedSampledHeightFieldShape.cpp), /O2 /QVMXReserve.
// HK_REAL_MAX and -HK_REAL_MAX are lbl_82134508/lbl_82134504 (Matching units reference them, so they keep
// their names); 1.0f / 65535.0f is a literal (the rename map names the game's copy __real@37800080).
// The array is reached through a local reference, which places the address computation as in the original.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

extern "C" double __fsel(double a, double b, double c);
extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve
extern "C" const float lbl_82134508;   // HK_REAL_MAX
extern "C" const float lbl_82134504;   // -HK_REAL_MAX

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __vector4 m_quad;
};

struct hkMath {
    static HK_FORCE_INLINE hkReal HK_CALL min2(hkReal x, hkReal y) { return hkReal(__fsel(x - y, y, x)); }
    static HK_FORCE_INLINE hkReal HK_CALL max2(hkReal x, hkReal y) { return hkReal(__fsel(x - y, x, y)); }
};

template <typename T>
static HK_FORCE_INLINE void _reserve(hkArrayBase<T> &self, hkMemoryAllocator &alloc, int n)
{
    const int capacity = self.getCapacity();
    if (capacity < n) {
        int cap2 = 2 * capacity;
        int newSize = (n < cap2) ? cap2 : n;
        fn_82CE6310(&alloc, &self, newSize, sizeof(T));
    }
}

template <typename T>
static HK_FORCE_INLINE void setSize(hkArray<T> &self, int n)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&self);
    _reserve(self, alloc, n);
    self.m_size = n;
}

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkpShapeType type) : hkpShape(type) {}
    virtual void collideSpheres(const void *input, void *outputArray) const;   // +0x2C
    virtual void castSphere(const void *input, const hkpCdBody &cdBody, hkpRayHitCollector &collector) const;   // +0x30
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    enum HeightFieldType {
        HEIGHTFIELD_STORAGE = 0,
        HEIGHTFIELD_COMPRESSED = 1,
        HEIGHTFIELD_USER = 2,
        HEIGHTFIELD_MAX_ID = 3
    };
    hkpSampledHeightFieldShape() : hkpHeightFieldShape(hkpShapeType(13)) {}

    HK_FORCE_INLINE hkReal getHeightAt(int x, int z) const { return getHeightAtImpl(x, z); }
    HK_FORCE_INLINE hkBool getTriangleFlip() const { return getTriangleFlipImpl(); }

    virtual hkReal getHeightAtImpl(int x, int z) const;   // +0x34
    virtual hkBool getTriangleFlipImpl() const;           // +0x38

    int m_xRes;                                  // +0x10
    int m_zRes;                                  // +0x14
    hkReal m_heightCenter;                       // +0x18
    hkBool m_useProjectionBasedHeight;           // +0x1C
    hkUint8 m_heightfieldType;                   // +0x1D
    hkVector4 m_intToFloatScale;                 // +0x20
    hkVector4 m_floatToIntScale;                 // +0x30
    hkVector4 m_floatToIntOffsetFloorCorrected;  // +0x40
    hkVector4 m_extents;                         // +0x50
};

class hkpCompressedSampledHeightFieldShape : public hkpSampledHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldShape *hf);

    virtual hkReal getHeightAtImpl(int x, int z) const;
    virtual hkBool getTriangleFlipImpl() const;

    hkArray<hkUint16> m_storage;   // +0x60
    hkBool m_triangleFlip;         // +0x6C
    hkReal m_offset;               // +0x70
    hkReal m_scale;                // +0x74
};

hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldShape *hf)
{
    m_heightfieldType = HEIGHTFIELD_COMPRESSED;
    m_xRes = hf->m_xRes;
    m_zRes = hf->m_zRes;
    m_triangleFlip = hf->getTriangleFlip();
    m_heightCenter = hf->m_heightCenter;
    m_intToFloatScale = hf->m_intToFloatScale;
    m_floatToIntScale = hf->m_floatToIntScale;
    m_floatToIntOffsetFloorCorrected = hf->m_floatToIntOffsetFloorCorrected;
    m_extents = hf->m_extents;

    hkArray<hkUint16> &storage = m_storage;
    setSize(storage, m_xRes * m_zRes);

    hkReal maxv = lbl_82134504;
    hkReal minv = lbl_82134508;
    for (int z = 0; z < m_zRes; z++) {
        for (int x = 0; x < m_xRes; x++) {
            hkReal h = hf->getHeightAt(x, z);
            minv = hkMath::min2(h, minv);
            maxv = hkMath::max2(h, maxv);
        }
    }
    m_offset = minv;
    m_scale = (maxv - minv) * (1.0f / 65535.0f);

    for (int z = 0; z < m_zRes; z++) {
        for (int x = 0; x < m_xRes; x++) {
            hkReal h = hf->getHeightAt(x, z);
            storage[z * m_xRes + x] = hkUint16((h - m_offset) / m_scale);
        }
    }
}
