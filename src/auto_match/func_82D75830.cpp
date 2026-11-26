// hkpGskfAgent's creation function (Physics/Collide/Agent/ConvexAgent/Gjk/hkpGskfAgent.cpp; keeps its fn_ name):
// an hkpGskfAgent with a contact manager, else an hkpGskBaseAgent. hkpGskfAgent's constructor is out of line
// (82D757E8) but inlined here, so the unit defines it, as the file does.
#include "havok/hkpGskfAgent.h"

HK_FORCE_INLINE hkpGskfAgent::hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr)
    : hkpGskBaseAgent(bodyA, bodyB, mgr)
{
}

extern "C" hkpGskBaseAgent *fn_82D75830(const hkpCdBody &a, const hkpCdBody &b, void *, hkpContactMgr *c)
{
    if (c) {
        hkpGskfAgent *p = new hkpGskfAgent(a, b, c);
        return p;
    }
    return new hkpGskBaseAgent(a, b, 0);
}
