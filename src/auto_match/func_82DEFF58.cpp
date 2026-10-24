// hkpDashpotAction::hkpDashpotAction(hkpRigidBody *entityA, hkpRigidBody *entityB, hkUlong userData)
// (Physics/Utilities/Actions/Dashpot/hkpDashpotAction.cpp), /O2 /QVMXReserve (flag file). It keeps its fn_
// name (the constructor body runs through MSVC's explicit self->C::C() call); the out-of-line
// hkpBinaryAction constructor already has its C++ name.
// m_strength and m_damping are the literals 0.1f and 0.01f: the rename map names the game's copy of 0.1f
// (lbl_82186E6C) __real@3dcccccd; an extern lbl_ is reloaded after the vtable store.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

class hkVector4 {
public:
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __vector4 m_quad;
};

class hkpEntity;
class hkpRigidBody;

// hkpAction (+0x8: m_userData, m_world, m_island, m_name) and hkpBinaryAction (+0x18: m_entityA, m_entityB);
// the hkpBinaryAction constructor is out of line.
class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    char m_pad08[0x10];
};

class hkpBinaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData);
    hkpEntity *m_entityA;   // +0x18
    hkpEntity *m_entityB;   // +0x1C
};

class hkpDashpotAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE hkpDashpotAction(hkpRigidBody *entityA, hkpRigidBody *entityB, hkUlong userData)
        : hkpBinaryAction((hkpEntity *)entityA, (hkpEntity *)entityB, userData), m_strength(0.1f), m_damping(0.01f)
    {
        m_point[0].setZero4();
        m_point[1].setZero4();
    }

    hkVector4 m_point[2];   // +0x20
    hkReal m_strength;      // +0x40
    hkReal m_damping;       // +0x44
};

extern "C" hkpDashpotAction *fn_82DEFF58(hkpDashpotAction *self, hkpRigidBody *entityA, hkpRigidBody *entityB,
                                         hkUlong userData)
{
    self->hkpDashpotAction::hkpDashpotAction(entityA, entityB, userData);
    return self;
}
