#include "havok/hkMap.h"

extern "C" int fn_82CFBBF0(const char *a, const char *b);

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
Map::Iterator Map::findKey(hkUlong key) const
{
    const char *name = reinterpret_cast<const char *>(key);
    hkUlong hash = 0;
    for (int i = 0; name[i] != 0; ++i)
        hash = hash * 31 + name[i];
    hash &= 0x7FFFFFFFUL;
    for (hkUlong index = hash & m_hashMod; m_elem[index] != hkUlong(-1); index = (index + 1) & m_hashMod) {
        if (m_elem[index] == hash &&
            fn_82CFBBF0(name, reinterpret_cast<const char *>(m_elem[m_hashMod + index + 1])) == 0)
            return reinterpret_cast<Iterator>(index);
    }
    return reinterpret_cast<Iterator>(m_hashMod + 1);
}
