// hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &, int)
// (Physics/Collide/Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.cpp), /O2 /QVMXReserve.
// The name with an int second parameter is the one func_82D48058.cpp (Matching) already calls.
// m_heightfieldType is an hkEnum<HeightFieldType, hkUint8> constructed in the initialiser list: a plain
// hkUint8 member (initialiser or body) schedules its store before the base class stores.
// 1.0f and -1.0f are literals. The game's 0.5f keeps its lbl_ name (Matching units reference it) and
// is defined here as selectany.
#include "havok/hkpShape.h"
#include "havok/hkVector4.h"

extern "C" {
float fn_8307F168();
}

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

    m_extents.set(ci.m_xRes - 1.0f, ci.m_maxHeight - ci.m_minHeight, ci.m_zRes - 1.0f);
    m_extents.mul4(ci.m_scale);

    if (ci.m_minHeight > ci.m_maxHeight)
    {
        m_heightCenter = -1.0f;
        m_extents(1) = -1.0f;
    }
    else
    {
        m_heightCenter = (ci.m_minHeight + ci.m_maxHeight) * ci.m_scale(1) * 0.5f;
    }

    m_intToFloatScale = ci.m_scale;
    m_floatToIntScale.set(1.0f / ci.m_scale(0), 1.0f / ci.m_scale(1), 1.0f / ci.m_scale(2));

    hkVector4 offset;
    offset.setMul4(fn_8307F168(), m_intToFloatScale);
    offset(1) = 0.0f;
    m_floatToIntOffsetFloorCorrected = offset;
}
