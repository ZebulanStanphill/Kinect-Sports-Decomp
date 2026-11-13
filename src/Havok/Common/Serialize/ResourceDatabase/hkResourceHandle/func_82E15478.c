typedef struct Obj_82E15478 Obj_82E15478;
typedef struct ObjVtbl_82E15478 {
  void *f[13];
  void (*Visit)(Obj_82E15478 *, void *);
} ObjVtbl_82E15478;
struct Obj_82E15478 {
  ObjVtbl_82E15478 *vtbl;
};

typedef struct Iface_82E15478 Iface_82E15478;
typedef struct IfaceVtbl_82E15478 {
  void *f0;
  void *f4;
  void *f8;
  void *fc;
  void (*Free)(Iface_82E15478 *, void *, int, int);
} IfaceVtbl_82E15478;
struct Iface_82E15478 {
  IfaceVtbl_82E15478 *vtbl;
};
typedef struct Ctx_82E15478 {
  char pad[0x10];
  Iface_82E15478 *alloc;
} Ctx_82E15478;
extern Ctx_82E15478 *fn_82CE5410(void);

typedef struct Array_82E15478 {
  Obj_82E15478 **data;
  int count;
  int capacity;
} Array_82E15478;

extern void fn_82E14BC8(void *self, Array_82E15478 *out);

void fn_82E15478(void *self, void *arg)
{
  Array_82E15478 arr;
  Iface_82E15478 *it;
  int i;

  arr.data = 0;
  arr.count = 0;
  arr.capacity = 0x80000000;
  fn_82E14BC8(self, &arr);
  for (i = 0; i < arr.count; i++) {
    Obj_82E15478 *o = arr.data[i];
    o->vtbl->Visit(o, arg);
  }
  it = fn_82CE5410()->alloc;
  arr.count = 0;
  if ((arr.capacity & (1 << 31)) == 0) {
    it->vtbl->Free(it, arr.data, arr.capacity & 0x3fffffff, 4);
  }
}
