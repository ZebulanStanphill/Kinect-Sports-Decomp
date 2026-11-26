// hkpConvexListShape (Physics/Collide/Shape/Convex/ConvexList/hkpConvexListShape.h), 0x50 bytes: a convex shape
// made of several convex children, with hkpShapeContainer as second base (at +0x14). The size and members are
// the game's hkClass (initialiser 8312D1F0).
//
// - The constructor (??0hkpConvexListShape@@QAA@PBQBVhkpConvexShape@@H@Z, 82D48C90) and the destructor
//   (82D48D38) are out of line; the finish constructor is inline and stores HK_SHAPE_CONVEX_LIST whether
//   finishing or not (finishLoadedObject 82D39A20).
// - setShapes and setUseCachedAabb exist in the game only as fn_82D48BF8 and fn_82D48570.
// Vtables ??_7hkpConvexListShape@@6BhkpConvexShape@@@ (18 slots) and ...@@6BhkpShapeContainer@@@ (7 slots).
#ifndef HAVOK_HKPCONVEXLISTSHAPE_H
#define HAVOK_HKPCONVEXLISTSHAPE_H

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
    hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes);   // out of line (82D48C90)
    hkpConvexListShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag), m_childShapes(flag)
    {
        m_type = HK_SHAPE_CONVEX_LIST;
    }
    virtual ~hkpConvexListShape();   // out of line (82D48D38)

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

#endif
