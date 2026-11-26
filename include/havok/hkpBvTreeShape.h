// hkpBvTreeShape (Physics/Collide/Shape/Compound/Tree/hkpBvTreeShape.h), 0x14 bytes: an hkpShape over a
// bounding volume tree of child shapes. The size and m_bvTreeType (+0x10, an enum stored in a byte) are the
// game's hkClass (hkpBvTreeShapeClass, initialiser 8312F328); the enumerator names are its hkClassEnum
// strings (BVTREE_MOPP, BVTREE_TRISAMPLED_HEIGHTFIELD, BVTREE_USER, BVTREE_MAX).
//
// m_bvTreeType must be an hkEnum (a class wrapper) initialised in the constructor's initialiser list: its store
// is then scheduled with hkpShape's member stores, ahead of the vtable store (82D515A0, 82D4BBC0).
// When finishing, the finish constructor sets HK_SHAPE_BV_TREE and BVTREE_USER after hkpShape's clears m_type
// (82D3B800); the subclasses then set their own.
// The vtables of the subclasses (??_7hkpMoppBvTreeShape@@6B@, 13 slots) have two slots after hkpShape's;
// their names and parameters follow Havok's header (both are pure there).
#ifndef HAVOK_HKPBVTREESHAPE_H
#define HAVOK_HKPBVTREESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkpShape.h"

class hkAabb;

class hkpBvTreeShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum BvTreeType { BVTREE_MOPP, BVTREE_TRISAMPLED_HEIGHTFIELD, BVTREE_USER, BVTREE_MAX };

    HK_FORCE_INLINE hkpBvTreeShape(hkpShapeType type, BvTreeType bvType) : hkpShape(type), m_bvTreeType(bvType) {}
    hkpBvTreeShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag)
    {
        if (flag.m_finishing) {
            m_type = HK_SHAPE_BV_TREE;
            m_bvTreeType = BVTREE_USER;
        }
    }

    virtual void queryAabb(const hkAabb &aabb, hkArray<hkpShapeKey> &hits) const;                 // +0x2C
    virtual hkUint32 queryAabbImpl(const hkAabb &aabb, hkpShapeKey *hits, int maxNumKeys) const;   // +0x30

    hkEnum<BvTreeType, hkUint8> m_bvTreeType;   // +0x10
};

#endif
