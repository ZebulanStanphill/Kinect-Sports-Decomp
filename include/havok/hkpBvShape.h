// hkpBvShape (Physics/Collide/Shape/Misc/Bv/hkpBvShape.h), 0x1C bytes: a child shape with a bounding volume shape
// that is tested first. The size and members are the game's hkClass (initialiser 8312CD20).
//
// The constructor (??0hkpBvShape@@QAA@PBVhkpShape@@0@Z, 82D44368) and the destructor (82D442E0, it releases the
// bounding volume) are out of line; the finish constructor stores HK_SHAPE_BV whether finishing or not
// (finishLoadedObject 82D39268). ??_7hkpBvShape@@6B@ has hkpShape's 11 slots.
#ifndef HAVOK_HKPBVSHAPE_H
#define HAVOK_HKPBVSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpBvShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBvShape(const hkpShape *boundingVolumeShape, const hkpShape *childShape);   // out of line (82D44368)
    hkpBvShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag), m_childShape(flag) { m_type = HK_SHAPE_BV; }
    virtual ~hkpBvShape();   // out of line (82D442E0)

    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;

    HK_FORCE_INLINE const hkpShape *getBoundingVolumeShape() const { return m_boundingVolumeShape; }
    HK_FORCE_INLINE const hkpShape *getChildShape() const { return m_childShape.m_childShape; }

    const hkpShape *m_boundingVolumeShape;   // +0x10
    hkpSingleShapeContainer m_childShape;    // +0x14
};

#endif
