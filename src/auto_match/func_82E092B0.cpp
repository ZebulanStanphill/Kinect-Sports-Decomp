#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

struct Entry {
    int pad;
    void (*callback)(void *, int);
};

extern "C" Entry *fn_82E092B0(char *self, void *arg, void *key)
{
    const StringHashMap *map = reinterpret_cast<const StringHashMap *>(self + 8);
    Entry *entry = reinterpret_cast<Entry *>(map->getWithDefault(hkUlong(key), 0));
    if (entry) {
        if (entry->callback)
            entry->callback(arg, 1);
        return entry;
    }
    return 0;
}
