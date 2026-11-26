#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

void hkpMotion::getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *motionOut)
{
    motionOut->m_motionState = m_motionState;
    motionOut->m_linearVelocity = m_linearVelocity;
    motionOut->m_angularVelocity = m_angularVelocity;
    motionOut->m_deactivationIntegrateCounter = m_deactivationIntegrateCounter;
}
