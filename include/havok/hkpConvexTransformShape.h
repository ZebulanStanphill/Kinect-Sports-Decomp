// hkpConvexTransformShape (Physics/Collide/Shape/Convex/ConvexTransform/hkpConvexTransformShape.h), 0x60 bytes:
// a convex child placed by a transform. The size and m_transform (+0x20) are the game's hkClass (initialiser
// 8312D350).
//
// The constructor exists in the game only as fn_82D3D180 (its unit defines it): hkpConvexTransformShapeBase's
// with HK_SHAPE_CONVEX_TRANSFORM and the child's radius, then the transform is copied. The finish constructor
// stores HK_SHAPE_CONVEX_TRANSFORM whether finishing or not (finishLoadedObject 82D39D00).
#ifndef HAVOK_HKPCONVEXTRANSFORMSHAPE_H
#define HAVOK_HKPCONVEXTRANSFORMSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkpConvexTransformShapeBase.h"

class hkpConvexTransformShape : public hkpConvexTransformShapeBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTransformShape(const hkpConvexShape *childShape, const hkTransform &transform,
                            hkpShapeContainer::ReferencePolicy ref);   // fn_82D3D180
    hkpConvexTransformShape(hkFinishLoadedObjectFlag flag) : hkpConvexTransformShapeBase(flag)
    {
        m_type = HK_SHAPE_CONVEX_TRANSFORM;
    }

    HK_FORCE_INLINE const hkTransform &getTransform() const { return m_transform; }

    hkTransform m_transform;   // +0x20
};

#endif
