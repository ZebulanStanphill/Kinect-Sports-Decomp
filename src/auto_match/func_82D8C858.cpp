#include "havok/hkArray.h"

inline void *operator new(unsigned int, void *where)
{
    return where;
}

struct Element_82D8C858 {
    unsigned __int64 lo;
    unsigned __int64 hi;
};

template <typename T> static __forceinline void CopyElements(T *dst, const T *src, int count)
{
    for (int i = 0; i < count; i++)
        dst[i] = src[i];
}

template <typename T> static __forceinline void ConstructElements(T *dst, const T *src, int count)
{
    for (int i = 0; i < count; i++)
        new (&dst[i]) T(src[i]);
}

template <typename T> class CopyableArray_82D8C858 : public hkArray<T>
{
  public:
    __forceinline void Assign(const hkArrayBase<T> &other)
    {
        hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(this);
        int newSize = other.m_size;
        int copied = newSize > this->m_size ? this->m_size : newSize;
        int capacity = this->getCapacity();

        if (capacity < newSize)
            hkArrayUtil::_reserve(alloc, this, newSize < capacity * 2 ? capacity * 2 : newSize, sizeof(T));
        CopyElements(this->m_data, other.m_data, copied);
        ConstructElements(this->m_data + copied, other.m_data + copied, newSize - copied);
        this->m_size = newSize;
    }
};

struct Owner_82D8C858 {
    char pad00[0x78];
    CopyableArray_82D8C858<Element_82D8C858> elements; /* 0x78 */
};

extern "C" void fn_82D8C858(Owner_82D8C858 *self, const Owner_82D8C858 *other)
{
    self->elements.Assign(other->elements);
}
