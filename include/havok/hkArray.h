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
#include "havok/hkReferencedObject.h"   // HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR
#include "havok/hkArrayUtil.h"

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

    // Growth (hkArray.inl), with the bodies the units inline. _reserve grows to
    // max(2 * capacity, n) (82CFF188, 82DEDF08, 82E00E48).
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &alloc, int n)
    {
        const int capacity = getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            hkArrayUtil::_reserve(alloc, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void setSizeUnchecked(int n) { m_size = n; }
    // The units only grow arrays this way, so the destruction of surplus
    // elements that Havok has here is not written.
    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &alloc, int n)
    {
        _reserve(alloc, n);
        hkArrayUtil::construct(m_data + m_size, n - m_size, HK_ARRAY_HAS_TRIVIAL_CONSTRUCTOR(T));
        m_size = n;
    }
    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &alloc, int n, const T &fill)
    {
        _reserve(alloc, n);
        hkArrayUtil::constructWithCopy(m_data + m_size, n - m_size, fill, HK_ARRAY_HAS_TRIVIAL_COPY(T));
        m_size = n;
    }
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        hkArrayUtil::constructWithCopy(m_data + m_size, 1, e, HK_ARRAY_HAS_TRIVIAL_COPY(T));
        m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (m_size == getCapacity())
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        hkArrayUtil::constructWithCopy(m_data + m_size, 1, e, HK_ARRAY_HAS_TRIVIAL_COPY(T));
        m_size++;
    }
    // Appends n elements without a capacity test and returns the first (82D6C808 appends its child
    // agents this way after one reserve).
    HK_FORCE_INLINE T *expandByUnchecked(int n)
    {
        T *res = m_data + m_size;
        m_size += n;
        return res;
    }
    HK_FORCE_INLINE T &_expandOne(hkMemoryAllocator &alloc)
    {
        if (m_size == getCapacity())
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        return m_data[m_size++];
    }

    T *m_data;
    int m_size;
    int m_capacityAndFlags;
};

template <typename T, typename Allocator = hkContainerHeapAllocator>
class hkArray : public hkArrayBase<T> {
public:
    // Havok's class allocator: 82E0BC78 creates an hkArray<hkVariant> with `new` from the heap (0xC
    // bytes), and its scalar deleting destructor (82E0E0A8) returns the 0xC bytes to the heap.
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ARRAY, hkArray);
    HK_FORCE_INLINE hkArray() {}
    HK_FORCE_INLINE hkArray(hkFinishLoadedObjectFlag f) : hkArrayBase<T>(f) {}
    // Over a buffer the array does not own (hkInplaceArray's storage).
    HK_FORCE_INLINE hkArray(T *buffer, int size, int capacity) : hkArrayBase<T>(buffer, size, capacity) {}
    HK_FORCE_INLINE ~hkArray() { this->_clearAndDeallocate(Allocator::get(this)); }

    // The allocator is fetched before the capacity test (82DF05A8, 82E15968).
    HK_FORCE_INLINE void reserve(int n) { this->_reserve(Allocator::get(this), n); }
    HK_FORCE_INLINE void setSize(int n) { this->_setSize(Allocator::get(this), n); }
    HK_FORCE_INLINE void setSize(int n, const T &fill) { this->_setSize(Allocator::get(this), n, fill); }
    HK_FORCE_INLINE void pushBack(const T &e) { this->_pushBack(Allocator::get(this), e); }
    HK_FORCE_INLINE T &expandOne() { return this->_expandOne(Allocator::get(this)); }
};

// hkInplaceArray<T, N>: an hkArray whose first N elements live in the object
// (data = m_storage, capacity N | DONT_DEALLOCATE_FLAG).
// The constructor takes the initial size (82DFE6F8 builds two arrays of m_numWheels elements this way;
// the others pass nothing). The destructor is forced inline, as the destructors of the agents that hold
// one have the array's code in them (82D55060, 82D60E30) and 82CFCE90 destroys a local one inline.
// Users: hkpShapeCollectionAgent, hkpMultiSphereAgent, hkpMultiRayConvexAgent, hkBinaryPackfileReader.
// hkSolverAllocator's constructor (fn_82CF75C0) only matched with the array and its storage as separate
// members of the class, computing the storage address from the enclosing object; that unit keeps that form.
template <typename T, unsigned N, typename Allocator = hkContainerHeapAllocator>
class hkInplaceArray : public hkArray<T, Allocator> {
public:
    HK_FORCE_INLINE hkInplaceArray(int size = 0) : hkArray<T, Allocator>(m_storage, size, N) {}
    HK_FORCE_INLINE ~hkInplaceArray() {}
    T m_storage[N];
};

#endif
