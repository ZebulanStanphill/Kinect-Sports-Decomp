// hkpConvexListShape::hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes)
// (Physics/Collide/Shape/Convex/ConvexList/hkpConvexListShape.cpp): radius 0, then setShapes (fn_82D48BF8) and
// setUseCachedAabb(true) (fn_82D48570), both out of line under their fn_ names. RTTI: hkpConvexShape at +0,
// hkpShapeContainer at +0x14. Built with /O2 (flag file).
// m_minDistanceToUseConvexHullForGetClosestPoints is the literal 1.0f, whose load the compiler schedules
// above the m_childShapes stores (it knows the constant cannot change).
#include "havok/hkBase.h"
#include "havok/hkpConvexListShape.h"

hkpConvexListShape::hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes)
    : hkpConvexShape(hkpShapeType(0x17), 0.0f)
{
    m_minDistanceToUseConvexHullForGetClosestPoints = 1.0f;
    setShapes(shapeArray, numShapes);
    setUseCachedAabb(true);
}
