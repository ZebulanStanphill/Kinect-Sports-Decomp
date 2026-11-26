// hkpExtendedMeshShape::addSubpart(const TrianglesSubpart &part)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp): appends a copy of the
// subpart (fn_82D42908 makes room in m_trianglesSubparts), grows the shape's centre/half-extent box by the
// subpart's AABB (fn_82D41B18, with the scaling) widened by the triangle radius, and adds the subpart's number
// of child shapes (fn_82D42730) to the cached count. Keeps its fn_ name.
#include "havok/hkAabb.h"
#include "havok/hkpExtendedMeshShape.h"

extern "C" {
hkpExtendedMeshShape::TrianglesSubpart *fn_82D42908(hkpExtendedMeshShape *self);
void fn_82D41B18(const hkpExtendedMeshShape::TrianglesSubpart *part, const hkVector4 *scaling, hkAabb *out);
int fn_82D42730(hkpExtendedMeshShape *self, const hkpExtendedMeshShape::TrianglesSubpart *part, int subpartIndex);
}

extern "C" void fn_82D42A28(hkpExtendedMeshShape *self, const hkpExtendedMeshShape::TrianglesSubpart *part)
{
    hkpExtendedMeshShape::TrianglesSubpart *slot = fn_82D42908(self);
    *slot = *part;

    hkVector4 oldMin;
    oldMin.setSub4(self->m_aabbCenter, self->m_aabbHalfExtents);
    hkVector4 oldMax;
    oldMax.setAdd4(self->m_aabbCenter, self->m_aabbHalfExtents);

    hkAabb box;
    fn_82D41B18(slot, &self->m_scaling, &box);
    hkVector4 tol;
    tol.setAll(self->m_triangleRadius);
    hkVector4 lo;
    lo.setSub4(box.m_min, tol);
    hkVector4 hi;
    hi.setAdd4(box.m_max, tol);

    hkVector4 newMin;
    newMin.setMin4(oldMin, lo);
    hkVector4 newMax;
    newMax.setMax4(oldMax, hi);

    hkVector4 sum;
    sum.setAdd4(newMin, newMax);
    self->m_aabbCenter.setMul4(hkVector4::getHalf(), sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    self->m_aabbHalfExtents.setMul4(hkVector4::getHalf(), diff);

    self->m_cachedNumChildShapes += fn_82D42730(self, part, self->m_trianglesSubparts.getSize() - 1);
}
