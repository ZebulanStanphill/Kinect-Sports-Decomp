#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;
typedef int (*LookupFn)(void *, int);

extern "C" int fn_82E124B0(char *self, int key)
{
    const StringHashMap *map = reinterpret_cast<const StringHashMap *>(self + 8);
    const int name = map->getWithDefault(hkUlong(key), hkUlong(key));
    if (*(void **)(self + 0x18))
        return (*(LookupFn *)(**(int **)(self + 0x18) + 16))(*(void **)(self + 0x18), name);
    return 0;
}
