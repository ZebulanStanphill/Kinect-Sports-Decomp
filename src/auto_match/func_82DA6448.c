struct Alloc_82DA6448;
typedef struct VT_82DA6448 { int f0, f4, f8, fc; void (*f10)(struct Alloc_82DA6448 *, void *, unsigned, int); } VT_82DA6448;
typedef struct Alloc_82DA6448 { VT_82DA6448 *vt; } Alloc_82DA6448;
typedef struct Heap_82DA6448 { char pad[0x10]; Alloc_82DA6448 *alloc; } Heap_82DA6448;
typedef struct Vec_82DA6448 { void *ptr; int size; int cap; } Vec_82DA6448;
typedef struct Obj_82DA6448 { Vec_82DA6448 a; int padc; Vec_82DA6448 b; Vec_82DA6448 c; } Obj_82DA6448;
extern Heap_82DA6448 *fn_82CE5410(void);

static void Free(Vec_82DA6448 *v, int align)
{
  Alloc_82DA6448 *al = fn_82CE5410()->alloc;
  v->size = 0;
  if ((v->cap & (int)0x80000000) == 0) {
    al->vt->f10(al, v->ptr, v->cap & 0x3fffffff, align);
  }
  v->ptr = 0;
  v->cap = (int)0x80000000;
}

void fn_82DA6448(Obj_82DA6448 *o)
{
  Free(&o->c, 0x10);
  Free(&o->b, 0x14);
  Free(&o->a, 0x14);
}
