#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
void Map::clear()
{
    for (int i = 0; i < m_hashMod + 1; ++i)
        m_elem[i] = hkUlong(-1);
    m_numElems = 0;
}
