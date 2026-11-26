// hkpSimulation::hkpSimulation(hkpWorld *world)
// (Physics/Dynamics/World/Simulation/hkpSimulation.cpp), built /O2.
// The times are float literals (-1.0f and 0.0001f, the constants
// __real@bf800000 and __real@38d1b717); reading them through extern globals
// instead orders the loads after the stores.
#include "havok/hkBase.h"
#include "havok/hkpSimulation.h"

hkpSimulation::hkpSimulation(hkpWorld *world)
    : m_world(world), m_currentTime(0.0f), m_currentPsiTime(0.0f), m_simulateUntilTime(-1.0f),
      m_frameMarkerPsiSnap(0.0001f), m_previousStepResult(0)
{
    m_lastProcessingStep = COLLIDE;
    m_determinismCheckFrameCounter = 0;
}
