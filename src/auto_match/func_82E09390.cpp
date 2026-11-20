#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

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
        reinterpret_cast<StringHashMap *>(dst + 8)->insert(key, val);
        it = map->getNext(it);
    }
}
