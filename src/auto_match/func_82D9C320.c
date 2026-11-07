typedef unsigned int uint;

typedef struct Allocator_82D9C320 Allocator_82D9C320;

typedef struct AllocatorVt_82D9C320 {
  void *slot0;
  void *slot1;
  void *slot2;
  void *slot3;
  void (*free)(Allocator_82D9C320 *self, void *data, int count, int elemSize);
} AllocatorVt_82D9C320;

struct Allocator_82D9C320 {
  AllocatorVt_82D9C320 *vt;
};

typedef struct Context_82D9C320 {
  char pad[0x10];
  Allocator_82D9C320 *alloc;
} Context_82D9C320;

typedef struct Array_82D9C320 {
  void *data;
  int size;
  int capFlags;
} Array_82D9C320;

typedef struct Obj_82D9C320 {
  char pad[0x160];
  Array_82D9C320 arr;
} Obj_82D9C320;

extern Context_82D9C320 *fn_82CE5410(void);
extern int fn_82D99CC8(Obj_82D9C320 *o);

static __forceinline void clearAndDealloc_82D9C320(Array_82D9C320 *a)
{
  Allocator_82D9C320 *al = fn_82CE5410()->alloc;
  a->size = 0;
  if ((a->capFlags & (int)0x80000000) == 0) {
    al->vt->free(al, a->data, a->capFlags & 0x3fffffff, 8);
  }
  a->data = 0;
  a->capFlags = (int)0x80000000;
}

void fn_82D9C320(Obj_82D9C320 *o)
{
  if (o->arr.size == 0) {
    clearAndDealloc_82D9C320(&o->arr);
  }
  fn_82D99CC8(o);
}
