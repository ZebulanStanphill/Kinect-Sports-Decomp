// hkpTransformShape (Physics/Collide/Shape/Misc/Transform/hkpTransformShape.h), 0x70 bytes: a child shape placed
// by a transform, held in an hkpSingleShapeContainer. The size and members are the game's hkClass (initialiser
// 8312EBF8; m_childShapeSize is not serialised).
//
// - The constructor is out of line (82D50C58); setTransform is out of line too (82D50C18), and the constructor
//   has its body inlined: the transform is copied and m_rotation set from the copy's rotation.
// - The finish constructor stores HK_SHAPE_TRANSFORM whether finishing or not (finishLoadedObject 82D3B6A8).
// - The destructor is the implicit one (it releases the child); the deleting destructor is 82D3B700.
// ??_7hkpTransformShape@@6B@ has hkpShape's 11 slots; castRay is 82D50E50.
#ifndef HAVOK_HKPTRANSFORMSHAPE_H
#define HAVOK_HKPTRANSFORMSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkQuaternion.h"
#include "havok/hkTransform.h"
#include "havok/hkpShape.h"

class hkpTransformShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTransformShape(const hkpShape *childShape, const hkTransform &transform);   // out of line (82D50C58)
    hkpTransformShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag), m_childShape(flag)
    {
        m_type = HK_SHAPE_TRANSFORM;
    }

    void setTransform(const hkTransform &transform);   // out of line (82D50C18)
    HK_FORCE_INLINE const hkpShape *getChildShape() const { return m_childShape.m_childShape; }
    HK_FORCE_INLINE const hkTransform &getTransform() const { return m_transform; }

    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;   // 82D50E50

    hkpSingleShapeContainer m_childShape;   // +0x10
    int m_childShapeSize;                   // +0x18
    hkQuaternion m_rotation;                // +0x20
    hkTransform m_transform;                // +0x30
};

#endif
