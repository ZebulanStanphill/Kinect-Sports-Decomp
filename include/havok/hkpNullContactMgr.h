// hkpNullContactMgr and hkpNullContactMgrFactory (Physics/Dynamics/Collide/ContactListener/hkpNullContactMgr.h and
// hkpNullContactMgrFactory.h, the paths are Havok's): the contact manager that ignores every contact (0xC bytes, no
// members of its own, type TYPE_NULL_CONTACT_MGR) and the factory that hands out its one embedded manager (0x14
// bytes, the manager at +0x8). Declared together because the factory holds the manager by value and they are
// always used together.
// The layout and the constructors come from 82D80DF0 (which news the factory with both constructors inlined) and
// the factory's deleting destructor 82D89778 (compiler generated from the implicit destructors). The manager's
// vtable (??_7hkpNullContactMgr@@6B@) overrides hkpContactMgr's functions with folded ones (returning 0 or doing
// nothing). The factory's vtable has createContactMgr at +0xC (8236D498,
// folded: it returns this + 8) and overrides calcContentStatistics (82D807C8, hkpContactMgrFactory's, which
// hkpContactMgrFactory.h does not declare).
#ifndef HAVOK_HKPNULLCONTACTMGR_H
#define HAVOK_HKPNULLCONTACTMGR_H

#include "havok/hkBase.h"
#include "havok/hkpContactMgr.h"
#include "havok/hkpContactMgrFactory.h"

class hkpNullContactMgr : public hkpContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullContactMgr() : hkpContactMgr(TYPE_NULL_CONTACT_MGR) {}
    virtual hkUint16 addContactPoint(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                                     hkpProcessCollisionOutput &output, const hkpGskCache *contactCache,
                                     hkContactPoint &cp);
    virtual hkResult reserveContactPoints(int numPoints);
    virtual void removeContactPoint(hkUint16 cpId, hkpConstraintOwner &constraintOwner);
    virtual void processContact(const hkpCollidable &a, const hkpCollidable &b, const hkpProcessCollisionInput &input,
                                hkpProcessCollisionData &collisionData);
    virtual ToiAccept addToi(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                             hkpProcessCollisionOutput &output, hkReal toi, hkContactPoint &cp,
                             const hkpGskCache *gskCache, hkReal &projectedVelocity,
                             hkpContactPointProperties &propertiesOut);
    virtual void removeToi(hkpConstraintOwner &constraintOwner, hkpContactPointProperties &properties);
    virtual void cleanup();
};

class hkpNullContactMgrFactory : public hkpContactMgrFactory {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullContactMgrFactory() {}
    virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                            const hkpCollisionInput &env);   // +0xC

    hkpNullContactMgr m_contactMgr;   // +0x8
};

#endif
