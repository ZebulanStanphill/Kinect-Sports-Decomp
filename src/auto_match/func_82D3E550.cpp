// hkpListShape::~hkpListShape (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp): releases every
// child shape, then the child info hkArray (+0x18) and the bases are destroyed. RTTI: hkpShapeCollection
// (hkpShapeContainer at +0x10).
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

class hkpListShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct ChildInfo {
        const hkpShape *m_shape;          // +0x0
        hkUint32 m_collisionFilterInfo;   // +0x4
        int m_shapeSize;                  // +0x8
        int m_numChildShapes;             // +0xC
    };
    hkpListShape(hkFinishLoadedObjectFlag flag);
    virtual ~hkpListShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkArray<ChildInfo> m_childInfo;   // +0x18
    hkUint16 m_flags;                 // +0x24
    hkUint16 m_numDisabledChildren;   // +0x26
    hkVector4 m_aabbHalfExtents;      // +0x30
    hkVector4 m_aabbCenter;           // +0x40
    hkUint32 m_enabledChildren[8];    // +0x50
};

hkpListShape::~hkpListShape()
{
    for (int i = 0; i < m_childInfo.getSize(); i++) {
        m_childInfo[i].m_shape->removeReference();
    }
}
