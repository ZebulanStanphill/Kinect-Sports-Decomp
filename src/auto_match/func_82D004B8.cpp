// hkCachedHashMap<hkStringMapOperations>::resizeTable(int capacity): moves the
// entries into new arrays of the given capacity.
#include "havok/hkMap.h"
#include "havok/hkString.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

template <>
void StringHashMap::resizeTable(int capacity)
{
    hkUlong *oldElem = m_elem;
    int oldCapacity = m_hashMod + 1;

    m_elem = static_cast<hkUlong *>(hkContainerHeapAllocator::get(this).blockAlloc(capacity * 3 * int(sizeof(hkUlong))));
    hkString::memSet(m_elem, 0xff, capacity * int(sizeof(hkUlong)));
    m_numElems = 0;
    m_hashMod = capacity - 1;
    for (int i = 0; i < oldCapacity; i++) {
        if (oldElem[i] != hkUlong(-1)) {
            insert(oldElem[oldCapacity + i], oldElem[oldCapacity * 2 + i]);
        }
    }
    hkContainerHeapAllocator::get(this).blockFree(oldElem, oldCapacity * 3 * int(sizeof(hkUlong)));
}
