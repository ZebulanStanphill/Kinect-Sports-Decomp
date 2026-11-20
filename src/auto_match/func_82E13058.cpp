#include "havok/hkMap.h"
#include "havok/hkClass.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

typedef int (*Cb_82E13058)(int, const hkClass *, int);
extern "C" int fn_82CEAC20(const hkClass *);                      // hkClass::getName
extern "C" const hkClass *fn_82CEAC28(const hkClass *);           // hkClass::getParent
extern "C" int fn_82CEAF18(const hkClass *);                      // hkClass::getNumDeclaredMembers
extern "C" const hkClassMember *fn_82CEAF20(const hkClass *, int); // hkClass::getDeclaredMember
extern "C" void fn_82D000A0(StringHashMap *, int, int);

extern "C" int fn_82E13058(int p1, const hkClass *a, StringHashMap *map, Cb_82E13058 cb, int e)
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
        const hkClassMember *member = fn_82CEAF20(a, i);
        if (member->m_class != 0) {
          if (fn_82E13058(p1, &member->getStructClass(), map, cb, e) == 1) return 1;
        }
        i++;
      } while (i < fn_82CEAF18(a));
    }
  }
  return 0;
}
