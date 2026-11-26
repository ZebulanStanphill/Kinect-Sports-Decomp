// hkpRigidBodyCinfo::hkpRigidBodyCinfo() (Physics/Dynamics/Entity/hkpRigidBodyCinfo.cpp): the defaults.
#include "havok/hkpRigidBodyCinfo.h"

hkpRigidBodyCinfo::hkpRigidBodyCinfo()
{
    m_position.setZero4();
    m_rotation.setIdentity();
    m_linearVelocity.setZero4();
    m_angularVelocity.setZero4();
    m_inertiaTensor.setIdentity();
    m_centerOfMass.setZero4();
    m_mass = 1.0f;
    m_linearDamping = 0.0f;
    m_angularDamping = 0.05f;
    m_gravityFactor = 1.0f;
    m_friction = 0.5f;
    m_restitution = 0.4f;
    m_maxLinearVelocity = 200.0f;
    m_maxAngularVelocity = 200.0f;
    m_allowedPenetrationDepth = -1.0f;
    m_motionType = 1;
    m_enableDeactivation = true;
    m_solverDeactivation = 2;
    m_qualityType = -1;
    m_collisionResponse = 1;
    m_contactPointCallbackDelay = 0xffff;
    m_collisionFilterInfo = 0;
    m_shape = HK_NULL;
    m_localFrame = HK_NULL;
    m_autoRemoveLevel = 0;
    m_responseModifierFlags = 0;
    m_numShapeKeysInContactPointProperties = 0;
    m_forceCollideOntoPpu = false;
}
