// hkpRigidBodyCinfo (Physics/Dynamics/Entity/hkpRigidBodyCinfo.h), 0xC0 bytes: everything
// hkpRigidBody's constructor needs. The layout is the one that constructor reads (82D8C258) and the default
// constructor fills (82D8B168); the game has no reflection data for the class, so its name and the member
// names are Havok's.
#ifndef HAVOK_HKPRIGIDBODYCINFO_H
#define HAVOK_HKPRIGIDBODYCINFO_H

#include "havok/hkBase.h"
#include "havok/hkMatrix3.h"
#include "havok/hkQuaternion.h"

class hkLocalFrame;
class hkpShape;

class hkpRigidBodyCinfo {
public:
    // Out of line (82D8B168). The defaults: response 1, callback delay 0xFFFF, identity rotation and inertia,
    // mass 1, angular damping 0.05, gravity factor 1, friction 0.5, restitution 0.4, maximum velocities 200,
    // allowed penetration depth -1, motion type 1 (dynamic), deactivation on, solver deactivation 2, quality
    // type -1 (chosen by the body's constructor from the motion type).
    hkpRigidBodyCinfo();

    hkUint32 m_collisionFilterInfo;                  // +0x00
    const hkpShape *m_shape;                         // +0x04
    hkLocalFrame *m_localFrame;                      // +0x08
    hkInt8 m_collisionResponse;                      // +0x0C  hkpMaterial::ResponseType
    hkUint16 m_contactPointCallbackDelay;            // +0x0E
    hkVector4 m_position;                            // +0x10
    hkQuaternion m_rotation;                         // +0x20
    hkVector4 m_linearVelocity;                      // +0x30
    hkVector4 m_angularVelocity;                     // +0x40
    hkMatrix3 m_inertiaTensor;                       // +0x50
    hkVector4 m_centerOfMass;                        // +0x80
    hkReal m_mass;                                   // +0x90
    hkReal m_linearDamping;                          // +0x94
    hkReal m_angularDamping;                         // +0x98
    hkReal m_gravityFactor;                          // +0x9C
    hkReal m_friction;                               // +0xA0
    hkReal m_restitution;                            // +0xA4
    hkReal m_maxLinearVelocity;                      // +0xA8
    hkReal m_maxAngularVelocity;                     // +0xAC
    hkReal m_allowedPenetrationDepth;                // +0xB0
    hkInt8 m_motionType;                             // +0xB4  hkpMotion::MotionType
    hkBool m_enableDeactivation;                     // +0xB5
    hkInt8 m_solverDeactivation;                     // +0xB6
    hkInt8 m_qualityType;                            // +0xB7  -1 = not set
    hkInt8 m_autoRemoveLevel;                        // +0xB8
    hkUint8 m_responseModifierFlags;                 // +0xB9
    hkInt8 m_numShapeKeysInContactPointProperties;   // +0xBA  negative = ask the shape
    hkBool m_forceCollideOntoPpu;                    // +0xBB
};

#endif
