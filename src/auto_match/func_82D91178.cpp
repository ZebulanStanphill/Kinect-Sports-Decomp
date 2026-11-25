#include "havok/hkpCollisionFilter.h"

// hkDeallocateStack: the pointer is evaluated before the router is fetched.
template <typename T> static HK_FORCE_INLINE void deallocateStack(T *memory)
{
    *reinterpret_cast<T **>(hkMemoryRouter::getInstance().m_stack) = memory;
}

// hkLocalArray: an hkArray whose first buffer comes from the thread's stack allocator.
template <typename T> class LocalArray_82D91178 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE LocalArray_82D91178(int capacity)
    {
        char *&current = *reinterpret_cast<char **>(hkMemoryRouter::getInstance().m_stack);
        T *memory = reinterpret_cast<T *>(current);

        current += (capacity * sizeof(T) + 127) & ~127;
        this->m_data = memory;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
        m_localMemory = memory;
    }

    HK_FORCE_INLINE ~LocalArray_82D91178()
    {
        if (m_localMemory == this->m_data) {
            this->clear();
        }
        deallocateStack(m_localMemory);
    }

    T *m_localMemory;
};

struct hkpBroadPhaseHandle_82D91178 {
    hkUint32 m_id;
};

struct hkpBroadPhaseHandlePair_82D91178 {
    hkpBroadPhaseHandle_82D91178 *m_a;
    hkpBroadPhaseHandle_82D91178 *m_b;
};

struct __declspec(align(16)) hkAabb_82D91178 {
    float m_min[4];
    float m_max[4];
};

class Phantom_82D91178
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void calcAabb(hkAabb_82D91178 &aabb); // +0x18

    char m_pad4[0x24 - 0x4];
    hkpBroadPhaseHandle_82D91178 m_broadPhaseHandle; // +0x24 (m_collidable at +0x10)
};

class BroadPhase_82D91178
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void addObject(hkpBroadPhaseHandle_82D91178 *object, const hkAabb_82D91178 &aabb,
                           hkArray<hkpBroadPhaseHandlePair_82D91178> &pairsOut); // +0x10
};

class World_82D91178
{
  public:
    char m_pad0[0x58];
    BroadPhase_82D91178 *m_broadPhase; // +0x58
    char m_pad5c[0x64 - 0x5c];
    void *m_broadPhaseDispatcher; // +0x64
    char m_pad68[0x7c - 0x68];
    hkpCollisionFilter *m_collisionFilter; // +0x7c
    char m_pad80[0x338 - 0x80];
    int m_broadPhaseQuerySize; // +0x338
};

extern "C" void fn_82D9A040(Phantom_82D91178 *phantom, const hkAabb_82D91178 &aabb);
extern "C" void fn_83088518(void *dispatcher, hkpBroadPhaseHandlePair_82D91178 *pairs, int numPairs,
                            const hkpCollidableCollidableFilter *filter);

extern "C" void fn_82D91178(World_82D91178 *world, Phantom_82D91178 *phantom)
{
    LocalArray_82D91178<hkpBroadPhaseHandlePair_82D91178> newPairs(world->m_broadPhaseQuerySize);
    hkAabb_82D91178 aabb;

    phantom->calcAabb(aabb);
    world->m_broadPhase->addObject(&phantom->m_broadPhaseHandle, aabb, newPairs);
    fn_82D9A040(phantom, aabb);
    if (newPairs.getSize() != 0) {
        fn_83088518(world->m_broadPhaseDispatcher, newPairs.begin(), newPairs.getSize(),
                    world->m_collisionFilter);
    }
}
