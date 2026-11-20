#include "havok/hkMap.h"
#include "havok/hkString.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

static void release(void *v)
{
    hkString::strFree(static_cast<char *>(v), hkMemoryRouter::getInstance().heap());
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
