// hkpWorldObject::~hkpWorldObject (Physics/Dynamics/World/hkpWorldObject.cpp).
// hkpWorldObject (Physics/Dynamics/World/hkpWorldObject.h), layout from its destructor (fn_82D7E268) and its
// finish constructor (fn_82D93708): the collidable at +0x10 (0x5C bytes; its destructor is out of line,
// fn_82D3BBC8, and frees m_collisionEntries at +0x50), the multi-thread check at +0x6C, m_name at +0x74,
// m_properties at +0x78 (16-byte hkSimpleProperty), a reference-counted object at +0x84.
#include "havok/hkBase.h"

class hkpShape;
class hkpWorld;

class hkpCdBody {
public:
    const hkpShape *getShape() const { return m_shape; }

    const hkpShape *m_shape;     // +0x0
    hkUint32 m_shapeKey;         // +0x4
    const void *m_motion;        // +0x8
    const hkpCdBody *m_parent;   // +0xC
};

class hkpCollidable : public hkpCdBody {
public:
    hkUint8 m_members[0x40];     // +0x10: owner offset, filter info, broad-phase handle, bounding volume data...
};

class hkpLinkedCollidable : public hkpCollidable {
public:
    ~hkpLinkedCollidable();

    struct CollisionEntry {
        void *m_agentEntry;
        hkpLinkedCollidable *m_partner;
    };
    hkArray<CollisionEntry> m_collisionEntries;   // +0x50
};

class hkpShape : public hkReferencedObject {
};

struct hkMultiThreadCheck {
    hkUint32 m_threadId;
    hkUint16 m_stackTraceId;
    hkUint16 m_markCount;
};

struct hkSimpleProperty {
    hkUint32 m_key;
    hkUint32 m_alignmentPadding;
    hkUint64 m_value;
};

class hkpWorldObject : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpWorldObject();

    hkpWorld *m_world;                        // +0x8
    hkUlong m_userData;                       // +0xC
    hkpLinkedCollidable m_collidable;         // +0x10
    hkMultiThreadCheck m_multiThreadCheck;    // +0x6C
    hkStringPtr m_name;                       // +0x74
    hkArray<hkSimpleProperty> m_properties;   // +0x78
    hkReferencedObject *m_treeData;           // +0x84
    hkUint32 m_pad88;                         // +0x88
};

hkpWorldObject::~hkpWorldObject()
{
    if (m_collidable.getShape())
        m_collidable.getShape()->removeReference();
    if (m_treeData)
        m_treeData->removeReference();
}
