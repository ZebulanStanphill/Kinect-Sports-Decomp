// hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag), the serialization
// "finish" constructor. It keeps its fn_ name (the Matching hkpAabbPhantom
// finish constructor, func_82D7E3E8, calls it), so it is written as an explicit
// constructor call (no placement-new null check). setOwner() must be a member
// of the collidable so the owner offset is computed at run time (subf), as in
// the original.
#include "havok/hkBase.h"
#include "havok/hkpLinkedCollidable.h"

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
