#include "havok/hkClass.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

typedef int (*Cb_82E13058)(int, const hkClass *, int);
extern "C" const hkClass *fn_82CEAC28(const hkClass *);           // hkClass::getParent

extern "C" int fn_82E13058(int p1, const hkClass *a, StringHashMap *map, Cb_82E13058 cb, int e)
{
  int r, i;

  r = reinterpret_cast<int>(a->getName());
  StringHashMap::Iterator it = map->findKey(r);
  hkBool valid = map->isValid(it);
  if (!valid) {
    if (cb(p1, a, e) == 1) return 1;
    r = reinterpret_cast<int>(a->getName());
    map->insert(r, 1);
    if (fn_82CEAC28(a) != 0) {
      if (fn_82E13058(p1, fn_82CEAC28(a), map, cb, e) == 1) return 1;
    }
    i = 0;
    if (a->getNumDeclaredMembers() > 0) {
      do {
        const hkClassMember *member = &a->getDeclaredMember(i);
        if (member->m_class != 0) {
          if (fn_82E13058(p1, &member->getStructClass(), map, cb, e) == 1) return 1;
        }
        i++;
      } while (i < a->getNumDeclaredMembers());
    }
  }
  return 0;
}
