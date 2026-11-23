#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
hkUlong Map::getWithDefault(hkUlong key, hkUlong fallback) const
{
    const int index = int(findKey(key));
    if (index <= m_hashMod) {
        // Keep the zero-extension of the mask in the Xbox compiler output.
        const hkUint64 mask = hkUint32(m_hashMod);
        (void)mask;
        return m_elem[2 * (hkUlong(m_hashMod) + 1) + index];
    }
    return fallback;
}
