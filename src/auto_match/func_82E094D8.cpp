#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" unsigned int fn_82E094D8(char *self, unsigned int key)
{
    return reinterpret_cast<const StringHashMap *>(self + 0xc)->getWithDefault(hkUlong(key), hkUlong(0));
}
