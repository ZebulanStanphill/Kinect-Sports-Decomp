#include "havok/hkBase.h"


inline void *operator new(unsigned int, void *p) throw()
{
    return p;
}

template <typename T, typename Allocator = hkContainerHeapAllocator>
class Array_82DA8438 : public hkArrayBase<T>
{
  public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        new (this->m_data + this->m_size) T(e);
        this->m_size++;
    }

    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }

    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(Allocator::get(this), e);
    }
};

struct Entity_82DA8438 {
    char pad0[0xcc];
    int island; /* 0xcc */
    char padd0[0xe8 - 0xd0];
    unsigned char motionType; /* 0xe8 */
};

struct Collidable_82DA8438 {
    char pad0[0x10];
    signed char ownerOffset; /* 0x10 */
    char pad11[0x1a - 0x11];
    signed char qualityType; /* 0x1a: m_broadPhaseHandle.m_objectQualityType */

    HK_FORCE_INLINE Entity_82DA8438 *getOwner()
    {
        return (Entity_82DA8438 *)((char *)this + ownerOffset);
    }
};

struct Handle_82DA8438 {
    unsigned int id;         /* 0x0 */
    signed char type;        /* 0x4 */
    signed char ownerOffset; /* 0x5 */

    HK_FORCE_INLINE Collidable_82DA8438 *getOwner()
    {
        return (Collidable_82DA8438 *)((char *)this + ownerOffset);
    }
};

struct HandlePair_82DA8438 {
    Handle_82DA8438 *a; /* 0x0 */
    Handle_82DA8438 *b; /* 0x4 */
};

struct QualityInfo_82DA8438 {
    void *info; /* 0x0 */
    char pad4[0x3c];
};

struct Dispatcher_82DA8438 {
    char pad0[0x1bb0];
    signed char qualityIndex[8][10]; /* 0x1bb0 */
    char pad1c00[0x1c30 - 0x1c00];
    QualityInfo_82DA8438 qualityInfo[1]; /* 0x1c30 */
};

struct Input_82DA8438 {
    Dispatcher_82DA8438 *dispatcher; /* 0x0 */
    char pad4[0x14 - 0x4];
    void *qualityInfo; /* 0x14 */
};

struct World_82DA8438 {
    char pad0[0x78];
    Input_82DA8438 *collisionInput; /* 0x78 */
};

struct Simulation_82DA8438 {
    char pad0[0xc];
    World_82DA8438 *world; /* 0xc */
    char pad10[0x68 - 0x10];
    unsigned char deferring; /* 0x68 */
    char pad69[3];
    Array_82DA8438<HandlePair_82DA8438> deferred; /* 0x6c */
};

struct Listener_82DA8438 {
    void *vtable;
    Simulation_82DA8438 *simulation; /* 0x4 */
};

extern "C" void fn_82DB0430(Collidable_82DA8438 *a, Collidable_82DA8438 *b, Input_82DA8438 *input);

extern "C" void fn_82DA8438(Listener_82DA8438 *self, HandlePair_82DA8438 *pair)
{
    Collidable_82DA8438 *a = pair->a->getOwner();
    Collidable_82DA8438 *b = pair->b->getOwner();
    Simulation_82DA8438 *simulation = self->simulation;
    Entity_82DA8438 *entityA = a->getOwner();
    Entity_82DA8438 *entityB = b->getOwner();

    if (simulation->deferring && entityA->motionType != 5 && entityB->motionType != 5 &&
        entityA->island != entityB->island) {
        simulation->deferred.pushBack(*pair);
    } else {
        Input_82DA8438 *input = simulation->world->collisionInput;
        Dispatcher_82DA8438 *dispatcher = input->dispatcher;
        int quality = dispatcher->qualityIndex[a->qualityType][b->qualityType];

        if (quality != 0) {
            input->qualityInfo = dispatcher->qualityInfo[quality].info;
            fn_82DB0430(a, b, input);
        }
    }
}
