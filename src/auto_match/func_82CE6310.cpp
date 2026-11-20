#include "havok/hkArray.h"

extern "C" void *memcpy(void *dst, const void *src, unsigned int size);

void hkArrayUtil::_reserve(hkMemoryAllocator &alloc, void *array, int capacity, int elemSize)
{
    hkArrayBase<char> &a = *static_cast<hkArrayBase<char> *>(array);
    if ((a.m_capacityAndFlags & hkArrayBase<char>::DONT_DEALLOCATE_FLAG) == 0) {
        char *data = static_cast<char *>(alloc.bufRealloc(a.m_data, a.getCapacity(), capacity, elemSize));
        a.m_data = data;
        a.m_capacityAndFlags = capacity;
    } else {
        char *data = static_cast<char *>(alloc.bufAlloc(capacity, elemSize));
        memcpy(data, a.m_data, a.m_size * elemSize);
        a.m_data = data;
        a.m_capacityAndFlags = capacity;
    }
}
