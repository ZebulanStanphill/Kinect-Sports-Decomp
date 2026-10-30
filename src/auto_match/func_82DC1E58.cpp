#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T>
class Arr : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            fn_82CE63B0(&alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(hkContainerHeapAllocator::get(this), e);
    }
};

struct Obj_82DC1E58 {
    int p0;
    int a;
    int b;
    int c;
    int pad[3];
    Arr<int> list;
};

struct Host_82DC1E58 {
    int p0;
    Obj_82DC1E58 *o;
};

static __forceinline void bump(Host_82DC1E58 *h)
{
    Obj_82DC1E58 *o = h->o;
    o->a += 0x30;
    o->b++;
    o->c++;
}

extern "C" void fn_82DC1E58(Host_82DC1E58 *self)
{
    self->o->list.pushBack(0xd);
    bump(self);
    bump(self);
    bump(self);
}
