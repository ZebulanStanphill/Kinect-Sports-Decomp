// Game code: builds a sphere rigid body for an object (radius at +0xb0) and hands the body and shape to
// its owner (+0xa8). setMotionType (fn_82D8B6C8) and computeSphereVolumeMassProperties (fn_82DE5138) keep
// their fn_ names.
// /O1 /QVMXReserve: the game's zero vector is VMX register 77 (__VMXGetReg needs /QVMXReserve).
// Same shape as func_822E8BC8.cpp (Matching).
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpMassProperties.h"

extern "C" __vector4 __VMXGetReg(int n);

extern "C" {
extern const hkQuadReal lbl_82196750;    // (0, 0, 0, 1): the identity quaternion
extern float lbl_831C9CE0[];             // game tuning values
}

extern "C" {
int fn_82DE5138(hkReal radius, hkReal mass, hkpMassProperties &result);   // computeSphereVolumeMassProperties
void fn_82D8B6C8(hkpRigidBody *self, int motionType, int activation, int updateFilter);   // setMotionType
}

struct Owner {
    char m_pad0[0x7c0];
    hkpRigidBody *m_body;       // +0x7c0
    hkpSphereShape *m_shape;    // +0x7c4
};

struct Self {
    char m_pad0[0xa8];
    Owner *m_owner;     // +0xa8
    int m_pad_ac;
    float m_radius;     // +0xb0
};

extern "C" void fn_823ADFB8(Self *self)
{
    hkpSphereShape *sphere = new hkpSphereShape(self->m_radius);

    hkpMassProperties mp;
    fn_82DE5138(self->m_radius, lbl_831C9CE0[0x4a4 / 4], mp);

    hkpRigidBodyCinfo info;
    info.m_shape = (const hkpShape *)sphere;
    info.m_position.m_quad = __VMXGetReg(77);
    info.m_rotation.m_vec.m_quad = lbl_82196750;
    info.m_linearVelocity.m_quad = __VMXGetReg(77);
    info.m_angularVelocity.m_quad = __VMXGetReg(77);
    info.m_motionType = 1;
    info.m_collisionFilterInfo = 2;
    info.m_qualityType = 9;
    info.m_contactPointCallbackDelay = 0;
    info.m_mass = mp.m_mass;   // hkpRigidBodyCinfo::setMassProperties
    info.m_inertiaTensor = mp.m_inertiaTensor;
    info.m_centerOfMass = mp.m_centerOfMass;
    info.m_angularDamping = lbl_831C9CE0[0x4b4 / 4];
    info.m_linearDamping = lbl_831C9CE0[0x4b0 / 4];
    info.m_friction = lbl_831C9CE0[0x4a8 / 4];
    info.m_restitution = lbl_831C9CE0[0x4ac / 4];

    hkpRigidBody *body = new hkpRigidBody(info);
    fn_82D8B6C8(body, 4, 1, 0);
    body->m_userData = (hkUlong)self->m_owner;
    self->m_owner->m_shape = sphere;
    self->m_owner->m_body = body;
    sphere->removeReference();
}
