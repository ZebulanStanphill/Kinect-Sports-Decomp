// hkSmallArray (Common/Base/Container/Array/hkSmallArray.h), 8 bytes:
// T *m_data; hkUint16 m_size; hkUint16 m_capacityAndFlags (the capacity in
// the low 14 bits, DONT_DEALLOCATE_FLAG 0x8000).
#ifndef HAVOK_HKSMALLARRAY_H
#define HAVOK_HKSMALLARRAY_H

#include "havok/hkBase.h"

template <typename T>
class hkSmallArray {
public:
    enum { CAPACITY_MASK = 0x3FFF, DONT_DEALLOCATE_FLAG = 0x8000 };
    HK_FORCE_INLINE hkSmallArray() : m_data(HK_NULL), m_size(0), m_capacityAndFlags(DONT_DEALLOCATE_FLAG) {}
    HK_FORCE_INLINE ~hkSmallArray()
    {
        if ((m_capacityAndFlags & DONT_DEALLOCATE_FLAG) == 0)
            hkDeallocateChunk<T>(m_data, m_capacityAndFlags & CAPACITY_MASK, HK_MEMORY_CLASS_ARRAY);
    }
    HK_FORCE_INLINE int getSize() const { return m_size; }
    HK_FORCE_INLINE int indexOf(const T &t) const
    {
        int i = 0;
        const int size = m_size;
        if (size > 0) {
            const T *p = m_data;
            do {
                if (*p == t)
                    return i;
                ++p;
                ++i;
            } while (i < size);
        }
        return -1;
    }

    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

#endif
