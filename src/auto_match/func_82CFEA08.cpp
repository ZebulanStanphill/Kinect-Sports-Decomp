#include "havok/hkClass.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

// hkArray::_pushBack / pushBack, inlined (the allocator is fetched first).
template <typename T> static HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, hkArray<T> &a, const T &e)
{
    if (a.m_size == a.getCapacity()) {
        fn_82CE63B0(&alloc, &a, sizeof(T));
    }
    constructWithCopy(a.m_data + a.m_size, 1, e);
    a.m_size++;
}

template <typename T> static HK_FORCE_INLINE void pushBack(hkArray<T> &a, const T &e)
{
    _pushBack(hkContainerHeapAllocator::get(&a), a, e);
}

// Walks the items from the last to the first, appending the name of every item
// whose bits are all set and clearing them; fails when bits are left over.
hkResult hkClassEnum::decomposeFlags(int flagValue, hkArray<const char *> &bitsOut, int &bitsOver) const
{
    bitsOut.m_size = 0;
    for (int i = m_numItems - 1; i >= 0 && flagValue != 0; --i) {
        int value = m_items[i].m_value;

        if ((value & flagValue) == value) {
            const char *name = m_items[i].m_name;

            pushBack(bitsOut, name);
            flagValue &= ~value;
        }
    }
    bitsOver = flagValue;
    return flagValue != 0 ? HK_FAILURE : HK_SUCCESS;
}
