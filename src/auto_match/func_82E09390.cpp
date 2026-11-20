#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" void fn_82D000A0(void *dst, hkUlong key, hkUlong val);

extern "C" void fn_82E09390(char *dst, char *src)
{
    const StringHashMap *map;
    StringHashMap::Iterator it;
    hkUlong val;
    hkUlong key;

    map = reinterpret_cast<const StringHashMap *>(src + 8);
    it = map->getIterator();
    for (;;) {
        hkBool valid = map->isValid(it);
        if (!valid)
            break;
        val = map->getValue(it);
        key = map->getKey(it);
        fn_82D000A0(dst + 8, key, val);
        it = map->getNext(it);
    }
}
