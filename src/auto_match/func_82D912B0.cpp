#include "havok/hkBase.h"

// hkLocalArray: an hkArray whose first buffer comes from the thread's stack allocator.
template <typename T> static HK_FORCE_INLINE void deallocateStack(T *memory)
{
    *reinterpret_cast<T **>(hkMemoryRouter::getInstance().m_stack) = memory;
}

template <typename T> class LocalArray_82D912B0 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE LocalArray_82D912B0(int capacity)
    {
        char *&current = *reinterpret_cast<char **>(hkMemoryRouter::getInstance().m_stack);
        T *memory = reinterpret_cast<T *>(current);

        current += (capacity * sizeof(T) + 127) & ~127;
        this->m_data = memory;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
        m_localMemory = memory;
    }

    HK_FORCE_INLINE ~LocalArray_82D912B0()
    {
        if (m_localMemory == this->m_data) {
            this->clear();
        }
        deallocateStack(m_localMemory);
    }

    T *m_localMemory;
};

struct Pair_82D912B0 {
    int first;
    int second;
};

struct Source_82D912B0 {
    int active; /* 0x0 */
    char pad4[0x14 - 0x4];
    int query; /* 0x14 */
};

struct Input_82D912B0 {
    char pad0[0x10];
    Source_82D912B0 source; /* 0x10 */
};

class Notifier_82D912B0
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void notify(Input_82D912B0 **inputs, int count, void *owner, int flag); /* 0x20 */
};

class Collector_82D912B0
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void collect(int *query, hkArray<Pair_82D912B0> &out); /* 0x1c */
};

struct Owner_82D912B0 {
    char pad0[0x8];
    Notifier_82D912B0 *notifier; /* 0x8 */
    char padc[0x58 - 0xc];
    Collector_82D912B0 *collector; /* 0x58 */
    char pad5c[0x64 - 0x5c];
    void *target; /* 0x64 */
    char pad68[0x338 - 0x68];
    int capacity; /* 0x338 */
};

extern "C" void fn_830885D0(void *target, Pair_82D912B0 *pairs, int count);

extern "C" void fn_82D912B0(Owner_82D912B0 *self, Input_82D912B0 *input)
{
    Source_82D912B0 *source = &input->source;

    if (source->active != 0) {
        self->notifier->notify(&input, 1, self, 1);
        LocalArray_82D912B0<Pair_82D912B0> pairs(self->capacity);

        self->collector->collect(&source->query, pairs);
        if (pairs.getSize() > 0) {
            fn_830885D0(self->target, pairs.begin(), pairs.getSize());
        }
    }
}
