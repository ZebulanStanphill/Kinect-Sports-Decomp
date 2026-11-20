#include "havok/hkClass.h"
#include "havok/hkString.h"

typedef struct Find_82E16040 {
  int f0, f4, f8;
  unsigned int *list;
  int f10;
  int init;
} Find_82E16040;
extern "C" void fn_82E0F0E0(unsigned int *, int);

extern "C" unsigned int fn_82E16040(Find_82E16040 *o, int key)
{
  int i;
  if (o->init == 0) {
    fn_82E0F0E0(o->list, o->f10);
    o->init = 1;
  }
  for (i = 0; o->list[i] != 0; i++) {
    if (hkString::strCmp(reinterpret_cast<const char *>(key), reinterpret_cast<const hkClass *>(o->list[i])->getName()) == 0) {
      return o->list[i];
    }
  }
  return 0;
}
