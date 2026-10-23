// hkpContinuousSimulation::~hkpContinuousSimulation (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.cpp): deletes the TOI resource manager; then the members and ~hkpSimulation (out of line).
#include "havok/hkBase.h"

class hkpWorld;
class hkpEntity;

// hkArrayUtil::_reserve is out of line (fn_82CE6310); hkArrayBase::_reserve inlines the growth policy.
extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);
template <typename T>
HK_FORCE_INLINE void hkArrayReserve(hkArray<T> &arr, int n)
{
    hkMemoryAllocator &a = hkContainerHeapAllocator::get(&arr);
    const int capacity = arr.getCapacity();
    if (capacity < n) {
        int cap2 = 2 * capacity;
        int newSize = (n < cap2) ? cap2 : n;
        fn_82CE6310(&a, &arr, newSize, int(sizeof(T)));
    }
}

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

// hkpToiResourceMgr / hkpDefaultToiResourceMgr (Physics/Dynamics/World/Simulation/Continuous/ToiResourceMgr):
// 0x10 bytes; the default constructor is out of line (fn_82DDE130).
class hkpToiResourceMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
};
class hkpDefaultToiResourceMgr : public hkpToiResourceMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultToiResourceMgr();
    char m_data[0x8];
};

struct hkpToiEvent {
    __declspec(align(16)) char m_data[0x70];
};

// hkpContinuousSimulation (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.h).
class hkpContinuousSimulation : public hkpSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpContinuousSimulation(hkpWorld *world);
    virtual ~hkpContinuousSimulation();

    hkArray<hkpToiEvent> m_toiEvents;                                   // +0x30
    hkPointerMap<hkpEntity *, int> m_entitiesNeedingPsiCollisionDetection;   // +0x3C
    hkpToiResourceMgr *m_toiResourceMgr;                                // +0x48
    int m_toiCounter;                                                   // +0x4C
};

// The world's TOI event queue size (hkpWorld::m_sizeOfToiEventQueue, +0x334).
class hkpWorld {
public:
    char m_pad[0x334];
    int m_sizeOfToiEventQueue;   // +0x334
};

hkpContinuousSimulation::~hkpContinuousSimulation()
{
    delete m_toiResourceMgr;
}
