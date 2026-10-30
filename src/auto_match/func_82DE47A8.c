typedef struct Alloc_82DE47A8 Alloc_82DE47A8;
typedef struct AllocVt_82DE47A8 {
  void *s0, *s1;
  void (*fn8)(Alloc_82DE47A8 *, void *, unsigned);
  void *sc;
  void (*fn10)(Alloc_82DE47A8 *, void *, unsigned, int);
} AllocVt_82DE47A8;
struct Alloc_82DE47A8 { AllocVt_82DE47A8 *vt; };
typedef struct Ctx_82DE47A8 { char pad[0x10]; Alloc_82DE47A8 *alloc; } Ctx_82DE47A8;
typedef struct Buf_82DE47A8 { void *ptr; int size; int cap; } Buf_82DE47A8;
typedef struct Obj_82DE47A8 { char pad0[4]; unsigned short id; char pad[84 - 6]; Buf_82DE47A8 buf; } Obj_82DE47A8;
extern Ctx_82DE47A8 *fn_82CE5410(void);
extern void fn_82D95638(void *);

Obj_82DE47A8 *fn_82DE47A8(Obj_82DE47A8 *o, unsigned flags)
{
  Buf_82DE47A8 *b = &o->buf;
  Alloc_82DE47A8 *a = fn_82CE5410()->alloc;
  b->size = 0;
  if ((b->cap & (int)0x80000000) == 0) {
    a->vt->fn10(a, b->ptr, b->cap & 0x3fffffff, 4);
  }
  b->ptr = 0;
  b->cap = 0x80000000;
  fn_82D95638(o);
  if ((flags & 1) != 0) {
    a = fn_82CE5410()->alloc;
    a->vt->fn8(a, o, o->id);
  }
  return o;
}
