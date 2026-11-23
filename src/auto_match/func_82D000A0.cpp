#include "havok/hkMap.h"
#include "havok/hkString.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
void Map::insert(hkUlong key, hkUlong val)
{
    const char *name = reinterpret_cast<const char *>(key);
    hkUlong hash = 0;
    for (int i = 0; name[i] != 0; ++i)
        hash = hash * 31 + name[i];
    hash &= 0x7FFFFFFFUL;
    // This is quite conservative. We could grow more slowly at the cost of potentially longer searches.
    if (m_numElems * 2 > m_hashMod) {
        resizeTable((m_hashMod + 1) * 2);
    }
    hkUlong i;
    for (i = hash & m_hashMod; m_elem[i] != hkUlong(-1); i = (i + 1) & m_hashMod) {
        if (m_elem[i] == hash &&
            hkString::strCmp(name, reinterpret_cast<const char *>(m_elem[m_hashMod + i + 1])) == 0) {
            goto KEY_FOUND;
        }
    }
    m_numElems += 1;
KEY_FOUND:
    m_elem[i] = hash;
    m_elem[m_hashMod + i + 1] = key;
    m_elem[(m_hashMod + 1) * 2 + i] = val;
}
