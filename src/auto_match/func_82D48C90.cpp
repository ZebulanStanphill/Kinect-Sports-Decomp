// hkpConvexListShape::hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes)
// (Physics/Collide/Shape/Convex/ConvexList/hkpConvexListShape.cpp): radius 0, then setShapes (fn_82D48BF8) and
// setUseCachedAabb(true) (fn_82D48570), both out of line under their fn_ names. RTTI: hkpConvexShape at +0,
// hkpShapeContainer at +0x14. Built with /O2 (flag file).
// m_minDistanceToUseConvexHullForGetClosestPoints is the literal 1.0f, whose load the compiler schedules
// above the m_childShapes stores (it knows the constant cannot change).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpConvexListShape;
extern "C" {
void fn_82D48BF8(hkpConvexListShape *self, const hkpConvexShape *const *shapeArray, int numShapes);   // setShapes
void fn_82D48570(hkpConvexListShape *self, bool useCachedAabb);                                     // setUseCachedAabb
}

class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes);
    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
    void setShapes(const hkpConvexShape *const *shapeArray, int numShapes) { fn_82D48BF8(this, shapeArray, numShapes); }
    void setUseCachedAabb(bool useCachedAabb) { fn_82D48570(this, useCachedAabb); }

    hkReal m_minDistanceToUseConvexHullForGetClosestPoints;   // +0x18
    hkVector4 m_aabbHalfExtents;                              // +0x20
    hkVector4 m_aabbCenter;                                   // +0x30
    hkBool m_useCachedAabb;                                   // +0x40
    hkArray<const hkpConvexShape *> m_childShapes;            // +0x44
};

hkpConvexListShape::hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes)
    : hkpConvexShape(hkpShapeType(0x17), 0.0f)
{
    m_minDistanceToUseConvexHullForGetClosestPoints = 1.0f;
    setShapes(shapeArray, numShapes);
    setUseCachedAabb(true);
}
