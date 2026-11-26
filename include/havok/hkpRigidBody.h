// hkpRigidBody (Physics/Dynamics/Entity/hkpRigidBody.h): an entity; it adds
// no member.
#ifndef HAVOK_HKPRIGIDBODY_H
#define HAVOK_HKPRIGIDBODY_H

#include "havok/hkpEntity.h"

class hkpRigidBody;
extern "C" void fn_82D89BD8(hkpRigidBody *self);   // hkpEntity::activate

class hkpRigidBody : public hkpEntity {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ENTITY);
    hkpRigidBody(hkFinishLoadedObjectFlag flag) : hkpEntity(flag) {}
    // ??_7hkpRigidBody@@6B@ (8213C624): setShape is 82D8B760, getMotionState 82D8B3E0, and the last slot is
    // clone (82D8C6B0).
    virtual hkWorldOperation::Result setShape(const hkpShape *shape);
    virtual hkMotionState *getMotionState();
    virtual hkpRigidBody *clone() const;   // +0x18

    hkpWorld *getWorld() const { return m_world; }
    const hkpCollidable *getCollidable() const { return &m_collidable; }
    hkpMotion *getRigidMotion() { return &m_motion; }
    const hkpMotion *getMotion() const { return &m_motion; }
    const hkVector4 &getPosition() const { return m_motion.getPosition(); }
    hkInt8 getQualityType() const { return m_collidable.m_broadPhaseHandle.m_objectQualityType; }
    hkUint16 getContactPointCallbackDelay() const { return m_contactPointCallbackDelay; }
    const hkTransform &getTransform() const { return m_motion.m_motionState.m_transform; }
    const hkVector4 &getLinearVelocity() const { return m_motion.m_linearVelocity; }
    void activate() { fn_82D89BD8(this); }
    void setLinearVelocity(const hkVector4 &v)
    {
        activate();
        getRigidMotion()->setLinearVelocity(v);
    }
    void setAngularVelocity(const hkVector4 &v)
    {
        activate();
        getRigidMotion()->setAngularVelocity(v);
    }
    void applyPointImpulse(const hkVector4 &imp, const hkVector4 &p)
    {
        activate();
        getRigidMotion()->applyPointImpulse(imp, p);
    }
};

#endif
