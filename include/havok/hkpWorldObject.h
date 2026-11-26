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

#endif
