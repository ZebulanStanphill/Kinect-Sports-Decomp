// hkpAngularDashpotAction::hkpAngularDashpotAction(hkpEntity *, hkpEntity *, hkUlong)
// Built with /O2 /QVMXReserve (v0 for the quaternion copy). lbl_82186E6C is the
// 0.1f literal (__real@3dcccccd), renamed in the map.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

class hkVector4 {
public:
    hkVector4() {}
    __forceinline hkVector4(const hkVector4 &x) { m_quad = x.m_quad; }
    __forceinline void operator=(const hkVector4 &x) { m_quad = x.m_quad; }
    __vector4 m_quad;
};

// The identity quaternion (0, 0, 0, 1) from Havok's vector constants.
extern "C" const hkVector4 lbl_82132D50;

class hkQuaternion {
public:
    __forceinline void setIdentity() { m_vec = lbl_82132D50; }
    hkVector4 m_vec;
};

class hkpEntity;
class hkpWorld;
class hkpSimulationIsland;

class hkpAction : public hkReferencedObject {
public:
    hkpWorld *m_world;              // +0x08
    hkpSimulationIsland *m_island;  // +0x0c
    hkUlong m_userData;             // +0x10
    hkStringPtr m_name;             // +0x14
};

class hkpBinaryAction : public hkpAction {
public:
    hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);
    hkpEntity *m_entityA;           // +0x18
    hkpEntity *m_entityB;           // +0x1c
};

class hkpAngularDashpotAction : public hkpBinaryAction {
public:
    hkpAngularDashpotAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);
    hkQuaternion m_rotation;        // +0x20
    hkReal m_strength;              // +0x30
    hkReal m_damping;               // +0x34
};

hkpAngularDashpotAction::hkpAngularDashpotAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
    : hkpBinaryAction(entityA, entityB, userData), m_strength(0.1f), m_damping(0.01f)
{
    m_rotation.setIdentity();
}
