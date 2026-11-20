#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
Map::Iterator Map::getNext(Iterator it) const
{
    int index = int(it) + 1;
    if (index <= m_hashMod) {
        const hkUlong *hash = m_elem + index;
        do {
            if (*hash != hkUlong(-1))
                return reinterpret_cast<Iterator>(index);
            ++index;
            ++hash;
        } while (index <= m_hashMod);
    }
    return reinterpret_cast<Iterator>(index);
}
