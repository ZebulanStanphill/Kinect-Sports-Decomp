// hkpSpringAction::hkpSpringAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
// (Physics/Utilities/Actions/Spring/hkpSpringAction.cpp): rest length 1, strength 1000, damping 0.1,
// both directions on. Havok code: /O2 (flag file).
// The original source used the literals 1.0f, 1000.0f and 0.1f, whose loads the compiler schedules
// above the vtable store (it knows the constants cannot change). 0.1f is written as a literal: the
// game's copy is named __real@3dcccccd in symbols.txt, the name the compiler gives it, and so is 1.0f
// (__real@3f800000). 1000.0f is still lbl_8200DFF4 (Matching C units reference it, so it cannot be renamed
// to __real@...); it is declared here as a known constant (selectany) and used by name. A plain extern
// keeps the load below the vtable store.
#include "havok/hkBase.h"
#include "havok/hkpSpringAction.h"

extern "C" __declspec(selectany) const float lbl_8200DFF4 = 1000.0f;

hkpSpringAction::hkpSpringAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
    : hkpBinaryAction(entityA, entityB, userData),
      m_restLength(1.0f),
      m_strength(lbl_8200DFF4),
      m_damping(0.1f),
      m_onCompression(true),
      m_onExtension(true)
{
}
