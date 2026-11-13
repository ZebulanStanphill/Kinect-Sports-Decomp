typedef struct Iface Iface;
typedef struct IfaceVtbl {
  void *f0;
  void *f4;
  void (*Release)(Iface *, int, int);
  void *fc;
  void (*Free)(Iface *, int, int, int);
} IfaceVtbl;
struct Iface {
  IfaceVtbl *vtbl;
};
typedef struct Ctx {
  char pad[0x10];
  Iface *alloc;
} Ctx;
extern Ctx *fn_82CE5410(void);

typedef struct Array {
  int *data;
  int count;
  int capacity;
} Array;

void fn_82D13F58(Array *a)

{
  Iface *it;
  int i;

  for (i = 0; i < a->count; i++) {
    int v = a->data[i];
    it = fn_82CE5410()->alloc;
    it->vtbl->Release(it,v,0x908);
  }
  a->count = 0;
  it = fn_82CE5410()->alloc;
  a->count = 0;
  if ((a->capacity & (1 << 31)) == 0) {
    it->vtbl->Free(it,(int)a->data,a->capacity & 0x3fffffff,4);
  }
  a->data = 0;
  a->capacity = 0x80000000;
}
