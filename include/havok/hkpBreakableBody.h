// hkpBreakableBody (Physics/Dynamics/Destruction/BreakableBody/hkpBreakableBody.h), 8 bytes: the destruction
// layer's handle on a rigid body (hkpEntity::m_breakableBody). The game's hkClass (initialiser 831333F8) gives the
// parent (hkReferencedObject), the size and no members. The game has no vtable or subclass of it; the one
// function after hkReferencedObject's is cloneBreakableBody at +0xC, which hkpRigidBody::clone (82D8C6B0) calls.
// Its name and parameters follow Havok's header.
#ifndef HAVOK_HKPBREAKABLEBODY_H
#define HAVOK_HKPBREAKABLEBODY_H

#include "havok/hkBase.h"

class hkpRigidBody;

class hkpBreakableBody : public hkReferencedObject {
public:
    virtual hkpBreakableBody *cloneBreakableBody(hkpRigidBody *clonedBody) const;   // +0xC
};

#endif
