#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" const char *fn_82CEAC20(void *klass);   // hkClass::getName

// Adds klass to the string map at +0xC, under name or, when that is null, its own name.
extern "C" void fn_82E094E8(char *self, void *klass, const char *name)
{
    reinterpret_cast<StringHashMap *>(self + 0xc)->insert(hkUlong(name != HK_NULL ? name : fn_82CEAC20(klass)), hkUlong(klass));
}
