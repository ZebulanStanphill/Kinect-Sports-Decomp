#include "havok/hkBase.h"
#include "havok/hkMotionState.h"

#pragma intrinsic(__vxor)

class hkQuaternion {
public:
    hkVector4 m_vec;
};

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

class hkpShape : public hkReferencedObject {
};
class hkpWorld;
class hkpCollidable;

// hkpCollidable::hkpCollidable(const hkpShape *, const hkMotionState *, int) is out of line (fn_8253D7A8).
extern "C" void fn_8253D7A8(hkpCollidable *self, const hkpShape *shape, const hkMotionState *ms, int type);

class hkpCdBody {
public:
    const hkpShape *m_shape;     // +0x0
    hkUint32 m_shapeKey;         // +0x4
    const void *m_motion;        // +0x8
    const hkpCdBody *m_parent;   // +0xC
};

// hkpTypedBroadPhaseHandle (Physics/Collide/BroadPhase/hkpTypedBroadPhaseHandle.h).
class hkpTypedBroadPhaseHandle {
public:
    void setOwner(void *owner) { m_ownerOffset = hkInt8(hkUlong(owner) - hkUlong(this)); }

    hkUint32 m_id;                    // +0x0 (hkpBroadPhaseHandle)
    hkInt8 m_type;                    // +0x4
    hkInt8 m_ownerOffset;             // +0x5
    hkInt8 m_objectQualityType;       // +0x6
    hkUint32 m_collisionFilterInfo;   // +0x8
};

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
        void *m_childShapeAabbs;            // +0x24
        hkUint32 *m_childShapeKeys;         // +0x28
    };

    // The members are constructed by the out-of-line constructor; the wrapper constructs nothing itself.
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkMotionState *ms, int type = 0)
    {
        fn_8253D7A8(this, shape, ms, type);
    }
    HK_FORCE_INLINE hkpCollidable(hkFinishLoadedObjectFlag flag) : m_boundingVolumeData(flag)
    {
        if (flag.m_finishing)
            m_broadPhaseHandle.setOwner(this);
    }
    void setOwner(void *owner) { m_ownerOffset = hkInt8(hkUlong(owner) - hkUlong(this)); }
    void setMotionState(hkMotionState *state) { m_motion = state; }
    void setCollisionFilterInfo(hkUint32 info) { m_broadPhaseHandle.m_collisionFilterInfo = info; }

    hkInt8 m_ownerOffset;                          // +0x10
    hkUint8 m_forceCollideOntoPpu;                 // +0x11
    hkUint16 m_shapeSizeOnSpu;                     // +0x12
    hkpTypedBroadPhaseHandle m_broadPhaseHandle;   // +0x14
    BoundingVolumeData m_boundingVolumeData;       // +0x20
    hkReal m_allowedPenetrationDepth;              // +0x4C
};

class hkpLinkedCollidable : public hkpCollidable {
public:
    struct CollisionEntry {
        void *m_agentEntry;
        hkpLinkedCollidable *m_partner;
    };
    HK_FORCE_INLINE hkpLinkedCollidable(const hkpShape *shape, const hkMotionState *ms, int type = 0)
        : hkpCollidable(shape, ms, type) {}
    HK_FORCE_INLINE hkpLinkedCollidable(hkFinishLoadedObjectFlag flag) : hkpCollidable(flag) {}

    hkArray<CollisionEntry> m_collisionEntries;   // +0x50
};

// hkMultiThreadCheck (Common/Base/DebugUtil/MultiThreadCheck/hkMultiThreadCheck.h).
struct hkMultiThreadCheck {
    enum { UNMARKED = 0xffffffd1 };
    hkMultiThreadCheck() : m_threadId(UNMARKED), m_stackTraceId(0) {}
    hkUint32 m_threadId;      // +0x0
    hkUint16 m_stackTraceId;  // +0x4
    hkUint16 m_markCount;     // +0x6
};

struct hkSimpleProperty {
    hkUint32 m_key;
    hkUint32 m_alignmentPadding;
    hkUint64 m_value;
};

// hkpWorldObject (Physics/Dynamics/World/hkpWorldObject.h), 0x8C bytes.
class hkpWorldObject : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    enum BroadPhaseType {
        BROAD_PHASE_INVALID,
        BROAD_PHASE_ENTITY,
        BROAD_PHASE_PHANTOM,
        BROAD_PHASE_BORDER,
        BROAD_PHASE_MAX_ID
    };
    hkpWorldObject(const hkpShape *shape, BroadPhaseType type);
    hkpWorldObject(hkFinishLoadedObjectFlag flag);
    virtual ~hkpWorldObject();

    hkpWorld *m_world;                        // +0x8
    hkUlong m_userData;                       // +0xC
    hkpLinkedCollidable m_collidable;         // +0x10
    hkMultiThreadCheck m_multiThreadCheck;    // +0x6C
    hkStringPtr m_name;                       // +0x74
    hkArray<hkSimpleProperty> m_properties;   // +0x78
    hkReferencedObject *m_treeData;           // +0x84
    hkUint32 m_treeHandle;                    // +0x88
};

class hkpPhantomOverlapListener;
class hkpPhantomListener;
class hkpCollisionAgent;
class hkpPhantom;

// Out of line in hkpPhantom.cpp: fires phantomDeletedCallback on the listeners, last to first.
extern "C" void fn_82D99FE0(hkpPhantom *self);

class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

// hkpPhantom (Physics/Dynamics/Phantom/hkpPhantom.h).
class hkpPhantom : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhantom(const hkpShape *shape) : hkpWorldObject(shape, BROAD_PHASE_PHANTOM) { m_collidable.setOwner(this); }
    virtual ~hkpPhantom();
    void firePhantomDeleted() { fn_82D99FE0(this); }

    hkArray<hkpPhantomOverlapListener *> m_overlapListeners;   // +0x8C
    hkArray<hkpPhantomListener *> m_phantomListeners;          // +0x98
};

// hkpAabbPhantom (Physics/Dynamics/Phantom/hkpAabbPhantom.h).
class hkpAabbPhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpAabbPhantom();

    hkAabb m_aabb;                                       // +0xB0
    hkArray<hkpCollidable *> m_overlappingCollidables;   // +0xD0
    hkBool m_orderDirty;                                 // +0xDC
};

// hkQuaternion::set(const hkRotation &) is out of line (fn_82CE5990).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

// hkpShapePhantom (Physics/Dynamics/Phantom/hkpShapePhantom.h): hkMotionState at +0xB0.
class hkpShapePhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpShapePhantom(const hkpShape *shape, const hkTransform &transform);

    hkMotionState m_motionState;   // +0xB0
};

class hkpSimpleShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo = 0);
    virtual ~hkpSimpleShapePhantom();

    struct CollisionDetail {
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

class hkpCachingShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpCachingShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo = 0);
    virtual ~hkpCachingShapePhantom();

    struct CollisionDetail {
        hkpCollisionAgent *m_agent;
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

hkpAabbPhantom::~hkpAabbPhantom()
{
}
