// hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *mgr) (Physics/Collide/Agent/CompoundAgent/BvTree/
// hkpBvTreeAgent.cpp), /O2 /QVMXReserve (flag file): the hkpCollisionAgent base, an empty
// m_collisionPartners array, then both corners of m_cachedAabb set to HK_REAL_MAX (hkVector4::setAll
// stores the float into the quad and splats it).
// HK_REAL_MAX is a literal: the game's copy is lbl_82134508, which Matching units reference, so it is a
// static constant with that name (an extern is reloaded after the array stores).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vspltw(__vector4 a, unsigned int b);

// HK_REAL_MAX (3.40282e+38f); the game's copy keeps its lbl_ name (see above).
static const float lbl_82134508 = 3.40282e+38f;

class hkVector4 {
public:
    HK_FORCE_INLINE void setAll(hkReal a)
    {
        m_quad.vector4_f32[0] = a;
        m_quad = __vspltw(m_quad, 0);
    }
    __vector4 m_quad;
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpContactMgr;
class hkpCollisionAgent;
typedef hkUint32 hkpShapeKey;

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8).
class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr);

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                // +0x20
};

hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
{
    m_cachedAabb.m_max.setAll(lbl_82134508);
    m_cachedAabb.m_min.setAll(lbl_82134508);
}
