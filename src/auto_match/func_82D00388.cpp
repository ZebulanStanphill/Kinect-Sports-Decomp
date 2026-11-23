#include "havok/hkMap.h"
#include "havok/hkString.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
Map::hkCachedHashMap(hkStringMapOperations)
{
    const int capacity = 16;
    const int bucketBytes = sizeof(hkUlong);
    m_elem = static_cast<hkUlong *>(hkContainerHeapAllocator::get(this).blockAlloc(capacity * 3 * bucketBytes));
    hkString::memSet(m_elem, 0xff, capacity * bucketBytes);
    m_numElems = 0;
    m_hashMod = capacity - 1;
}
