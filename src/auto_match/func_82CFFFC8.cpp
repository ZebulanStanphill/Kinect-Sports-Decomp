#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
Map::Iterator Map::getIterator() const
{
    int index = 0;
    if (m_hashMod >= 0) {
        const hkUlong *hash = m_elem;
        do {
            if (*hash != hkUlong(-1))
                return reinterpret_cast<Iterator>(index);
            ++index;
            ++hash;
        } while (index <= m_hashMod);
    }
    return reinterpret_cast<Iterator>(index);
}
