#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;
extern "C" void fn_82CE7EE0(void *);
extern "C" void *fn_82CEAD98(void *, const char *);
extern "C" char lbl_8323AEF8[];

extern "C" int *fn_82E110B0(int *p, int a, int b, int c)
{
  p[1] = a;
  fn_82CE7EE0(p + 2);
  fn_82CE7EE0(p + 0xd);
  p[0x18] = b;
  p[0x19] = c;
  reinterpret_cast<StringHashMap *>(p + 0x1a)->hkCachedHashMap::hkCachedHashMap();
  *(void **)p = fn_82CEAD98(lbl_8323AEF8, "Type");
  return p;
}
