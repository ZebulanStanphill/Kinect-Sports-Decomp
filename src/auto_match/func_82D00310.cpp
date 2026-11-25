#include "havok/hkStreamReader.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
hkResult Map::get(hkUlong key, hkUlong *out) const
{
    const int index = int(findKey(key));
    if (index <= m_hashMod) {
        // Keep the zero-extension of the mask in the Xbox compiler output.
        const hkUint64 mask = hkUint32(m_hashMod);
        (void)mask;
        *out = m_elem[2 * (hkUlong(m_hashMod) + 1) + index];
        return HK_SUCCESS;
    }
    return HK_FAILURE;
}
