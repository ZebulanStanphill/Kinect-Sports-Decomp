// hkpListShape::hkpListShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp).
// When finishing, hkpShape's clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and
// COLLECTION_USER (3), and this class's sets HK_SHAPE_LIST and COLLECTION_LIST. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that
// runs the constructor on the given storage (MSVC's explicit constructor call; placement new would add
// a null check). The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpListShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct ChildInfo {
        const hkpShape *m_shape;
        hkUint32 m_collisionFilterInfo;
        int m_shapeSize;
        int m_numChildShapes;
    };
    HK_FORCE_INLINE hkpListShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag), m_childInfo(flag)
    {
        if (flag.m_finishing) {
            m_type = hkpShapeType(9);
            m_collectionType = COLLECTION_LIST;
        }
    }
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

extern "C" hkpListShape *fn_82D3E4C8(hkpListShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpListShape::hkpListShape(flag);
    return self;
}
