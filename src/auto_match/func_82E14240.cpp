#include "havok/hkMap.h"
#include "havok/hkStreamReader.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" hkResult fn_82E14240(const StringHashMap *map, hkUlong key, hkUlong *result)
{
    hkUlong value;
    const hkResult status = map->get(key, &value);
    if (status == HK_SUCCESS) {
        *result = value;
        return status;
    }
    return HK_FAILURE;
}
