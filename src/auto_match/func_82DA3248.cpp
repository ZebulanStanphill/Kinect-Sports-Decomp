// hkpSimulation::hkpSimulation(hkpWorld *world)
// (Physics/Dynamics/World/Simulation/hkpSimulation.cpp), built /O2.
// The times are float literals (-1.0f and 0.0001f, the constants
// __real@bf800000 and __real@38d1b717); reading them through extern globals
// instead orders the loads after the stores.
#include "havok/hkBase.h"

class hkpWorld;

// hkpSimulation (Physics/Dynamics/World/Simulation/hkpSimulation.h), 0x30 bytes.
class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    enum LastProcessingStep { INTEGRATE, COLLIDE };
    hkpSimulation(hkpWorld *world);
    virtual ~hkpSimulation();

    hkUint32 m_determinismCheckFrameCounter;   // +0x8
    hkpWorld *m_world;                         // +0xC
    hkUint8 m_lastProcessingStep;              // +0x10 hkEnum<LastProcessingStep, hkUint8>
    hkReal m_currentTime;                      // +0x14
    hkReal m_currentPsiTime;                   // +0x18
    hkReal m_physicsDeltaTime;                 // +0x1C
    hkReal m_simulateUntilTime;                // +0x20
    hkReal m_frameMarkerPsiSnap;               // +0x24
    hkUint32 m_previousStepResult;             // +0x28
    hkUint32 m_unknown2C;                      // +0x2C
};

hkpSimulation::hkpSimulation(hkpWorld *world)
    : m_world(world), m_currentTime(0.0f), m_currentPsiTime(0.0f), m_simulateUntilTime(-1.0f),
      m_frameMarkerPsiSnap(0.0001f), m_previousStepResult(0)
{
    m_lastProcessingStep = COLLIDE;
    m_determinismCheckFrameCounter = 0;
}
