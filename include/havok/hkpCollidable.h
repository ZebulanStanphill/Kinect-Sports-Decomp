#ifndef HAVOK_HKPCOLLIDABLE_H
#define HAVOK_HKPCOLLIDABLE_H

#include "havok/hkAabbUint32.h"
#include "havok/hkpCdBody.h"
#include "havok/hkpTypedBroadPhaseHandle.h"

class hkpCollidable;

// hkpCollidable::hkpCollidable(const hkpShape *, const hkMotionState *, int) is out of line (fn_8253D7A8).
// The game also reaches it with an hkTransform (82DF0890, 82E008F8 and 82DF2A08 build a collidable on a
// stack transform): the constructor only stores the pointer in m_motion, so the two Havok overloads are
// one function here, and the parameter is the untyped pointer that hkpCdBody keeps.
extern "C" void fn_8253D7A8(hkpCollidable *self, const hkpShape *shape, const void *motion, int type);

// hkpCollidable (Physics/Collide/Agent/Collidable/hkpCollidable.h), 0x50 bytes.
class hkpCollidable : public hkpCdBody {
public:
    struct BoundingVolumeData {
        BoundingVolumeData() {}
        BoundingVolumeData(hkFinishLoadedObjectFlag flag)
        {
            if (flag.m_finishing) {
                m_numChildShapeAabbs = 0;
                m_capacityChildShapeAabbs = 0;
                m_childShapeAabbs = HK_NULL;
                m_childShapeKeys = HK_NULL;
                invalidate();
            }
        }
        void invalidate()
        {
            m_min[0] = 1;
            m_max[0] = 0;
        }

        hkUint32 m_min[3];                  // +0x0
        hkUint8 m_expansionMin[3];          // +0xC
        hkUint8 m_expansionShift;           // +0xF
        hkUint32 m_max[3];                  // +0x10
        hkUint8 m_expansionMax[3];          // +0x1C
        hkUint8 m_padding;                  // +0x1F
        hkUint16 m_numChildShapeAabbs;      // +0x20
        hkUint16 m_capacityChildShapeAabbs; // +0x22
        hkAabbUint32 *m_childShapeAabbs;    // +0x24
        hkUint32 *m_childShapeKeys;         // +0x28
    };

    // The members are constructed by the out-of-line constructor; the wrapper constructs nothing itself.
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkMotionState *ms, int type = 0)
    {
        fn_8253D7A8(this, shape, ms, type);
    }
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkTransform *t, int type = 0)
    {
        fn_8253D7A8(this, shape, t, type);
    }
    HK_FORCE_INLINE hkpCollidable(hkFinishLoadedObjectFlag flag) : m_boundingVolumeData(flag)
    {
        if (flag.m_finishing)
            m_broadPhaseHandle.setOwner(this);
    }
    void setOwner(void *owner) { m_ownerOffset = hkInt8(hkUlong(owner) - hkUlong(this)); }
    // The object that holds the collidable (hkpGetRigidBody, 82DF0890, and 82DAB540 add the offset).
    void *getOwner() const { return const_cast<char *>(reinterpret_cast<const char *>(this)) + m_ownerOffset; }
    // The hkpWorldObject::BroadPhaseType of the owner (82DF0890 reads +0x18).
    hkInt8 getType() const { return m_broadPhaseHandle.m_type; }
    hkReal getAllowedPenetrationDepth() const { return m_allowedPenetrationDepth; }
    void setMotionState(hkMotionState *state) { m_motion = state; }
    void setCollisionFilterInfo(hkUint32 info) { m_broadPhaseHandle.m_collisionFilterInfo = info; }

    hkInt8 m_ownerOffset;                          // +0x10
    hkUint8 m_forceCollideOntoPpu;                 // +0x11
    hkUint16 m_shapeSizeOnSpu;                     // +0x12
    hkpTypedBroadPhaseHandle m_broadPhaseHandle;   // +0x14
    BoundingVolumeData m_boundingVolumeData;       // +0x20
    hkReal m_allowedPenetrationDepth;              // +0x4C
};

#endif
