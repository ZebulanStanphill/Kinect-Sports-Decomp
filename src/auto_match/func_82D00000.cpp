#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
hkUlong Map::getKey(Iterator it) const
{
    return m_elem[m_hashMod + int(it) + 1];
}
