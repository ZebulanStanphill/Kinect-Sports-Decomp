// hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &, int)
// (Physics/Collide/Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.cpp), /O2 /QVMXReserve.
// The name with an int second parameter is the one func_82D48058.cpp (Matching) already calls.
// m_heightfieldType is an hkEnum<HeightFieldType, hkUint8> constructed in the initialiser list: a plain
// hkUint8 member (initialiser or body) schedules its store before the base class stores.
// 1.0f and -1.0f are literals. The game's 0.5f keeps its lbl_ name (Matching units reference it) and
// is defined here as selectany.
#include "havok/hkpSampledHeightFieldShape.h"
#include "havok/hkpSampledHeightFieldBaseCinfo.h"

extern "C" {
float fn_8307F168();
}

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
