#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T> class Array_82CFEA08 : public hkArrayBase<T>
{
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

struct Item_82CFEA08 {
    int value;        /* 0x0 */
    const char *name; /* 0x4 */
};

struct ClassEnum_82CFEA08 {
    const char *name;     /* 0x0 */
    Item_82CFEA08 *items; /* 0x4 */
    int numItems;         /* 0x8 */
};

// hkClassEnum::decomposeFlags: walks the items from the last to the first, appending the name of every
// item whose bits are all set and clearing them; fails (1) when bits are left over.
extern "C" int fn_82CFEA08(ClassEnum_82CFEA08 *self, int flags, Array_82CFEA08<const char *> &bitsOut,
                           int &bitsLeft)
{
    bitsOut.m_size = 0;
    for (int i = self->numItems - 1; i >= 0 && flags != 0; --i) {
        int value = self->items[i].value;

        if ((value & flags) == value) {
            const char *name = self->items[i].name;

            bitsOut.pushBack(name);
            flags &= ~value;
        }
    }
    bitsLeft = flags;
    return flags != 0;
}
