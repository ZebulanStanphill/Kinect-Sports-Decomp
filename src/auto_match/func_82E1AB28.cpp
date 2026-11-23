#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" int fn_82E1AB28(char *self, int key)
{
    return reinterpret_cast<const StringHashMap *>(self + 0x2c)->getWithDefault(hkUlong(key), hkUlong(key));
}
