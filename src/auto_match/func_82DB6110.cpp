// hkpContinuousSimulation::~hkpContinuousSimulation (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.cpp): deletes the TOI resource manager; then the members and ~hkpSimulation (out of line).
#include "havok/hkBase.h"
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

hkpContinuousSimulation::~hkpContinuousSimulation()
{
    delete m_toiResourceMgr;
}
