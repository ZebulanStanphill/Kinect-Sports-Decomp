// hkpDashpotAction::hkpDashpotAction(hkpRigidBody *entityA, hkpRigidBody *entityB, hkUlong userData)
// (Physics/Utilities/Actions/Dashpot/hkpDashpotAction.cpp), /O2 /QVMXReserve (flag file). It keeps its fn_
// name (the constructor body runs through MSVC's explicit self->C::C() call); the out-of-line
// hkpBinaryAction constructor already has its C++ name.
// m_strength and m_damping are the literals 0.1f and 0.01f: the rename map names the game's copy of 0.1f
// (lbl_82186E6C) __real@3dcccccd; an extern lbl_ is reloaded after the vtable store.
#include "havok/hkpDashpotAction.h"

// Forced inline, so that the explicit constructor call below compiles to the constructor's body.
HK_FORCE_INLINE hkpDashpotAction::hkpDashpotAction(hkpRigidBody *entityA, hkpRigidBody *entityB, hkUlong userData)
    : hkpBinaryAction((hkpEntity *)entityA, (hkpEntity *)entityB, userData), m_strength(0.1f), m_damping(0.01f)
{
    m_point[0].setZero4();
    m_point[1].setZero4();
}

extern "C" hkpDashpotAction *fn_82DEFF58(hkpDashpotAction *self, hkpRigidBody *entityA, hkpRigidBody *entityB,
                                         hkUlong userData)
{
    self->hkpDashpotAction::hkpDashpotAction(entityA, entityB, userData);
    return self;
}
