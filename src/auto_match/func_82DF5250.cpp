// hkpSpringAction::hkpSpringAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
// (Physics/Utilities/Actions/Spring/hkpSpringAction.cpp): rest length 1, strength 1000, damping 0.1,
// both directions on. Havok code: /O2 (flag file).
// The original source used the literals 1.0f, 1000.0f and 0.1f, whose loads the compiler schedules
// above the vtable store (it knows the constants cannot change). 0.1f is written as a literal: the
// game's copy is named __real@3dcccccd in symbols.txt, the name the compiler gives it. 1.0f and 1000.0f
// are still lbl_82002AE0 and lbl_8200DFF4 (Matching C units reference them, so they cannot be renamed
// to __real@...); they are declared here as known constants (as in func_83096D00.cpp) and used by name.
// A plain extern keeps the loads below the vtable store.
#include "havok/hkBase.h"

extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;
extern "C" __declspec(selectany) const float lbl_8200DFF4 = 1000.0f;

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity;

// Physics/Dynamics/Action/hkpAction.h, hkpBinaryAction.h (layout as in func_82DE5048.cpp).
class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

class hkpBinaryAction : public hkpAction {
public:
    hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);   // out of line (0x830B3138)

    hkpEntity *m_entityA;   // +0x18
    hkpEntity *m_entityB;   // +0x1C
};

class hkpSpringAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpSpringAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);

    hkVector4 m_lastForce;      // +0x20
    hkVector4 m_positionAinA;   // +0x30
    hkVector4 m_positionBinB;   // +0x40
    hkReal m_restLength;        // +0x50
    hkReal m_strength;          // +0x54
    hkReal m_damping;           // +0x58
    hkBool m_onCompression;     // +0x5C
    hkBool m_onExtension;       // +0x5D
};

hkpSpringAction::hkpSpringAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
    : hkpBinaryAction(entityA, entityB, userData),
      m_restLength(lbl_82002AE0),
      m_strength(lbl_8200DFF4),
      m_damping(0.1f),
      m_onCompression(true),
      m_onExtension(true)
{
}
