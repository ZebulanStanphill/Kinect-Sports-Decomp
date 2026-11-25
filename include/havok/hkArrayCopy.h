#ifndef HAVOK_HKARRAYCOPY_H
#define HAVOK_HKARRAYCOPY_H

#include "havok/hkBase.h"
#include "havok/hkArrayUtil.h"

// hkArray assignment for element types with constructors
// (hkArrayBase::_copyFromArray, inlined): reserve (hkArrayUtil::_reserve,
// hkArrayUtil::_reserve, keeps its fn_ name), destroy the surplus, assign the common
// part, copy-construct the rest.

inline void *operator new(hk_size_t, void *p) { return p; }

struct hkArrayUtilC {
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL destruct(T *t, int n)
    {
        for (int i = 0; i < n; ++i)
            t[i].~T();
    }
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL copy(T *dst, const T *src, int n)
    {
        for (int i = 0; i < n; ++i)
            dst[i] = src[i];
    }
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL constructWithArray(T *t, int n, const T *src)
    {
        for (int i = 0; i < n; ++i)
            new (t + i) T(src[i]);
    }
};

template <typename T>
HK_FORCE_INLINE void hkArrayCopyFrom(hkArray<T> &self, const hkArrayBase<T> &a)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&self);
    int oldSize = self.m_size;
    int newSize = a.m_size;
    int copiedSize = newSize > oldSize ? oldSize : newSize;
    {
        const int capacity = self.getCapacity();
        if (capacity < newSize) {
            int cap2 = 2 * capacity;
            int newCapacity = (newSize < cap2) ? cap2 : newSize;
            hkArrayUtil::_reserve(alloc, &self, newCapacity, sizeof(T));
        }
    }
    hkArrayUtilC::destruct(self.m_data + newSize, oldSize - newSize);
    hkArrayUtilC::copy(self.m_data, a.m_data, copiedSize);
    hkArrayUtilC::constructWithArray(self.m_data + copiedSize, newSize - copiedSize, a.m_data + copiedSize);
    self.m_size = newSize;
}

#endif
