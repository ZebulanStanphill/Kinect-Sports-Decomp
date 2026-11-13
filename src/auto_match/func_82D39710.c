struct Alloc_82D39710;
typedef struct AVT_82D39710 {
  int pad[4];
  void (*dealloc)(struct Alloc_82D39710 *, void *, unsigned int, int);
} AVT_82D39710;
typedef struct Alloc_82D39710 {
  AVT_82D39710 *vt;
} Alloc_82D39710;
typedef struct Router_82D39710 {
  char pad[0x10];
  Alloc_82D39710 *alloc;
} Router_82D39710;
typedef struct Arr_82D39710 {
  void *data;
  int size;
  int capFlags;
} Arr_82D39710;
typedef struct Obj_82D39710 {
  char pad[0x10];
  Arr_82D39710 a;
  Arr_82D39710 b;
  Arr_82D39710 c;
} Obj_82D39710;
extern Router_82D39710 *fn_82CE5410(void);

static void Clear(Arr_82D39710 *a, int kind)
{
  Alloc_82D39710 *al = fn_82CE5410()->alloc;
  a->size = 0;
  if ((a->capFlags & (int)0x80000000) == 0) {
    al->vt->dealloc(al, a->data, a->capFlags & 0x3fffffff, kind);
  }
  a->data = 0;
  a->capFlags = (int)0x80000000;
}

void fn_82D39710(Obj_82D39710 *o)
{
  Clear(&o->c, 2);
  Clear(&o->b, 1);
  Clear(&o->a, 2);
}
