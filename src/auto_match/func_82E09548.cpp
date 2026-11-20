#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" void fn_82E09548(int *self, const StringHashMap *map)
{
    StringHashMap::Iterator it;
    hkUlong value;

    it = map->getIterator();
    for (;;) {
        hkBool valid = map->isValid(it);
        if (!valid)
            break;
        value = map->getValue(it);
        (*(int (**)(int *, hkUlong, int))(*self + 0x1c))(self, value, 0);
        it = map->getNext(it);
    }
}
