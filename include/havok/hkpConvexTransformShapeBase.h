// hkpConvexTransformShapeBase (Physics/Collide/Shape/Convex/hkpConvexTransformShapeBase.h), 0x20 bytes: the base
// of the convex shapes that place one convex child, held in an hkpSingleShapeContainer. The size and members are
// the game's hkClass (initialiser 8312F590; m_childShapeSize is not serialised).
//
// The constructor is out of line (82D44170); the finish constructor is inline (82D39D00). The destructor is the
// implicit one (it releases the child through hkpSingleShapeContainer's); the deleting destructor
// ??_GhkpConvexTransformShapeBase@@UAAPAXI@Z (82D39DE8) is shared by the subclasses.
#ifndef HAVOK_HKPCONVEXTRANSFORMSHAPEBASE_H
#define HAVOK_HKPCONVEXTRANSFORMSHAPEBASE_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTransformShapeBase(hkpShapeType type, hkReal radius, const hkpConvexShape *childShape,
                                hkpShapeContainer::ReferencePolicy ref);   // out of line (82D44170)
    hkpConvexTransformShapeBase(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag), m_childShape(flag) {}

    HK_FORCE_INLINE const hkpConvexShape *getChildShape() const
    {
        return static_cast<const hkpConvexShape *>(m_childShape.m_childShape);
    }

    hkpSingleShapeContainer m_childShape;   // +0x14
    int m_childShapeSize;                   // +0x1C
};

#endif
