struct Al_82CE7240;
typedef struct {
  void *p0;
  void *p4;
  void *p8;
  void *pc;
  void (*f10)(struct Al_82CE7240 *, void *, unsigned, int);
} AlVt_82CE7240;
typedef struct Al_82CE7240 { AlVt_82CE7240 *vt; } Al_82CE7240;
typedef struct { char pad[0x14]; Al_82CE7240 *al; } Heap_82CE7240;
typedef struct { void *data; int size; unsigned cap; } Vec_82CE7240;
typedef struct {
  int pad0;
  Vec_82CE7240 a;
  Vec_82CE7240 b;
} Obj_82CE7240;
extern Heap_82CE7240 *fn_82CE5410(void);

static void Free_82CE7240(Vec_82CE7240 *v, int align)
{
  Al_82CE7240 *al = fn_82CE5410()->al;
  v->size = 0;
  if (((int)v->cap & (int)0x80000000) == 0) {
    al->vt->f10(al, v->data, v->cap & 0x3fffffff, align);
  }
  v->data = 0;
  v->cap = 0x80000000;
}

void fn_82CE7240(Obj_82CE7240 *o)
{
  Free_82CE7240(&o->b, 4);
  Free_82CE7240(&o->a, 4);
}
