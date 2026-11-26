// hkpExtendedMeshShape::addSubpart(const ShapesSubpart &part)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp): appends a copy of the
// subpart (fn_82D43098 makes room in m_shapesSubparts, fn_82D43AA0 is ShapesSubpart's assignment), grows the
// shape's centre/half-extent box by the subpart's AABB (fn_82D41C68), adds the subpart's number of child
// shapes to the cached count and returns the new subpart's index. Keeps its fn_ name.
#include "havok/hkAabb.h"
#include "havok/hkpExtendedMeshShape.h"

extern "C" {
hkpExtendedMeshShape::ShapesSubpart *fn_82D43098(hkpExtendedMeshShape *self);
void fn_82D43AA0(hkpExtendedMeshShape::ShapesSubpart *slot, const hkpExtendedMeshShape::ShapesSubpart *part);
void fn_82D41C68(const hkpExtendedMeshShape::ShapesSubpart *part, hkAabb *out);
}

extern "C" int fn_82D43170(hkpExtendedMeshShape *self, const hkpExtendedMeshShape::ShapesSubpart *part)
{
    hkpExtendedMeshShape::ShapesSubpart *slot = fn_82D43098(self);
    fn_82D43AA0(slot, part);

    hkVector4 oldMin;
    oldMin.setSub4(self->m_aabbCenter, self->m_aabbHalfExtents);
    hkVector4 oldMax;
    oldMax.setAdd4(self->m_aabbCenter, self->m_aabbHalfExtents);

    hkAabb box;
    fn_82D41C68(slot, &box);

    hkVector4 newMin;
    newMin.setMin4(oldMin, box.m_min);
    hkVector4 newMax;
    newMax.setMax4(oldMax, box.m_max);

    hkVector4 sum;
    sum.setAdd4(newMin, newMax);
    self->m_aabbCenter.setMul4(hkVector4::getHalf(), sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    self->m_aabbHalfExtents.setMul4(hkVector4::getHalf(), diff);

    self->m_cachedNumChildShapes += part->m_childShapes.getSize();
    return self->m_shapesSubparts.getSize() - 1;
}
