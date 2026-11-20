#include "havok/hkArray.h"

extern "C" void *memcpy(void *dst, const void *src, unsigned int size);

void hkArrayUtil::_reserveMore(hkMemoryAllocator &alloc, void *array, int elemSize)
{
    hkArrayBase<char> &a = *static_cast<hkArrayBase<char> *>(array);
    int newCapacity = a.m_size != 0 ? a.m_size * 2 : 1;
    if ((a.m_capacityAndFlags & hkArrayBase<char>::DONT_DEALLOCATE_FLAG) == 0) {
        char *data = static_cast<char *>(alloc.bufRealloc(a.m_data, a.getCapacity(), newCapacity, elemSize));
        a.m_data = data;
        a.m_capacityAndFlags = newCapacity;
    } else {
        char *data = static_cast<char *>(alloc.bufAlloc(newCapacity, elemSize));
        memcpy(data, a.m_data, elemSize * a.m_size);
        a.m_data = data;
        a.m_capacityAndFlags = newCapacity;
    }
}
