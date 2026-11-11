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
static HK_FORCE_INLINE void swapT(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
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
    HK_FORCE_INLINE T &back() { return this->m_data[this->m_size - 1]; }
};

extern "C" int *fn_82D2B950(Arr<int *> *v)
{
    int *blk;
    int *p;
    int *prev;
    int *last;
    int i;

    hkMemoryRouter &r = hkMemoryRouter::getInstance();
    prev = 0;
    blk = (int *)r.heap().blockAlloc(32 * 0x50 + 8);
    p = blk + 31 * (0x50 / 4);
    i = 0x20;
    do {
        *p = (int)prev;
        last = p;
        prev = p;
        p -= 0x50 / 4;
        i--;
    } while (i != 0);
    blk[32 * (0x50 / 4)] = (int)last;
    blk[32 * (0x50 / 4) + 1] = 0;
    v->pushBack(blk);
    if (v->getSize() > 1) {
        int *t = (*v)[0]; (*v)[0] = v->back(); v->back() = t;
    }
    return blk;
}
