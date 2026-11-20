// Type-erased array allocation and element lifetime helpers.
#ifndef HAVOK_HKARRAYUTIL_H
#define HAVOK_HKARRAYUTIL_H

class hkMemoryAllocator;

// Havok dispatches on hkIsPodType<T>; elements with trivial destructors are
// not visited at all (an empty loop would survive in the generated code).
template <bool B>
struct hkArrayTypeIsPod {};

struct hkArrayUtil {
    static void _reserve(hkMemoryAllocator &alloc, void *array, int capacity, int elemSize);
    static void _reserveMore(hkMemoryAllocator &alloc, void *array, int elemSize);

    template <typename T>
    static __forceinline void destruct(T *t, int n, hkArrayTypeIsPod<true>) {}
    template <typename T>
    static __forceinline void destruct(T *t, int n, hkArrayTypeIsPod<false>)
    {
        for (int i = 0; i < n; ++i)
            t[i].~T();
    }
    template <typename T>
    static __forceinline void destruct(T *t, int n)
    {
        destruct(t, n, hkArrayTypeIsPod<__has_trivial_destructor(T)>());
    }
};

#endif
