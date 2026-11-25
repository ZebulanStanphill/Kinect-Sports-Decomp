// Game code: builds a rigid body from a shape, a position and a rotation, with the given friction and
// restitution, and stores the caller's user data in it. hkpRigidBodyCinfo's constructor (fn_82D8B168)
// and hkpRigidBody's (fn_82D8C258) keep their fn_ names. Same shape as func_822E8BC8.cpp (Matching).
#include "havok/hkBase.h"
#include "havok/hkMatrix3.h"

class hkpShape;

class hkpRigidBodyCinfo
{
  public:
    hkUint32 m_collisionFilterInfo;                // +0x00
    const hkpShape *m_shape;                       // +0x04
    void *m_localFrame;                            // +0x08
    hkInt8 m_collisionResponse;                    // +0x0c
    hkUint16 m_contactPointCallbackDelay;          // +0x0e
    hkVector4 m_position;                          // +0x10
    hkVector4 m_rotation;                          // +0x20
    hkVector4 m_linearVelocity;                    // +0x30
    hkVector4 m_angularVelocity;                   // +0x40
    hkMatrix3 m_inertiaTensor;                     // +0x50
    hkVector4 m_centerOfMass;                      // +0x80
    hkReal m_mass;                                 // +0x90
    hkReal m_linearDamping;                        // +0x94
    hkReal m_angularDamping;                       // +0x98
    hkReal m_gravityFactor;                        // +0x9c
    hkReal m_friction;                             // +0xa0
    hkReal m_restitution;                          // +0xa4
    hkReal m_maxLinearVelocity;                    // +0xa8
    hkReal m_maxAngularVelocity;                   // +0xac
    hkReal m_allowedPenetrationDepth;              // +0xb0
    hkInt8 m_motionType;                           // +0xb4
    hkBool m_enableDeactivation;                   // +0xb5
    hkInt8 m_solverDeactivation;                   // +0xb6
    hkInt8 m_qualityType;                          // +0xb7
    hkInt8 m_autoRemoveLevel;                      // +0xb8
    hkUint8 m_responseModifierFlags;               // +0xb9
    hkInt8 m_numShapeKeysInContactPointProperties; // +0xba
    hkBool m_forceCollideOntoPpu;                  // +0xbb
};

class hkpRigidBody : public hkReferencedObject
{
  public:
    void *m_world;      // +0x08
    hkUlong m_userData; // +0x0c
    char m_pad10[0x210];
};

extern "C" {
void fn_82D8B168(hkpRigidBodyCinfo *self);                                    // hkpRigidBodyCinfo()
hkpRigidBody *fn_82D8C258(hkpRigidBody *self, const hkpRigidBodyCinfo *info); // hkpRigidBody(info)
}

extern "C" hkpRigidBody *fn_82563908(const hkpShape *shape, hkUlong userData, __vector4 position,
                                     __vector4 rotation, hkReal friction, hkReal restitution)
{
    hkpRigidBodyCinfo info;
    hkpRigidBody *body;

    fn_82D8B168(&info);
    info.m_collisionFilterInfo = 1;
    info.m_motionType = 5;
    info.m_position.m_quad = position;
    info.m_qualityType = 0;
    info.m_rotation.m_quad = rotation;
    info.m_shape = shape;
    info.m_friction = friction;
    info.m_numShapeKeysInContactPointProperties = 2;
    info.m_restitution = restitution;
    body = fn_82D8C258((hkpRigidBody *)hkpRigidBody::operator new(sizeof(hkpRigidBody)), &info);
    body->m_userData = userData;
    return body;
}
