// Game code: builds a rigid body from a shape, a position and a rotation, with the given friction and
// restitution, and stores the caller's user data in it. Same shape as func_822E8BC8.cpp (Matching).
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"

extern "C" hkpRigidBody *fn_82563908(const hkpShape *shape, hkUlong userData, __vector4 position,
                                     __vector4 rotation, hkReal friction, hkReal restitution)
{
    hkpRigidBodyCinfo info;
    hkpRigidBody *body;

    info.m_collisionFilterInfo = 1;
    info.m_motionType = 5;
    info.m_position.m_quad = position;
    info.m_qualityType = 0;
    info.m_rotation.m_vec.m_quad = rotation;
    info.m_shape = shape;
    info.m_friction = friction;
    info.m_numShapeKeysInContactPointProperties = 2;
    info.m_restitution = restitution;
    body = new hkpRigidBody(info);
    body->m_userData = userData;
    return body;
}
