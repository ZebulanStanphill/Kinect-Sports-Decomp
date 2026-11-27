// hkpListShape (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.h), 0x70 bytes: a shape collection
// over an array of child shapes, with a bit per child that enables it. The size, the members and ChildInfo
// (hkpListShapeChildInfo, 0x10 bytes; m_shapeSize and m_numChildShapes are not serialised) are the game's
// hkClass (initialisers 8312DBC0 and 8312DC30).
//
// - The constructor is out of line (82D3E3F0): it reserves four children,
//   sets the shapes through setShapes (fn_82D3E1F0) and enables every child.
// - The finish constructor is out of line (82D3E4C8): when finishing it sets
//   HK_SHAPE_LIST and COLLECTION_LIST after hkpShapeCollection's.
// - The destructor is out of line (??1hkpListShape@@UAA@XZ, 82D3E550): it releases the children.
// - disableChild is out of line (82D3D9C0).
// Vtables ??_7hkpListShape@@6BhkpShape@@@ (13 slots) and ??_7hkpListShape@@6BhkpShapeContainer@@@ (7 slots).
#ifndef HAVOK_HKPLISTSHAPE_H
#define HAVOK_HKPLISTSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpListShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    // 0x10 bytes.
    struct ChildInfo {
        const hkpShape *m_shape;          // +0x0
        hkUint32 m_collisionFilterInfo;   // +0x4
        int m_shapeSize;                  // +0x8
        int m_numChildShapes;             // +0xC
    };

    hkpListShape(const hkpShape *const *shapeArray, int numShapes,
                 hkpShapeContainer::ReferencePolicy ref);   // out of line (82D3E3F0)
    hkpListShape(hkFinishLoadedObjectFlag flag);            // out of line (82D3E4C8)
    virtual ~hkpListShape();                                // out of line (82D3E550)

    void disableChild(hkpShapeKey index);   // out of line (82D3D9C0)

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

#endif
