// hkpBvTreeAgent's agent creation function (Physics/Collide/Agent/Deprecated/BvTree): `new hkpBvTreeAgent(mgr)`;
// keeps its fn_ name.
//
// The original uses the literal HK_REAL_MAX (one lfs for both setAll calls); the game's copy of that
// constant is __real@7f7fffee, which Matching C units reference, so it is declared as a known constant.
// Built with /O2 /QVMXReserve.
#include "havok/hkpBvTreeAgent.h"

// The constructor is defined in this file (out of line, 82D56088), so the compiler inlines it here.
hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
{
    m_cachedAabb.m_max.setAll(3.40282e+38f);
    m_cachedAabb.m_min.setAll(3.40282e+38f);
}

extern "C" hkpCollisionAgent *fn_82D560E8(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    return new hkpBvTreeAgent(mgr);
}
