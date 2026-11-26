// hkpBvTreeAgent's agent creation function (Physics/Collide/Agent/Deprecated/BvTree): `new hkpBvTreeAgent(mgr)`;
// keeps its fn_ name.
//
// Layout (0x40 bytes, class allocator): hkpCollisionAgent (hkReferencedObject + m_contactMgr at +0x8),
// hkArray m_collisionPartners at +0xc, the cached AABB at +0x20 (min) and +0x30 (max). The constructor
// sets both corners to HK_REAL_MAX with hkVector4::setAll (store the float, then splat it).
//
// The original uses the literal HK_REAL_MAX (one lfs for both setAll calls); the game's copy of that
// constant is __real@7f7fffee, which Matching C units reference, so it is declared as a known constant.
// Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"
#include "havok/hkAabb.h"

class hkpCdBody;
struct hkpCollisionInput;
class hkpContactMgr;

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

struct hkpBvAgentEntryInfo;

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_FORCE_INLINE hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
    {
        m_cachedAabb.m_max.setAll(3.40282e+38f);
        m_cachedAabb.m_min.setAll(3.40282e+38f);
    }

    hkArray<hkpBvAgentEntryInfo *> m_collisionPartners;   // +0xc
    hkAabb m_cachedAabb;                                   // +0x20
};

extern "C" hkpCollisionAgent *fn_82D560E8(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    return new hkpBvTreeAgent(mgr);
}
