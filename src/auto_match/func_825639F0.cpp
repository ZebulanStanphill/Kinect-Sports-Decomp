// Game code: builds a rigid body from a shape, its mass properties, a position and a rotation, with
// the given friction and restitution, and stores the caller's user data in it. Same shape as
// func_82563908.cpp (Matching).
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"

class hkpMassProperties
{
  public:
    hkReal m_volume;           // +0x00
    hkReal m_mass;             // +0x04
    hkVector4 m_centerOfMass;  // +0x10
    hkMatrix3 m_inertiaTensor; // +0x20
};

extern "C" hkpRigidBody *fn_825639F0(const hkpShape *shape, hkUlong userData,
                                     const hkpMassProperties *massProperties, __vector4 position,
                                     __vector4 rotation, hkReal friction, hkReal restitution)
{
    hkpRigidBodyCinfo info;
    hkpRigidBody *body;

    info.m_position.m_quad = position;
    info.m_rotation.m_vec.m_quad = rotation;
    info.m_shape = shape;
    info.m_friction = friction;
    info.m_motionType = 1;
    info.m_restitution = restitution;
    info.m_collisionFilterInfo = 2;
    info.m_enableDeactivation = 1;
    info.m_qualityType = 4;
    info.m_numShapeKeysInContactPointProperties = 2;
    info.m_inertiaTensor = massProperties->m_inertiaTensor;
    info.m_centerOfMass = massProperties->m_centerOfMass;
    info.m_mass = massProperties->m_mass;
    body = new hkpRigidBody(info);
    body->m_userData = userData;
    return body;
}
