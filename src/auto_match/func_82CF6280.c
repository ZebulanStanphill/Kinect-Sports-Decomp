typedef struct Alloc_82CF6280 Alloc_82CF6280;
typedef struct AllocVtbl_82CF6280 {
  void *f0;
  void *f4;
  void *f8;
  void *fc;
  void (*Free)(Alloc_82CF6280 *a, void *p, unsigned cap, unsigned elemSize);
} AllocVtbl_82CF6280;
struct Alloc_82CF6280 { AllocVtbl_82CF6280 *vt; };
typedef struct Env_82CF6280 { char pad[0x14]; Alloc_82CF6280 *alloc; } Env_82CF6280;
typedef struct Elem_82CF6280 { char pad[0x58]; } Elem_82CF6280;
typedef struct Array_82CF6280 {
  Elem_82CF6280 *data;
  int count;
  int cap;
} Array_82CF6280;
typedef struct Obj_82CF6280 {
  char pad[0x58];
  Array_82CF6280 a;
  Array_82CF6280 b;
} Obj_82CF6280;
extern Env_82CF6280 *fn_82CE5410(void);
extern void fn_82CF1790(void *p);

static __forceinline void clearArray(Array_82CF6280 *arr)
{
  Env_82CF6280 *env = fn_82CE5410();
  int n = arr->count;
  Elem_82CF6280 *p = arr->data;
  Alloc_82CF6280 *al = env->alloc;
  int i;
  for (i = 0; i < n; i++)
    fn_82CF1790(&p[i]);
  arr->count = 0;
  if ((arr->cap & (int)0x80000000) == 0)
    al->vt->Free(al, arr->data, arr->cap & 0x3fffffff, sizeof(Elem_82CF6280));
  arr->data = 0;
  arr->cap = 0x80000000;
}

void fn_82CF6280(Obj_82CF6280 *o)
{
  clearArray(&o->b);
  clearArray(&o->a);
  fn_82CF1790(o);
}
