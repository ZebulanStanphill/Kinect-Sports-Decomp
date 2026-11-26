// Type-erased array allocation and element lifetime helpers.
#ifndef HAVOK_HKARRAYUTIL_H
#define HAVOK_HKARRAYUTIL_H

class hkMemoryAllocator;

// Havok dispatches on hkIsPodType<T>; elements with trivial destructors are
// not visited at all (an empty loop would survive in the generated code).
template <bool B>
struct hkArrayTypeIsPod {};
// The tags hkArray passes to construct and constructWithCopy for an element
// type. Havok's hkIsPodType is declared type by type; the compiler's traits
// stand in for it here, so a struct that Havok declares POD although a member
// has a constructor (82E00E48's WheelState) does not get the POD form.
#define HK_ARRAY_HAS_TRIVIAL_CONSTRUCTOR(T) hkArrayTypeIsPod<!__is_class(T) || __has_trivial_constructor(T)>()
#define HK_ARRAY_HAS_TRIVIAL_COPY(T) hkArrayTypeIsPod<!__is_class(T) || __has_trivial_copy(T)>()

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

    // construct and constructWithCopy, as hkArray's setSize and pushBack inline
    // them. An element with a constructor is built in place with the global
    // placement operator new, which the unit declares itself (declared throw(),
    // its result is null checked, as in 82E15968 and 82E15C30). Elements
    // without one are assigned in a loop that survives for a single element
    // (82DF05A8: storing through m_data[m_size] directly gives other code).
    template <typename T>
    static __forceinline void construct(T *t, int n, hkArrayTypeIsPod<true>) {}
    template <typename T>
    static __forceinline void construct(T *t, int n, hkArrayTypeIsPod<false>)
    {
        for (int i = 0; i < n; ++i)
            ::new (static_cast<void *>(t + i)) T;
    }
    template <typename T>
    static __forceinline void constructWithCopy(T *t, int n, const T &tcopy, hkArrayTypeIsPod<true>)
    {
        for (int i = 0; i < n; ++i)
            t[i] = tcopy;
    }
    template <typename T>
    static __forceinline void constructWithCopy(T *t, int n, const T &tcopy, hkArrayTypeIsPod<false>)
    {
        for (int i = 0; i < n; ++i)
            ::new (static_cast<void *>(t + i)) T(tcopy);
    }
};

#endif
