#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> Map;

template <>
hkBool Map::isValid(Iterator it) const
{
    return int(it) <= m_hashMod;
}
