// Game code: builds a sphere rigid body for an object (radius at +0xb0) and hands the body and shape to
// its owner (+0xa8). hkpSphereShape's constructor is the only C++ symbol (??0hkpSphereShape@@QAA@M@Z);
// hkpRigidBodyCinfo's constructor (fn_82D8B168), hkpRigidBody's (fn_82D8C258), setMotionType
// (fn_82D8B6C8) and computeSphereVolumeMassProperties (fn_82DE5138) keep their fn_ names.
// /O1 /QVMXReserve: the game's zero vector is VMX register 77 (__VMXGetReg needs /QVMXReserve).
// Same shape as func_822E8BC8.cpp (Matching).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);
extern "C" __vector4 __VMXGetReg(int n);

extern "C" {
extern float lbl_821CC160;               // the game's 0.0f
extern const hkQuadReal lbl_82196750;    // (0, 0, 0, 1): the identity quaternion
extern float lbl_831C9CE0[];             // game tuning values
}

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    hkQuadReal m_quad;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE void operator=(const hkMatrix3 &m)
    {
        m_col0 = m.m_col0;
        m_col1 = m.m_col1;
        m_col2 = m.m_col2;
    }
    HK_FORCE_INLINE void setZero()
    {
        hkVector4 zero;
        zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
    }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

struct hkpMassProperties {
    HK_FORCE_INLINE hkpMassProperties() : m_volume(lbl_821CC160), m_mass(lbl_821CC160)
    {
        m_centerOfMass.setZero4();
        m_inertiaTensor.setZero();
    }
    hkReal m_volume;              // +0x00
    hkReal m_mass;                // +0x04
    hkVector4 m_centerOfMass;     // +0x10
    hkMatrix3 m_inertiaTensor;    // +0x20
};

class hkpSphereShape : public hkReferencedObject {
public:
    hkpSphereShape(hkReal radius);
    char m_data[24];
};

class hkpRigidBodyCinfo {
public:
    HK_FORCE_INLINE void setMassProperties(const hkpMassProperties &mp)
    {
        m_mass = mp.m_mass;
        m_inertiaTensor = mp.m_inertiaTensor;
        m_centerOfMass = mp.m_centerOfMass;
    }
    hkUint32 m_collisionFilterInfo;          // +0x00
    const hkpSphereShape *m_shape;           // +0x04
    void *m_localFrame;                      // +0x08
    hkInt8 m_collisionResponse;              // +0x0c
    hkUint16 m_contactPointCallbackDelay;    // +0x0e
    hkVector4 m_position;                    // +0x10
    hkVector4 m_rotation;                    // +0x20
    hkVector4 m_linearVelocity;              // +0x30
    hkVector4 m_angularVelocity;             // +0x40
    hkMatrix3 m_inertiaTensor;               // +0x50
    hkVector4 m_centerOfMass;                // +0x80
    hkReal m_mass;                           // +0x90
    hkReal m_linearDamping;                  // +0x94
    hkReal m_angularDamping;                 // +0x98
    hkReal m_gravityFactor;                  // +0x9c
    hkReal m_friction;                       // +0xa0
    hkReal m_restitution;                    // +0xa4
    hkReal m_maxLinearVelocity;              // +0xa8
    hkReal m_maxAngularVelocity;             // +0xac
    hkReal m_allowedPenetrationDepth;        // +0xb0
    hkInt8 m_motionType;                     // +0xb4
    hkBool m_enableDeactivation;             // +0xb5
    hkInt8 m_solverDeactivation;             // +0xb6
    hkInt8 m_qualityType;                    // +0xb7
    hkInt8 m_autoRemoveLevel;                // +0xb8
    hkUint8 m_responseModifierFlags;         // +0xb9
    hkInt8 m_numShapeKeysInContactPointProperties;  // +0xba
    hkBool m_forceCollideOntoPpu;            // +0xbb
};

class hkpRigidBody : public hkReferencedObject {
public:
    void *m_world;          // +0x08
    hkUlong m_userData;     // +0x0c
    char m_pad10[0x210];
};

extern "C" {
int fn_82DE5138(hkReal radius, hkReal mass, hkpMassProperties &result);   // computeSphereVolumeMassProperties
void fn_82D8B168(hkpRigidBodyCinfo *self);                                 // hkpRigidBodyCinfo()
hkpRigidBody *fn_82D8C258(hkpRigidBody *self, const hkpRigidBodyCinfo *info);   // hkpRigidBody(info)
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
    fn_82D8B168(&info);
    info.m_shape = sphere;
    info.m_position.m_quad = __VMXGetReg(77);
    info.m_rotation.m_quad = lbl_82196750;
    info.m_linearVelocity.m_quad = __VMXGetReg(77);
    info.m_angularVelocity.m_quad = __VMXGetReg(77);
    info.m_motionType = 1;
    info.m_collisionFilterInfo = 2;
    info.m_qualityType = 9;
    info.m_contactPointCallbackDelay = 0;
    info.setMassProperties(mp);
    info.m_angularDamping = lbl_831C9CE0[0x4b4 / 4];
    info.m_linearDamping = lbl_831C9CE0[0x4b0 / 4];
    info.m_friction = lbl_831C9CE0[0x4a8 / 4];
    info.m_restitution = lbl_831C9CE0[0x4ac / 4];

    hkpRigidBody *body = fn_82D8C258((hkpRigidBody *)hkpRigidBody::operator new(sizeof(hkpRigidBody)), &info);
    fn_82D8B6C8(body, 4, 1, 0);
    body->m_userData = (hkUlong)self->m_owner;
    self->m_owner->m_shape = sphere;
    self->m_owner->m_body = body;
    sphere->removeReference();
}
