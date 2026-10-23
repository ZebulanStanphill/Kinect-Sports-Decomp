// hkpBoxBoxAgent::createBoxBoxAgent (Physics/Collide/Agent/ConvexAgent/BoxBox/hkpBoxBoxAgent.cpp): the box-box
// agent when the tolerance is small against both boxes, otherwise the generic convex agent
// (fn_82D75830, hkpGskfAgent's create function, which keeps its fn_ name). The agent is allocated with the
// class allocator (no null check) and its constructor is inlined; the manifold's constructor is out of line
// (fn_82D781D0, a Matching C unit).
#include "havok/hkBase.h"

class hkpCdBody;
class hkpContactMgr;
class hkpConstraintOwner;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
class hkpShape;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

extern "C" const float lbl_8213962C;

class hkpCdBody {
public:
    const hkpShape *getShape() const { return m_shape; }
    const hkpShape *m_shape;   // +0x0
};

struct hkpCollisionDispatcher;
struct hkpCollisionInput {
    hkReal getTolerance() const { return m_tolerance; }
    hkpCollisionDispatcher *m_dispatcher;   // +0x0
    hkInt32 m_weldClosestPoints;            // +0x4
    hkReal m_tolerance;                     // +0x8
};

// hkpBoxShape: hkpConvexShape (radius at +0x10), then hkVector4 m_halfExtents (+0x20).
class hkpShape : public hkReferencedObject {
public:
    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};
class hkpBoxShape : public hkpShape {
public:
    hkReal m_radius;           // +0x10
    hkUint32 m_pad[3];
    hkReal m_halfExtents[4];   // +0x20
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

class hkpIterativeLinearCastAgent : public hkpCollisionAgent {
public:
    hkpIterativeLinearCastAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
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

    if (input.getTolerance() < boxA->m_halfExtents[3] * lbl_8213962C &&
        input.getTolerance() < boxB->m_halfExtents[3] * lbl_8213962C) {
        hkpBoxBoxAgent *agent = new hkpBoxBoxAgent(mgr);
        return agent;
    }
    return fn_82D75830(bodyA, bodyB, input, mgr);
}
