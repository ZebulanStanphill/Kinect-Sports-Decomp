#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

typedef int (*Cb_82E13058)(int, int, int);
extern "C" int fn_82CEAC20(int);
extern "C" unsigned fn_82CEAC28(int);
extern "C" int fn_82CEAF18(int);
extern "C" unsigned *fn_82CEAF20(int, int);
extern "C" int fn_82CFD5A8(const unsigned *);
extern "C" void fn_82D000A0(StringHashMap *, int, int);

extern "C" int fn_82E13058(int p1, int a, StringHashMap *map, Cb_82E13058 cb, int e)
{
  int r, i;

  r = fn_82CEAC20(a);
  StringHashMap::Iterator it = map->findKey(r);
  hkBool valid = map->isValid(it);
  if (!valid) {
    if (cb(p1, a, e) == 1) return 1;
    r = fn_82CEAC20(a);
    fn_82D000A0(map, r, 1);
    if (fn_82CEAC28(a) != 0) {
      if (fn_82E13058(p1, fn_82CEAC28(a), map, cb, e) == 1) return 1;
    }
    i = 0;
    if (fn_82CEAF18(a) > 0) {
      do {
        const unsigned *member = fn_82CEAF20(a, i);
        if (member[1] != 0) {
          if (fn_82E13058(p1, fn_82CFD5A8(member), map, cb, e) == 1) return 1;
        }
        i++;
      } while (i < fn_82CEAF18(a));
    }
  }
  return 0;
}
