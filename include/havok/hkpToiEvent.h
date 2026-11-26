// hkpToiEvent (Physics/Dynamics/World/Simulation/Continuous/hkpToiEvent.h), 0x70 bytes, 16-byte aligned: one
// time-of-impact event in hkpContinuousSimulation's queue. Only its size and alignment are known (the queue's
// reserve in 82DB6028 and the array element size); its members are not named by any unit.
#ifndef HAVOK_HKPTOIEVENT_H
#define HAVOK_HKPTOIEVENT_H

#include "havok/hkBase.h"

struct hkpToiEvent {
    __declspec(align(16)) char m_data[0x70];
};

#endif
