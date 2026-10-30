extern int *fn_82CE5410();

typedef struct { void **vt; } Heap_82D395E0;
typedef struct { void *p; int cnt; unsigned flags; } Buf_82D395E0;
typedef struct { char pad[0x10]; Buf_82D395E0 b0; Buf_82D395E0 b1; Buf_82D395E0 b2; Buf_82D395E0 b3; } Obj_82D395E0;

static __forceinline void rel_(Buf_82D395E0 *b)
{
  Heap_82D395E0 *h = (Heap_82D395E0 *)fn_82CE5410()[4];
  b->cnt = 0;
  if (((int)b->flags & (int)0x80000000) == 0) {
    ((void (*)(void *, void *, unsigned, int))h->vt[0x10 / 4])(h, b->p, b->flags & 0x3fffffff, 2);
  }
  b->p = 0;
  b->flags = 0x80000000;
}

void fn_82D395E0(Obj_82D395E0 *o)
{
  rel_(&o->b3);
  rel_(&o->b2);
  rel_(&o->b1);
  rel_(&o->b0);
}
