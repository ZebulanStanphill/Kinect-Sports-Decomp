#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" void fn_82CFBF28(void *, void *);

static void release(void *v)
{
    fn_82CFBF28(v, &hkMemoryRouter::getInstance().heap());
}

extern "C" void fn_82E1A7F0(StringHashMap *map)
{
    StringHashMap::Iterator it = map->getIterator();
    for (;;) {
        hkBool valid = map->isValid(it);
        if (!valid)
            break;
        release(reinterpret_cast<void *>(map->getKey(it)));
        it = map->getNext(it);
    }
    map->clear();
}
