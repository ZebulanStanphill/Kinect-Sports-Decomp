#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" unsigned int fn_82E09430(char *self, unsigned int key)
{
    return reinterpret_cast<const StringHashMap *>(self + 8)->getWithDefault(hkUlong(key), hkUlong(0));
}
