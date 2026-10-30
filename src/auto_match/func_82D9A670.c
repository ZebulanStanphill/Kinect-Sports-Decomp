extern int fn_82CE5410();

typedef struct Vt_82D9A670 { char pad[0x10]; void (*f10)(void *, void *, unsigned int, int); } Vt_82D9A670;
typedef struct Heap_82D9A670 { Vt_82D9A670 *vt; } Heap_82D9A670;
typedef struct Mgr_82D9A670 { char pad[0x10]; Heap_82D9A670 *heap; } Mgr_82D9A670;
typedef struct Buf_82D9A670 { void *ptr; int f4; int cap; } Buf_82D9A670;
typedef struct Obj_82D9A670 { char pad[0x8c]; Buf_82D9A670 a; Buf_82D9A670 b; } Obj_82D9A670;

void fn_82D9A670(Obj_82D9A670 *param_1)
{
  Heap_82D9A670 *h;
  Buf_82D9A670 *s;
  if (param_1->a.f4 == 0) {
    s = &param_1->a;
    h = ((Mgr_82D9A670 *)fn_82CE5410())->heap;
    s->f4 = 0;
    if ((s->cap & (int)0x80000000) == 0) {
      h->vt->f10(h, s->ptr, s->cap & 0x3fffffff, 4);
    }
    s->ptr = 0;
    s->cap = (int)0x80000000;
  }
  if (param_1->b.f4 == 0) {
    s = &param_1->b;
    h = ((Mgr_82D9A670 *)fn_82CE5410())->heap;
    s->f4 = 0;
    if ((s->cap & (int)0x80000000) == 0) {
      h->vt->f10(h, s->ptr, s->cap & 0x3fffffff, 4);
    }
    s->ptr = 0;
    s->cap = (int)0x80000000;
  }
}
