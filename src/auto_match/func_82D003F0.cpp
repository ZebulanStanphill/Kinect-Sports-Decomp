#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

// Frees the three arrays (hashes, keys, values) of m_hashMod + 1 entries each.
template <>
Map::~hkCachedHashMap()
{
    int numEntries = (m_hashMod + 1) * 3;
    hkUlong *elem = m_elem;
    hkContainerHeapAllocator::get(this).blockFree(elem, numEntries * int(sizeof(hkUlong)));
}
