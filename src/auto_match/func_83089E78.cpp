// Copies the owner's pair array into `out` (hkArray assignment, inlined) and sorts it when the
// owner's type is 5.
#include "havok/hkBase.h"

inline void *operator new(hk_size_t, void *p)
{
    return p;
}

struct Pair_83089E78 {
    int a; /* 0x00 */
    int b; /* 0x04 */
};

struct ArrayUtil_83089E78 {
    template <typename T> static HK_FORCE_INLINE void HK_CALL copy(T *dst, const T *src, int n)
    {
        for (int i = 0; i < n; ++i) {
            dst[i] = src[i];
        }
    }

    template <typename T> static HK_FORCE_INLINE void HK_CALL constructWithArray(T *t, int n, const T *src)
    {
        for (int i = 0; i < n; ++i) {
            new (t + i) T(src[i]);
        }
    }
};

template <typename T> HK_FORCE_INLINE void CopyFrom_83089E78(hkArray<T> &self, const hkArrayBase<T> &a)
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
    ArrayUtil_83089E78::copy(self.m_data, a.m_data, copiedSize);
    ArrayUtil_83089E78::constructWithArray(self.m_data + copiedSize, newSize - copiedSize,
                                           a.m_data + copiedSize);
    self.m_size = newSize;
}

struct Owner_83089E78 {
    char pad0[0x10];
    signed char typeIndex; /* 0x10 */
    char pad11[0x3f];
    hkArray<Pair_83089E78> pairs; /* 0x50 */
    char pad5c[0x8c];
    unsigned char types[1]; /* 0xe8 */
};

extern "C" void fn_83089FA0(Pair_83089E78 *base, int lo, int hi, void *compare);
extern "C" void fn_83089DB8(void);

extern "C" void fn_83089E78(Owner_83089E78 *self, hkArray<Pair_83089E78> *out)
{
    CopyFrom_83089E78(*out, self->pairs);
    if (self->types[self->typeIndex] == 5 && out->m_size > 1) {
        fn_83089FA0(out->m_data, 0, out->m_size - 1, (void *)fn_83089DB8);
    }
}
