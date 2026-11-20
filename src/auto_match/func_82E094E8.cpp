#include "havok/hkClass.h"
#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

// Adds klass to the string map at +0xC, under name or, when that is null, its own name.
extern "C" void fn_82E094E8(char *self, void *klass, const char *name)
{
    reinterpret_cast<StringHashMap *>(self + 0xc)->insert(hkUlong(name != HK_NULL ? name : static_cast<const hkClass *>(klass)->getName()), hkUlong(klass));
}
