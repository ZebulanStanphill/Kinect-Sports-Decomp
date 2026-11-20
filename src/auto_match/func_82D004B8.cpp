// hkCachedHashMap<hkStringMapOperations>::resizeTable(int capacity): moves the
// entries into new arrays of the given capacity. It keeps its fn_ name.
#include "havok/hkMap.h"
#include "havok/hkString.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" void fn_82D004B8(StringHashMap *self, int capacity)
{
    hkUlong *oldElem = self->m_elem;
    int oldCapacity = self->m_hashMod + 1;

    self->m_elem = static_cast<hkUlong *>(hkContainerHeapAllocator::get(self).blockAlloc(capacity * 3 * int(sizeof(hkUlong))));
    hkString::memSet(self->m_elem, 0xff, capacity * int(sizeof(hkUlong)));
    self->m_numElems = 0;
    self->m_hashMod = capacity - 1;
    for (int i = 0; i < oldCapacity; i++) {
        if (oldElem[i] != hkUlong(-1)) {
            self->insert(oldElem[oldCapacity + i], oldElem[oldCapacity * 2 + i]);
        }
    }
    hkContainerHeapAllocator::get(self).blockFree(oldElem, oldCapacity * 3 * int(sizeof(hkUlong)));
}
