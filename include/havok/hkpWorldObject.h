#ifndef HAVOK_HKPWORLDOBJECT_H
#define HAVOK_HKPWORLDOBJECT_H

#include "havok/hkBase.h"
#include "havok/hkStringPtr.h"
#include "havok/hkpLinkedCollidable.h"
#include "havok/hkMultiThreadCheck.h"

class hkpWorld;

// hkSimpleProperty (Physics/Dynamics/Common/hkpProperty.h), 0x10 bytes.
struct hkSimpleProperty {
    hkUint32 m_key;
    hkUint32 m_alignmentPadding;
    hkUint64 m_value;
};

// hkWorldOperation::Result (Physics/Dynamics/World/hkpWorldObject.h): what setShape returns. The base
// function (82D93378) returns 1; the names are Havok's.
struct hkWorldOperation {
    enum Result {
        POSTPONED,
        DONE
    };
};

// hkpWorldObject (Physics/Dynamics/World/hkpWorldObject.h), 0x8C bytes.
// Its vtable (??_7hkpWorldObject@@6B@) has two slots after hkReferencedObject's three: setShape (82D93378)
// and a pure one, which hkpRigidBody fills with a function returning its motion state (82D8B3E0, this + 0xF0)
// and hkpShapePhantom likewise (82D99CC0).
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
    virtual hkWorldOperation::Result setShape(const hkpShape *shape);   // +0xC
    virtual hkMotionState *getMotionState();                            // +0x10; pure in Havok

    hkpWorld *m_world;                        // +0x8
    hkUlong m_userData;                       // +0xC
    hkpLinkedCollidable m_collidable;         // +0x10
    hkMultiThreadCheck m_multiThreadCheck;    // +0x6C
    hkStringPtr m_name;                       // +0x74
    hkArray<hkSimpleProperty> m_properties;   // +0x78
    hkReferencedObject *m_treeData;           // +0x84
    hkUint32 m_treeHandle;                    // +0x88
};

#endif
