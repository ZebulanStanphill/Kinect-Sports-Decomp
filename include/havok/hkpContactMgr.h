// hkpContactMgr (Physics/Collide/Agent/ContactMgr/hkpContactMgr.h), 0xC bytes: what a collision agent reports
// its contact points to; m_type says which manager it is. The game has no vtable of its own for it (it is
// abstract). Its vtable has seven slots after hkReferencedObject's: 82D5B3B0's subclass declares
// addContactPoint, reserveContactPoints, removeContactPoint, processContact (+0x18, which the agent sector
// job 82DC39A0 calls), addToiEvent, removeToiEvent and cleanup. Their parameters are not all known, so they
// are not declared here: the units that call them keep a local class. The enumerator names follow Havok's
// header.
#ifndef HAVOK_HKPCONTACTMGR_H
#define HAVOK_HKPCONTACTMGR_H

#include "havok/hkBase.h"

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

#endif
