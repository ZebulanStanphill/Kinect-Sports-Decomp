#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

extern "C" void fn_82D9D568(hkpMotion *self, hkpMotion *out)
{
    out->m_motionState = self->m_motionState;
    out->m_linearVelocity.setZero();
    out->m_angularVelocity.setZero();
}
