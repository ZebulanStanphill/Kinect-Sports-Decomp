typedef struct Alloc_82CF1790 { struct AllocVt_82CF1790 *vt; } Alloc_82CF1790;
typedef struct AllocVt_82CF1790 { char pad[0x10]; void (*free_)(Alloc_82CF1790 *, void *, unsigned, int); } AllocVt_82CF1790;
typedef struct Ctx_82CF1790 { char pad[0x10]; Alloc_82CF1790 *alloc; } Ctx_82CF1790;
typedef struct Vec_82CF1790 { unsigned *data; int size; int cap; } Vec_82CF1790;
typedef struct Obj_82CF1790 { char pad[0x30]; Vec_82CF1790 v; } Obj_82CF1790;
extern Ctx_82CF1790 *fn_82CE5410(void);
extern void fn_82CF60E0(unsigned, int);

void fn_82CF1790(Obj_82CF1790 *o)
{
  int i;
  int off;
  unsigned e;
  Vec_82CF1790 *v;
  Alloc_82CF1790 *a;
  i = 0;
  if (0 < o->v.size) {
    off = 0;
    do {
      e = *(unsigned *)(off + (int)o->v.data);
      if (e != 0)
        fn_82CF60E0(e, 1);
      i++;
      off += 4;
    } while (i < o->v.size);
  }
  o->v.size = 0;
  v = &o->v;
  a = fn_82CE5410()->alloc;
  v->size = 0;
  if ((v->cap & (int)0x80000000) == 0)
    a->vt->free_(a, v->data, v->cap & 0x3fffffff, 4);
  v->data = 0;
  v->cap = 0x80000000;
}
