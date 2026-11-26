// hkpBoxBoxAgent::createBoxBoxAgent (Physics/Collide/Agent/ConvexAgent/BoxBox/hkpBoxBoxAgent.cpp): the box-box
// agent when the tolerance is small against both boxes, otherwise the generic convex agent
// (fn_82D75830, hkpGskfAgent's create function, which keeps its fn_ name). The agent is allocated with the
// class allocator (no null check) and its constructor is inlined; the manifold's constructor is out of line
// (fn_82D781D0, a Matching C unit).
#include "havok/hkBase.h"
#include "havok/hkpIterativeLinearCastAgent.h"

extern "C" const float lbl_8213962C;

class hkpBoxShape : public hkpShape {
public:
    hkReal m_radius;           // +0x10
    hkUint32 m_pad[3];
    hkReal m_halfExtents[4];   // +0x20
};

// hkpBoxBoxManifold (0x40 bytes); its constructor is out of line, fn_82D781D0.
struct hkpBoxBoxManifold;
extern "C" void fn_82D781D0(hkpBoxBoxManifold *self);
struct __declspec(align(16)) hkpBoxBoxManifold {
    HK_FORCE_INLINE hkpBoxBoxManifold() { fn_82D781D0(this); }
    hkUint8 m_data[0x40];
};

extern "C" hkpCollisionAgent *fn_82D75830(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

class hkpBoxBoxAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpBoxBoxAgent(hkpContactMgr *contactMgr) : hkpIterativeLinearCastAgent(contactMgr) {}

    static hkpCollisionAgent *HK_CALL createBoxBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                        const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpBoxBoxManifold m_manifold;   // +0x10
};

hkpCollisionAgent *HK_CALL hkpBoxBoxAgent::createBoxBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    const hkpBoxShape *boxA = static_cast<const hkpBoxShape *>(bodyA.getShape());
    const hkpBoxShape *boxB = static_cast<const hkpBoxShape *>(bodyB.getShape());

    if (input.m_tolerance < boxA->m_halfExtents[3] * lbl_8213962C &&
        input.m_tolerance < boxB->m_halfExtents[3] * lbl_8213962C) {
        hkpBoxBoxAgent *agent = new hkpBoxBoxAgent(mgr);
        return agent;
    }
    return fn_82D75830(bodyA, bodyB, input, mgr);
}
