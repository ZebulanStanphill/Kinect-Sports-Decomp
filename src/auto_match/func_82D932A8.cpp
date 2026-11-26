#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

extern "C" void fn_82D92FF0(hkMotionState *self, const hkMotionState *other); // hkMotionState::operator=

void hkpMotion::getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *motionOut)
{
    motionOut->m_motionState = m_motionState;
    motionOut->m_linearVelocity = m_linearVelocity;
    motionOut->m_angularVelocity = m_angularVelocity;
    motionOut->m_deactivationIntegrateCounter = m_deactivationIntegrateCounter;
}
