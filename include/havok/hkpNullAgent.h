// hkpNullAgent (Physics/Collide/Agent/MiscAgent/Null/hkpNullAgent.h), 0xC bytes: the agent for pairs that do
// not collide; an hkpCollisionAgent without a contact manager (the constructor, 82D74750, passes HK_NULL).
// Every query slot of its vtable (+0xC to +0x1C) is the game's one empty function (82BA02A8); none is
// declared here. The game keeps one static instance (lbl_83182AFC, destroyed at exit by fn_83141B50); the
// destructor is the implicit one.
#ifndef HAVOK_HKPNULLAGENT_H
#define HAVOK_HKPNULLAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpNullAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullAgent();   // out of line (82D74750)
};

#endif
