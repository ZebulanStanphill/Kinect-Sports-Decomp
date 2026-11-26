// hkpMultiThreadedSimulation::~hkpMultiThreadedSimulation
// (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.cpp): an empty body;
// the two cross-island pair arrays and the three broad-phase listener members are destroyed in
// reverse order (the critical sections' destructors are empty on this platform), then
// ~hkpContinuousSimulation (out of line).
#include "havok/hkBase.h"
#include "havok/hkpMultiThreadedSimulation.h"

class hkpBroadPhaseHandle;

// hkpTypedBroadPhaseHandlePair (world family, no header yet): the arrays' destructors need the complete type.
class hkpTypedBroadPhaseHandlePair {
public:
    hkpBroadPhaseHandle *m_a;
    hkpBroadPhaseHandle *m_b;
};

hkpMultiThreadedSimulation::~hkpMultiThreadedSimulation()
{
}
