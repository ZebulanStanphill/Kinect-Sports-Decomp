#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

typedef struct { int first; int second; int third; } Triple;
extern "C" int fn_82E19DA0(void *p);
extern "C" int fn_82E1A470(void *p, int v, Triple *t, int n);

extern "C" void fn_82E1ACB8(const StringHashMap *map)
{
  StringHashMap::Iterator it;
  hkMemoryRouter *router;
  int v;
  unsigned char buf[4];
  Triple t;

  fn_82E19DA0(buf);
  t.first = 0;
  t.second = 0;
  t.third = -1;
  router = fn_82CE5410();
  fn_82CEAB00(&t, &router->heap(), 0);
  it = map->getIterator();
  for (;;) {
    hkBool valid = map->isValid(it);
    if (!valid)
      break;
    v = map->getValue(it);
    fn_82E1A470(buf, v, &t, 1);
    it = map->getNext(it);
  }
  router = fn_82CE5410();
  fn_82CEA4B8(&t, &router->heap());
  fn_82BA02A8(&t);
}
