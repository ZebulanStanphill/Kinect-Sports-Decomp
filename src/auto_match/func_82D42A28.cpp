// hkpExtendedMeshShape::addTrianglesSubpart(const TrianglesSubpart &part), the virtual at +0x34 (Havok's name)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp): appends a copy of the
// subpart (fn_82D42908 makes room in m_trianglesSubparts), grows the shape's centre/half-extent box by the
// subpart's AABB (fn_82D41B18, with the scaling) widened by the triangle radius, and adds the subpart's number
// of child shapes (fn_82D42730) to the cached count.
#include "havok/hkAabb.h"
#include "havok/hkpExtendedMeshShape.h"

extern "C" {
hkpExtendedMeshShape::TrianglesSubpart *fn_82D42908(hkpExtendedMeshShape *self);
void fn_82D41B18(const hkpExtendedMeshShape::TrianglesSubpart *part, const hkVector4 *scaling, hkAabb *out);
int fn_82D42730(hkpExtendedMeshShape *self, const hkpExtendedMeshShape::TrianglesSubpart *part, int subpartIndex);
}

void hkpExtendedMeshShape::addTrianglesSubpart(const TrianglesSubpart &part)
{
    TrianglesSubpart *slot = fn_82D42908(this);
    *slot = part;

    hkVector4 oldMin;
    oldMin.setSub4(m_aabbCenter, m_aabbHalfExtents);
    hkVector4 oldMax;
    oldMax.setAdd4(m_aabbCenter, m_aabbHalfExtents);

    hkAabb box;
    fn_82D41B18(slot, &m_scaling, &box);
    hkVector4 tol;
    tol.setAll(m_triangleRadius);
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
    m_aabbCenter.setMul4(hkVector4::getHalf(), sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    m_aabbHalfExtents.setMul4(hkVector4::getHalf(), diff);

    m_cachedNumChildShapes += fn_82D42730(this, &part, m_trianglesSubparts.getSize() - 1);
}
