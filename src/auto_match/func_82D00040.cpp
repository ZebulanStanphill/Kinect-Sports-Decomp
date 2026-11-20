#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
void Map::setValue(Iterator it, hkUlong value)
{
    m_elem[(m_hashMod + 1) * 2 + int(it)] = value;
}
