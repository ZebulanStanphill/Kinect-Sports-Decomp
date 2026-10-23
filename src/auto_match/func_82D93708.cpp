// hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag), the serialization
// "finish" constructor. It keeps its fn_ name (the Matching hkpAabbPhantom
// finish constructor, func_82D7E3E8, calls it), so it is written as an explicit
// constructor call (no placement-new null check). setOwner() must be a member
// of the collidable so the owner offset is computed at run time (subf), as in
// the original.
#include "havok/hkBase.h"

struct hkpTypedBroadPhaseHandle {
    hkUint32 m_id;                  // +0x0
    hkInt8 m_type;                  // +0x4
    hkInt8 m_ownerOffset;           // +0x5
    hkInt8 m_objectQualityType;     // +0x6
    hkUint32 m_collisionFilterInfo; // +0x8
    HK_FORCE_INLINE void setOwner(void *owner) { m_ownerOffset = hkInt8((char *)owner - (char *)this); }
};

struct hkpCollidableBoundingVolumeData {
    hkUint32 m_min[3];              // +0x0
    hkUint8 m_expansionMin[3];
    hkUint8 m_expansionShift;
    hkUint32 m_max[3];              // +0x10
    hkUint8 m_expansionMax[3];
    hkUint8 m_padding;
    hkUint16 m_numChildShapeAabbs;  // +0x20
    hkUint16 m_capacityChildShapeAabbs;
    void *m_childShapeAabbs;
    void *m_childShapeKeys;
};

struct hkpLinkedCollidable {
    void *m_shape;                  // +0x0 (hkpCdBody)
    hkUint32 m_shapeKey;
    void *m_motion;
    void *m_parent;
    hkInt8 m_ownerOffset;           // +0x10
    hkUint8 m_forceCollideOntoPpu;
    hkUint16 m_shapeSizeOnSpu;
    hkpTypedBroadPhaseHandle m_broadPhaseHandle;           // +0x14
    hkpCollidableBoundingVolumeData m_boundingVolumeData;  // +0x20
    float m_allowedPenetrationDepth;                       // +0x4c
    hkArray<int> m_collisionEntries;                       // +0x50

    HK_FORCE_INLINE void setOwner(void *owner) { m_ownerOffset = hkInt8((char *)owner - (char *)this); }
    HK_FORCE_INLINE hkpLinkedCollidable(hkFinishLoadedObjectFlag flag) : m_collisionEntries(flag)
    {
        if (flag.m_finishing) {
            m_boundingVolumeData.m_numChildShapeAabbs = 0;
            m_boundingVolumeData.m_capacityChildShapeAabbs = 0;
            m_boundingVolumeData.m_childShapeAabbs = 0;
            m_boundingVolumeData.m_childShapeKeys = 0;
            m_boundingVolumeData.m_min[0] = 1;
            m_boundingVolumeData.m_max[0] = 0;
            m_broadPhaseHandle.setOwner(this);
        }
        // +nosave: default-constructed
        m_collisionEntries.m_data = 0;
        m_collisionEntries.m_size = 0;
        m_collisionEntries.m_capacityAndFlags = int(0x80000000);
    }
};

class hkpWorldObject : public hkReferencedObject {
public:
    void *m_world;                         // +0x8
    hkUlong m_userData;                    // +0xc
    hkpLinkedCollidable m_collidable;      // +0x10
    hkUint32 m_multiThreadCheckThreadId;   // +0x6c
    hkUint16 m_multiThreadCheckMarkCount;  // +0x70
    hkStringPtr m_name;                    // +0x74

    HK_FORCE_INLINE hkpWorldObject(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_collidable(flag), m_multiThreadCheckThreadId(0xffffffd1),
          m_multiThreadCheckMarkCount(0), m_name(flag)
    {
        if (flag.m_finishing) {
            m_collidable.setOwner(this);
        }
    }
};

extern "C" hkpWorldObject *fn_82D93708(hkpWorldObject *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpWorldObject::hkpWorldObject(flag);
    return self;
}
