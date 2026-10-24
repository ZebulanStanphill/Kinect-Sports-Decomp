// hkpBvTreeAgent's agent creation function (Physics/Collide/Agent/Deprecated/BvTree): `new hkpBvTreeAgent(mgr)`;
// keeps its fn_ name.
//
// Layout (0x40 bytes, class allocator): hkpCollisionAgent (hkReferencedObject + m_contactMgr at +0x8),
// hkArray m_collisionPartners at +0xc, the cached AABB at +0x20 (min) and +0x30 (max). The constructor
// sets both corners to HK_REAL_MAX with hkVector4::setAll (store the float, then splat it).
//
// The original uses the literal HK_REAL_MAX (one lfs for both setAll calls); the game's copy of that
// constant is lbl_82134508, which Matching C units reference, so it is declared as a known constant.
// Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" __vector4 __vspltw(__vector4, unsigned int);

extern "C" __declspec(selectany) const hkReal lbl_82134508 = 3.40282e+38f;   // HK_REAL_MAX

class hkVector4 {
public:
    HK_FORCE_INLINE void setAll(hkReal x)
    {
        m_quad.vector4_f32[0] = x;
        m_quad = __vspltw(m_quad, 0);
    }
    hkQuadReal m_quad;
};

class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

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
        m_cachedAabb.m_max.setAll(lbl_82134508);
        m_cachedAabb.m_min.setAll(lbl_82134508);
    }

    hkArray<hkpBvAgentEntryInfo *> m_collisionPartners;   // +0xc
    hkAabb m_cachedAabb;                                   // +0x20
};

extern "C" hkpCollisionAgent *fn_82D560E8(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    return new hkpBvTreeAgent(mgr);
}
