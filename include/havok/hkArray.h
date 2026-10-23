// hkArray (Common/Base/Container/Array/hkArray.h), as the game's inlined
// destructors use it.
//
// Layout (0xC bytes): T *m_data; int m_size; int m_capacityAndFlags.
// m_capacityAndFlags holds the capacity in its low 30 bits and
// DONT_DEALLOCATE_FLAG (0x80000000) when the array does not own m_data (packfile
// data, or the default-constructed empty state).
//
// The destructor fetches the allocator first (hkContainerHeapAllocator: the
// router's heap(), so the code calls fn_82CE5410 before touching the array),
// sets m_size to 0, frees the buffer with heap().bufFree(m_data, capacity,
// sizeof(T)) (vtable +0x10) unless DONT_DEALLOCATE_FLAG is set, then resets
// m_data to 0 and m_capacityAndFlags to DONT_DEALLOCATE_FLAG.
#ifndef HAVOK_HKARRAY_H
#define HAVOK_HKARRAY_H
#include "havok/hkMemoryRouter.h"

struct hkContainerHeapAllocator {
    struct Allocator {
        static HK_FORCE_INLINE hkMemoryAllocator &get(const void *) { return hkMemoryRouter::getInstance().heap(); }
    };
    static HK_FORCE_INLINE hkMemoryAllocator &get(const void *p) { return Allocator::get(p); }
};

struct hkContainerTempAllocator {
    struct Allocator {
        static HK_FORCE_INLINE hkMemoryAllocator &get(const void *) { return hkMemoryRouter::getInstance().temp(); }
    };
    static HK_FORCE_INLINE hkMemoryAllocator &get(const void *p) { return Allocator::get(p); }
};

// Havok dispatches on hkIsPodType<T>; elements with trivial destructors are
// not visited at all (an empty loop would survive in the generated code).
template <bool B>
struct hkArrayTypeIsPod {};

struct hkArrayUtil {
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL destruct(T *t, int n, hkArrayTypeIsPod<true>) {}
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL destruct(T *t, int n, hkArrayTypeIsPod<false>)
    {
        for (int i = 0; i < n; ++i)
            t[i].~T();
    }
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL destruct(T *t, int n)
    {
        destruct(t, n, hkArrayTypeIsPod<__has_trivial_destructor(T)>());
    }
};

template <typename T>
class hkArrayBase {
public:
    enum {
        CAPACITY_MASK = 0x3FFFFFFF,
        FLAG_MASK = 0xC0000000,
        DONT_DEALLOCATE_FLAG = 0x80000000
    };

    HK_FORCE_INLINE hkArrayBase() : m_data(HK_NULL), m_size(0), m_capacityAndFlags(DONT_DEALLOCATE_FLAG) {}
    HK_FORCE_INLINE hkArrayBase(T *buffer, int size, int capacity)
        : m_data(buffer), m_size(size), m_capacityAndFlags(capacity | DONT_DEALLOCATE_FLAG) {}
    // Finish constructor (objects loaded in place): leaves the members alone.
    HK_FORCE_INLINE hkArrayBase(hkFinishLoadedObjectFlag) {}

    HK_FORCE_INLINE int getSize() const { return m_size; }
    HK_FORCE_INLINE int getCapacity() const { return m_capacityAndFlags & static_cast<int>(CAPACITY_MASK); }
    HK_FORCE_INLINE bool isEmpty() const { return m_size == 0; }
    HK_FORCE_INLINE T &operator[](int i) { return m_data[i]; }
    HK_FORCE_INLINE const T &operator[](int i) const { return m_data[i]; }
    HK_FORCE_INLINE T *begin() { return m_data; }
    HK_FORCE_INLINE T *end() { return m_data + m_size; }

    // Elements are destroyed first to last, with the pointer and count
    // passed by value (hkArrayUtil::destruct; ~hkMonitorStreamColorTable).
    HK_FORCE_INLINE void clear()
    {
        hkArrayUtil::destruct(m_data, m_size);
        m_size = 0;
    }

    HK_FORCE_INLINE void _clearAndDeallocate(hkMemoryAllocator &alloc)
    {
        clear();
        if ((m_capacityAndFlags & DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(m_data, getCapacity(), sizeof(T));
        m_data = HK_NULL;
        m_capacityAndFlags = DONT_DEALLOCATE_FLAG;
    }

    T *m_data;
    int m_size;
    int m_capacityAndFlags;
};

template <typename T, typename Allocator = hkContainerHeapAllocator>
class hkArray : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE hkArray() {}
    HK_FORCE_INLINE hkArray(hkFinishLoadedObjectFlag f) : hkArrayBase<T>(f) {}
    // Over a buffer the array does not own (hkInplaceArray's storage).
    HK_FORCE_INLINE hkArray(T *buffer, int size, int capacity) : hkArrayBase<T>(buffer, size, capacity) {}
    HK_FORCE_INLINE ~hkArray() { this->_clearAndDeallocate(Allocator::get(this)); }
};

// hkInplaceArray<T, N>: an hkArray whose first N elements live in the object.
// Unverified: hkSolverAllocator's constructor (fn_82CF75C0) only matched with
// the array and its storage as separate members of the class, computing the
// storage address from the enclosing object; prefer that form.
// (data = &m_storage, capacity N | DONT_DEALLOCATE_FLAG).
template <typename T, unsigned N, typename Allocator = hkContainerHeapAllocator>
class hkInplaceArray : public hkArray<T, Allocator> {
public:
    HK_FORCE_INLINE hkInplaceArray() : hkArray<T, Allocator>(m_storage, 0, N) {}
    T m_storage[N];
};

#endif
