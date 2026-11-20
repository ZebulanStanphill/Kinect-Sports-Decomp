#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

// The loop never advances the iterator (no getNext): the original does the same.
extern "C" void fn_82E1ABA8(char *self, const StringHashMap *map)
{
    StringHashMap::Iterator it;
    hkUlong key;
    hkUlong value;

    it = map->getIterator();
    for (;;) {
        hkBool valid = map->isValid(it);
        if (!valid)
            break;
        key = map->getKey(it);
        value = map->getValue(it);
        reinterpret_cast<StringHashMap *>(self + 0x2c)->insert(key, value);
        reinterpret_cast<StringHashMap *>(self + 0x3c)->insert(value, key);
    }
}
