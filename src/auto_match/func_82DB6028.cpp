// hkpContinuousSimulation::hkpContinuousSimulation(hkpWorld *) (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.cpp); hkpSimulation's and the TOI resource manager's constructors are out of line.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"
#include "havok/hkpToiResourceMgr.h"
#include "havok/hkpContinuousSimulation.h"

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

class hkpDefaultToiResourceMgr : public hkpToiResourceMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultToiResourceMgr();
    char m_data[0x8];
};

hkpContinuousSimulation::hkpContinuousSimulation(hkpWorld *world) : hkpSimulation(world)
{
    hkArray<hkpToiEvent> &events = m_toiEvents;
    m_lastProcessingStep = COLLIDE;
    m_toiResourceMgr = new hkpDefaultToiResourceMgr();
    m_toiCounter = 0;
    hkArrayReserve(events, world->m_sizeOfToiEventQueue);
}
