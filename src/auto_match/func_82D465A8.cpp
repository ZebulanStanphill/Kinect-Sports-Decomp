// hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &, int)
// (Physics/Collide/Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.cpp), /O2 /QVMXReserve.
// The name with an int second parameter is the one func_82D48058.cpp (Matching) already calls.
// m_heightfieldType is an hkEnum<HeightFieldType, hkUint8> constructed in the initialiser list: a plain
// hkUint8 member (initialiser or body) schedules its store before the base class stores.
// The game's 1.0f, -1.0f and 0.5f keep their lbl_ names (Matching units reference them): 1.0f is a
// static constant (it stays in f0 across the stores), the other two are selectany definitions (each
// gets its own lis; three statics would share one base register).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __lvlx(const void *, int);
float fn_8307F168();
}

static const float lbl_82002AE0 = 1.0f;
extern "C" __declspec(selectany) const float lbl_8200133C = -1.0f;
extern "C" __declspec(selectany) const float lbl_82002C5C = 0.5f;

union hkQuadRealUnion {
    __vector4 q;
    hkReal r[4];
};

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void set(hkReal a, hkReal b, hkReal c, hkReal d = 0.0f)
    {
        hkQuadRealUnion u;
        u.r[0] = a;
        u.r[1] = b;
        u.r[2] = c;
        u.r[3] = d;
        m_quad = u.q;
    }
    HK_FORCE_INLINE void mul4(const hkVector4 &a) { m_quad = __vmulfp(m_quad, a.m_quad); }
    HK_FORCE_INLINE void setMul4(hkReal r, const hkVector4 &a) { m_quad = __vmulfp(a.m_quad, __vspltw(__lvlx(&r, 0), 0)); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return ((hkReal *)&m_quad)[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return ((const hkReal *)&m_quad)[i]; }
    __vector4 m_quad;
};

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    HK_FORCE_INLINE hkEnum(ENUM e) { m_storage = (STORAGE)e; }
    STORAGE m_storage;
};

struct hkpSampledHeightFieldBaseCinfo {
    hkVector4 m_scale;                    // +0x00
    int m_xRes;                           // +0x10
    int m_zRes;                           // +0x14
    hkReal m_minHeight;                   // +0x18
    hkReal m_maxHeight;                   // +0x1C
    hkBool m_useProjectionBasedHeight;    // +0x20
};

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkpShapeType type) : hkpShape(type) {}
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum HeightFieldType { HEIGHTFIELD_FLOAT, HEIGHTFIELD_USHORT, HEIGHTFIELD_USER, HEIGHTFIELD_MAX_ID };
    hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &ci, int hfType);

    int m_xRes;                                          // +0x10
    int m_zRes;                                          // +0x14
    hkReal m_heightCenter;                               // +0x18
    hkBool m_useProjectionBasedHeight;                   // +0x1C
    hkEnum<HeightFieldType, hkUint8> m_heightfieldType;  // +0x1D
    hkVector4 m_intToFloatScale;                         // +0x20
    hkVector4 m_floatToIntScale;                         // +0x30
    hkVector4 m_floatToIntOffsetFloorCorrected;          // +0x40
    hkVector4 m_extents;                                 // +0x50
};

hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &ci, int hfType)
    : hkpHeightFieldShape((hkpShapeType)13), m_heightfieldType((HeightFieldType)hfType)
{
    m_xRes = ci.m_xRes;
    m_zRes = ci.m_zRes;
    m_useProjectionBasedHeight = ci.m_useProjectionBasedHeight;

    m_extents.set(ci.m_xRes - lbl_82002AE0, ci.m_maxHeight - ci.m_minHeight, ci.m_zRes - lbl_82002AE0);
    m_extents.mul4(ci.m_scale);

    if (ci.m_minHeight > ci.m_maxHeight)
    {
        m_heightCenter = lbl_8200133C;
        m_extents(1) = lbl_8200133C;
    }
    else
    {
        m_heightCenter = (ci.m_minHeight + ci.m_maxHeight) * ci.m_scale(1) * lbl_82002C5C;
    }

    m_intToFloatScale = ci.m_scale;
    m_floatToIntScale.set(lbl_82002AE0 / ci.m_scale(0), lbl_82002AE0 / ci.m_scale(1), lbl_82002AE0 / ci.m_scale(2));

    hkVector4 offset;
    offset.setMul4(fn_8307F168(), m_intToFloatScale);
    offset(1) = 0.0f;
    m_floatToIntOffsetFloorCorrected = offset;
}
