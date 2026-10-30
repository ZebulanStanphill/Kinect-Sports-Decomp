typedef struct E_82D4D2E0 { unsigned id : 24; unsigned flag : 8; } E_82D4D2E0;
typedef struct Vec_82D4D2E0 { E_82D4D2E0 *ptr; int size; unsigned cap; } Vec_82D4D2E0;
typedef struct Obj_82D4D2E0 { int pad; Vec_82D4D2E0 v; } Obj_82D4D2E0;
typedef struct Ctx_82D4D2E0 { char pad[0x10]; void *h; } Ctx_82D4D2E0;
extern Ctx_82D4D2E0 *fn_82CE5410(void);
extern void fn_82CE63B0(void *, Vec_82D4D2E0 *, int);

void fn_82D4D2E0(Obj_82D4D2E0 *o, int x)
{
  Vec_82D4D2E0 *v = &o->v;
  Ctx_82D4D2E0 *c = fn_82CE5410();
  E_82D4D2E0 t;
  E_82D4D2E0 *e;

  if (v->size == (int)(v->cap & 0x3fffffff)) {
    fn_82CE63B0(c->h, v, 4);
  }
  e = v->ptr + v->size;
  v->size = v->size + 1;
  e->flag = 0;
  t.flag = e->flag;
  t.id = x;
  *e = t;
}
