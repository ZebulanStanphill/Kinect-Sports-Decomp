// Copy assignment of a 0x40-byte Havok value class: a 0x14-byte block of
// plain words, an hkArray of hkRefPtr, then two hkVector4.
#include "havok/hkArray.h"
#include "havok/hkReferencedObject.h"
#include "havok/hkVector4.h"

inline void *operator new(unsigned int, void *where)
{
    return where;
}

// hkRefPtr with its copy constructor and assignment (the source pointer is
// read again after each reference call).
template <typename T> class CopyRefPtr_82D43AA0
{
  public:
    __forceinline ~CopyRefPtr_82D43AA0()
    {
        if (m_pntr)
            m_pntr->removeReference();
        m_pntr = HK_NULL;
    }

    __forceinline CopyRefPtr_82D43AA0(const CopyRefPtr_82D43AA0 &other)
    {
        if (other.m_pntr)
            other.m_pntr->addReference();
        this->m_pntr = other.m_pntr;
    }

    __forceinline CopyRefPtr_82D43AA0 &operator=(const CopyRefPtr_82D43AA0 &other)
    {
        if (other.m_pntr)
            other.m_pntr->addReference();
        if (this->m_pntr)
            this->m_pntr->removeReference();
        this->m_pntr = other.m_pntr;
        return *this;
    }

    T *m_pntr;
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

template <typename T> class CopyableArray_82D43AA0 : public hkArray<T>
{
  public:
    __forceinline CopyableArray_82D43AA0 &operator=(const CopyableArray_82D43AA0 &other)
    {
        hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(this);
        int oldSize = this->m_size;
        int newSize = other.m_size;
        int copied = newSize > oldSize ? oldSize : newSize;
        int capacity = this->getCapacity();

        if (capacity < newSize)
            hkArrayUtil::_reserve(alloc, this, newSize < capacity * 2 ? capacity * 2 : newSize, sizeof(T));
        hkArrayUtil::destruct(this->m_data + newSize, oldSize - newSize);
        CopyElements(this->m_data, other.m_data, copied);
        ConstructElements(this->m_data + copied, other.m_data + copied, newSize - copied);
        this->m_size = newSize;
        return *this;
    }
};

struct Header_82D43AA0 {
    unsigned int words[5];
};

struct Value_82D43AA0 {
    Header_82D43AA0 header;                                                  /* 0x00 */
    CopyableArray_82D43AA0<CopyRefPtr_82D43AA0<hkReferencedObject>> objects; /* 0x14 */
    hkVector4 a;                                                             /* 0x20 */
    hkVector4 b;                                                             /* 0x30 */
};

extern "C" Value_82D43AA0 *fn_82D43AA0(Value_82D43AA0 *self, const Value_82D43AA0 *other)
{
    self->header = other->header;
    self->objects = other->objects;
    self->a = other->a;
    self->b = other->b;
    return self;
}
