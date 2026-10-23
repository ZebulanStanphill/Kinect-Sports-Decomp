// hkpReportContactMgr::Factory::createContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.cpp): the owners of the two collidables, then new with the constructor inlined (defined inline here).
#include "havok/hkBase.h"

class hkpWorld;
class hkpCollisionInput;

class hkMath {
public:
    template <typename T>
    static HK_FORCE_INLINE T HK_CALL min2(T a, T b) { return a < b ? a : b; }
};

class hkpCollidable {
public:
    void *getOwner() const { return const_cast<char *>(reinterpret_cast<const char *>(this) + m_ownerOffset); }

    char m_cdBody[0x10];    // +0x0 hkpCdBody
    hkInt8 m_ownerOffset;   // +0x10
};

// hkpRigidBody: only the contact point callback delay (hkpEntity, +0xAA) is used here.
class hkpRigidBody : public hkReferencedObject {
public:
    hkUint16 getContactPointCallbackDelay() const { return m_contactPointCallbackDelay; }

    char m_pad[0xAA - 0x8];
    hkUint16 m_contactPointCallbackDelay;   // +0xAA
};

// hkpContactMgr (Physics/Collide/Agent/ContactMgr/hkpContactMgr.h) and hkpDynamicsContactMgr.
class hkpContactMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum Type {
        TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR,
        TYPE_REPORT_CONTACT_MGR,
        TYPE_CONVEX_LIST_CONTACT_MGR,
        TYPE_NULL_CONTACT_MGR,
        TYPE_USER_CONTACT_MGR,
        TYPE_MAX
    };
    hkpContactMgr(Type type) : m_type(type) {}

    Type m_type;   // +0x8
};

class hkpDynamicsContactMgr : public hkpContactMgr {
public:
    hkpDynamicsContactMgr(Type type) : hkpContactMgr(type) {}
};

class hkpContactMgrFactory : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                            const hkpCollisionInput &env);
};

// hkpReportContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.h), 0x1C bytes.
class hkpReportContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpReportContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);

    class Factory : public hkpContactMgrFactory {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
        Factory(hkpWorld *mgr);
        virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                const hkpCollisionInput &env);

        hkpWorld *m_world;   // +0x8
    };

    hkpWorld *m_world;                       // +0xC
    hkpRigidBody *m_bodyA;                   // +0x10
    hkpRigidBody *m_bodyB;                   // +0x14
    hkUint16 m_skipNextNprocessCallbacks;    // +0x18
};

inline hkpReportContactMgr::hkpReportContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB)
    : hkpDynamicsContactMgr(hkpContactMgr::TYPE_REPORT_CONTACT_MGR)
{
    m_skipNextNprocessCallbacks = hkMath::min2(bodyA->getContactPointCallbackDelay(), bodyB->getContactPointCallbackDelay());
    m_world = world;
    m_bodyA = bodyA;
    m_bodyB = bodyB;
}

hkpContactMgr *hkpReportContactMgr::Factory::createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                               const hkpCollisionInput &env)
{
    hkpRigidBody *bodyA = reinterpret_cast<hkpRigidBody *>(a.getOwner());
    hkpRigidBody *bodyB = reinterpret_cast<hkpRigidBody *>(b.getOwner());
    hkpReportContactMgr *mgr = new hkpReportContactMgr(m_world, bodyA, bodyB);
    return mgr;
}
