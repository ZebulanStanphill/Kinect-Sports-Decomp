// hkpContinuousSimulation::hkpContinuousSimulation(hkpWorld *) (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.cpp); hkpSimulation's and the TOI resource manager's constructors are out of line.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"
#include "havok/hkpContinuousSimulation.h"
#include "havok/hkpDefaultToiResourceMgr.h"

// hkArrayUtil::_reserve is out of line. hkArrayBase::_reserve inlines the growth policy.
template <typename T>
HK_FORCE_INLINE void hkArrayReserve(hkArray<T> &arr, int n)
{
    hkMemoryAllocator &a = hkContainerHeapAllocator::get(&arr);
    const int capacity = arr.getCapacity();
    if (capacity < n) {
        int cap2 = 2 * capacity;
        int newSize = (n < cap2) ? cap2 : n;
        hkArrayUtil::_reserve(a, &arr, newSize, int(sizeof(T)));
    }
}

hkpContinuousSimulation::hkpContinuousSimulation(hkpWorld *world) : hkpSimulation(world)
{
    hkArray<hkpToiEvent> &events = m_toiEvents;
    m_lastProcessingStep = COLLIDE;
    m_toiResourceMgr = new hkpDefaultToiResourceMgr();
    m_toiCounter = 0;
    hkArrayReserve(events, world->m_sizeOfToiEventQueue);
}
