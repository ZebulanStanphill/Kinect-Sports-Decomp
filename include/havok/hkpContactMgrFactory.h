// hkpContactMgrFactory (Physics/Collide/Agent/ContactMgr/hkpContactMgrFactory.h): makes the contact manager
// for a new pair of collidables; the collision dispatcher holds one per pair of response types. Its one
// function after hkReferencedObject's is pure (each Factory class overrides it); the name and parameters
// follow Havok's header.
#ifndef HAVOK_HKPCONTACTMGRFACTORY_H
#define HAVOK_HKPCONTACTMGRFACTORY_H

#include "havok/hkBase.h"

class hkpCollidable;
class hkpContactMgr;
class hkpCollisionInput;   // "class" in the game's mangled names (82DAB540)

class hkpContactMgrFactory : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                            const hkpCollisionInput &env) = 0;   // +0xC
};

#endif
