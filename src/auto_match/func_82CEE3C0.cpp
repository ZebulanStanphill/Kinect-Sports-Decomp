#include "havok/hkArrayUtil.h"

typedef struct Str_82CEE3C0 { int first; int size; unsigned cap; } Str_82CEE3C0;
typedef struct Obj_82CEE3C0 { char pad[8]; Str_82CEE3C0 *s; } Obj_82CEE3C0;
typedef struct Ctx_82CEE3C0 { char pad[0x10]; void *h; } Ctx_82CEE3C0;
extern "C" Ctx_82CEE3C0 *fn_82CE5410(void);

extern "C" void fn_82CEE3C0(Obj_82CEE3C0 *o)
{
  Str_82CEE3C0 *s = o->s;
  int need = s->size + 1;
  void *h = fn_82CE5410()->h;
  int n;

  if ((int)(s->cap & 0x3fffffff) < need) {
    n = (s->cap & 0x3fffffff) << 1;
    hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(h), s, (need < n) ? n : need, 1);
  }
  *(char *)(o->s->size + o->s->first) = 0;
}
