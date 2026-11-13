// hkpSpringAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpSpringAction.cpp). Kept as an extern "C" function under its fn_ name with an explicit self;
// classes as in func_82DEEEB8.cpp.
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

class hkpEntity;
class hkpWorld;
class hkpSimulationIsland;
class hkpPhantom;

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

class hkpSpringAction : public hkpBinaryAction {
public:
    hkpSpringAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);
    hkVector4 m_lastForce;          // +0x20
    hkVector4 m_positionAinA;       // +0x30
    hkVector4 m_positionBinB;       // +0x40
    hkReal m_restLength;            // +0x50
    hkReal m_strength;              // +0x54
    hkReal m_damping;               // +0x58
    hkBool m_onCompression;         // +0x5c
    hkBool m_onExtension;           // +0x5d
};

extern "C" hkpAction *fn_82DF5430(const hkpSpringAction *self, const hkArray<hkpEntity *> &newEntities,
                                   const hkArray<hkpPhantom *> &newPhantoms)
{
    if (newEntities.getSize() != 2) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    hkpSpringAction *sa = new hkpSpringAction(newEntities[0], newEntities[1], self->m_userData);
    sa->m_positionAinA = self->m_positionAinA;
    sa->m_positionBinB = self->m_positionBinB;
    sa->m_restLength = self->m_restLength;
    sa->m_strength = self->m_strength;
    sa->m_damping = self->m_damping;
    sa->m_onCompression = self->m_onCompression;
    sa->m_onExtension = self->m_onExtension;
    return sa;
}
