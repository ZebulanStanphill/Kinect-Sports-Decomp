#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
hkUlong Map::getValue(Iterator it) const
{
    return m_elem[(m_hashMod + 1) * 2 + int(it)];
}
