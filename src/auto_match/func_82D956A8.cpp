#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
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

struct Obj {
    char pad[0x18];
    int value;
};

extern "C" void fn_82D956A8(Obj *o, Arr<int> *a)
{
    a->pushBack(o->value);
}
