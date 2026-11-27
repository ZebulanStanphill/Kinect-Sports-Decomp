// hkpExtendedMeshShape::addShapesSubpart(const ShapesSubpart &part), the virtual at +0x38 (Havok's name)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp): appends a copy of the
// subpart (fn_82D43098 makes room in m_shapesSubparts, then ShapesSubpart's out-of-line assignment, 82D43AA0), grows the
// shape's centre/half-extent box by the subpart's AABB (fn_82D41C68), adds the subpart's number of child
// shapes to the cached count and returns the new subpart's index.
#include "havok/hkAabb.h"
#include "havok/hkpExtendedMeshShape.h"

extern "C" {
hkpExtendedMeshShape::ShapesSubpart *fn_82D43098(hkpExtendedMeshShape *self);
void fn_82D41C68(const hkpExtendedMeshShape::ShapesSubpart *part, hkAabb *out);
}

int hkpExtendedMeshShape::addShapesSubpart(const ShapesSubpart &part)
{
    ShapesSubpart *slot = fn_82D43098(this);
    *slot = part;

    hkVector4 oldMin;
    oldMin.setSub4(m_aabbCenter, m_aabbHalfExtents);
    hkVector4 oldMax;
    oldMax.setAdd4(m_aabbCenter, m_aabbHalfExtents);

    hkAabb box;
    fn_82D41C68(slot, &box);

    hkVector4 newMin;
    newMin.setMin4(oldMin, box.m_min);
    hkVector4 newMax;
    newMax.setMax4(oldMax, box.m_max);

    hkVector4 sum;
    sum.setAdd4(newMin, newMax);
    m_aabbCenter.setMul4(hkVector4::getHalf(), sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    m_aabbHalfExtents.setMul4(hkVector4::getHalf(), diff);

    m_cachedNumChildShapes += part.m_childShapes.getSize();
    return m_shapesSubparts.getSize() - 1;
}
