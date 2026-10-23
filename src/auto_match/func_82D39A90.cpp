// hkpConvexListShape scalar deleting destructor: it calls the out-of-line destructor (??1hkpConvexListShape), defined below as in
// func_82D48D38.cpp, which also makes the compiler emit the vtable and this deleting destructor.
// hkpConvexListShape::~hkpConvexListShape (Physics/Collide/Shape/Convex/ConvexList/hkpConvexListShape.cpp):
// releases every child shape, then the child hkArray (+0x44) and the bases are destroyed. RTTI:
// hkpConvexShape at +0, hkpShapeContainer at +0x14.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexListShape(hkFinishLoadedObjectFlag flag);
    virtual ~hkpConvexListShape();
    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkReal m_minDistanceToUseConvexHullForGetClosestPoints;   // +0x18
    hkVector4 m_aabbHalfExtents;                              // +0x20
    hkVector4 m_aabbCenter;                                   // +0x30
    hkBool m_useCachedAabb;                                   // +0x40
    hkArray<const hkpConvexShape *> m_childShapes;            // +0x44
};

hkpConvexListShape::~hkpConvexListShape()
{
    for (int i = 0; i < m_childShapes.getSize(); i++) {
        m_childShapes[i]->removeReference();
    }
}
