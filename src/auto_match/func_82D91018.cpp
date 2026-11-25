#include "havok/hkpCollisionFilter.h"

// hkDeallocateStack: the pointer is evaluated before the router is fetched.
template <typename T> static HK_FORCE_INLINE void deallocateStack(T *memory)
{
    *reinterpret_cast<T **>(hkMemoryRouter::getInstance().m_stack) = memory;
}

// hkLocalArray: an hkArray whose first buffer comes from the thread's stack allocator.
template <typename T> class LocalArray_82D91018 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE LocalArray_82D91018(int capacity)
    {
        char *&current = *reinterpret_cast<char **>(hkMemoryRouter::getInstance().m_stack);
        T *memory = reinterpret_cast<T *>(current);

        current += (capacity * sizeof(T) + 127) & ~127;
        this->m_data = memory;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
        m_localMemory = memory;
    }

    HK_FORCE_INLINE ~LocalArray_82D91018()
    {
        if (m_localMemory == this->m_data) {
            this->clear();
        }
        deallocateStack(m_localMemory);
    }

    T *m_localMemory;
};

struct hkpBroadPhaseHandle_82D91018 {
    hkUint32 m_id;
};

struct hkpBroadPhaseHandlePair_82D91018 {
    hkpBroadPhaseHandle_82D91018 *m_a;
    hkpBroadPhaseHandle_82D91018 *m_b;
};

struct __declspec(align(16)) hkAabb_82D91018 {
    float m_min[4];
    float m_max[4];
};

struct Collidable_82D91018 {
    int m_shape; // +0x00, tested as a signed word
    char m_pad4[0x14 - 0x4];
    hkpBroadPhaseHandle_82D91018 m_broadPhaseHandle; // +0x14
};

struct Entity_82D91018 {
    char m_pad0[0x10];
    Collidable_82D91018 m_collidable; // +0x10
    char m_pad28[0x30 - 0x28];
    hkAabb_82D91018 m_aabb; // +0x30
};

class BroadPhase_82D91018
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void addObject(hkpBroadPhaseHandle_82D91018 *object, const hkAabb_82D91018 &aabb,
                           hkArray<hkpBroadPhaseHandlePair_82D91018> &pairsOut); // +0x14
};

class World_82D91018
{
  public:
    char m_pad0[0x58];
    BroadPhase_82D91018 *m_broadPhase; // +0x58
    char m_pad5c[0x64 - 0x5c];
    void *m_broadPhaseDispatcher; // +0x64
    char m_pad68[0x78 - 0x68];
    void *m_listeners;                     // +0x78
    hkpCollisionFilter *m_collisionFilter; // +0x7c
    char m_pad80[0x338 - 0x80];
    int m_broadPhaseQuerySize; // +0x338
};

extern "C" void fn_82DBA1E0(void *listeners, Entity_82D91018 **entities, int count);
extern "C" void fn_83088518(void *dispatcher, hkpBroadPhaseHandlePair_82D91018 *pairs, int numPairs,
                            const hkpCollidableCollidableFilter *filter);

extern "C" void fn_82D91018(World_82D91018 *world, Entity_82D91018 *entity)
{
    Collidable_82D91018 *collidable = &entity->m_collidable;

    if (collidable->m_shape != 0) {
        LocalArray_82D91018<hkpBroadPhaseHandlePair_82D91018> newPairs(world->m_broadPhaseQuerySize);

        fn_82DBA1E0(world->m_listeners, &entity, 1);
        {
            hkAabb_82D91018 aabb = entity->m_aabb;

            world->m_broadPhase->addObject(&collidable->m_broadPhaseHandle, aabb, newPairs);
        }
        if (newPairs.getSize() > 0) {
            fn_83088518(world->m_broadPhaseDispatcher, newPairs.begin(), newPairs.getSize(),
                        world->m_collisionFilter);
        }
    }
}
