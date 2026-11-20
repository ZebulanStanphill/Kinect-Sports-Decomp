#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

// Adds the object under the name its first member points at, to the string map at +0x8.
extern "C" void fn_82E092A0(char *self, const char **object)
{
    reinterpret_cast<StringHashMap *>(self + 8)->insert(hkUlong(*object), hkUlong(object));
}
