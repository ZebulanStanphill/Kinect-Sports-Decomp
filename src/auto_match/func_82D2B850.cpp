#include "havok/hkArrayUtil.h"

typedef struct E_82D2B850 { unsigned x; unsigned y; } E_82D2B850;
typedef struct Vec_82D2B850 { E_82D2B850 *data; int size; int cap; } Vec_82D2B850;
typedef struct Ctx_82D2B850 { char pad[0x10]; void *f10; } Ctx_82D2B850;
typedef struct Obj_82D2B850 { char pad[4]; Vec_82D2B850 *vec; } Obj_82D2B850;
extern "C" Ctx_82D2B850 *fn_82CE5410(void);

static __inline void Push_82D2B850(Vec_82D2B850 *v, const E_82D2B850 *e)
{
  Ctx_82D2B850 *c = fn_82CE5410();
  E_82D2B850 *p;
  if (v->size == (v->cap & 0x3fffffff))
    hkArrayUtil::_reserveMore(*reinterpret_cast<hkMemoryAllocator *>(c->f10), v, 8);
  p = v->data + v->size;
  if (p != 0)
    *p = *e;
  v->size = v->size + 1;
}

extern "C" int fn_82D2B850(Obj_82D2B850 *o, unsigned a, unsigned b)
{
  E_82D2B850 e;
  e.x = a;
  e.y = b;
  Push_82D2B850(o->vec, &e);
  return 0;
}
