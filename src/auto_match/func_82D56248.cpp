// hkpBvTreeAgent::createBvBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp):
// the body with the smaller object radius goes first; otherwise the symmetric agent flips them.
// Both arms inline hkpBvTreeAgent(hkpContactMgr *), whose cached AABB is set to HK_REAL_MAX.
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vspltw(__vector4, unsigned int);

class hkVector4 {
public:
    HK_FORCE_INLINE void setAll(hkReal x) { q.f[0] = x; q = __vspltw(q, 0); }
    __vector4 q;
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpCdBodyPairCollector;
class hkpCdPointCollector;
class hkpContactMgr;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef hkUint32 hkpShapeKey;

// HK_REAL_MAX. Havok writes the literal, so the compiler knows the value cannot
// change: it loads it once for both setAll calls and schedules the load above the
// hkArray stores. Declaring it as a plain extern makes the compiler reload it
// after the vector stores; defining it (selectany, like a __real@ constant) keeps
// the configured name and the original's code.
extern "C" __declspec(selectany) const float lbl_82134508 = 3.40282e+38f;

struct hkMotionState {
    char m_transformAndSweptTransform[0xA0];
    hkReal m_objectRadius;   // +0xA0
};

class hkpCdBody {
public:
    HK_FORCE_INLINE const hkMotionState *getMotionState() const { return m_motion; }

    const void *m_shape;             // +0x0
    hkpShapeKey m_shapeKey;          // +0x4
    const hkMotionState *m_motion;   // +0x8
    const hkpCdBody *m_parent;       // +0xC
};

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

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
    HK_FORCE_INLINE hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
    {
        m_cachedAabb.m_max.setAll(lbl_82134508);
        m_cachedAabb.m_min.setAll(lbl_82134508);
    }
    virtual ~hkpBvTreeAgent();

    static hkpCollisionAgent *HK_CALL createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                      const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                 // +0x20
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}
};

hkpCollisionAgent *HK_CALL hkpBvTreeAgent::createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    if (bodyA.getMotionState()->m_objectRadius < bodyB.getMotionState()->m_objectRadius)
    {
        return new hkpBvTreeAgent(mgr);
    }
    return new hkpSymmetricAgent<hkpBvTreeAgent>(mgr);
}
