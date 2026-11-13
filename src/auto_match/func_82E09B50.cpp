typedef struct Iface_82E09B50 Iface_82E09B50;
typedef struct IfaceVtbl_82E09B50 {
  void *f0;
  void *f4;
  void *f8;
  void *fc;
  void (*Free)(Iface_82E09B50 *, void *, int, int);
} IfaceVtbl_82E09B50;
struct Iface_82E09B50 {
  IfaceVtbl_82E09B50 *vtbl;
};
typedef struct Ctx_82E09B50 {
  char pad[0x10];
  Iface_82E09B50 *alloc;
} Ctx_82E09B50;
extern "C" Ctx_82E09B50 *fn_82CE5410(void);

typedef struct Array_82E09B50 {
  void **data;
  int count;
  int capacity;
} Array_82E09B50;

class Source_82E09B50 {
public:
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void GetItems(Array_82E09B50 *);
};

typedef struct Obj_82E09B50 Obj_82E09B50;
typedef struct ObjVtbl_82E09B50 {
  void *f[7];
  void (*Add)(Obj_82E09B50 *, void *, int);
} ObjVtbl_82E09B50;
struct Obj_82E09B50 {
  ObjVtbl_82E09B50 *vtbl;
};

extern "C" void fn_82E09B50(Obj_82E09B50 *self, Source_82E09B50 *src)
{
  Array_82E09B50 arr;
  Iface_82E09B50 *it;
  int i;

  arr.data = 0;
  arr.count = 0;
  arr.capacity = 0x80000000;
  src->GetItems(&arr);
  for (i = 0; i < arr.count; i++) {
    self->vtbl->Add(self, arr.data[i], 0);
  }
  it = fn_82CE5410()->alloc;
  arr.count = 0;
  if ((arr.capacity & (1 << 31)) == 0) {
    it->vtbl->Free(it, arr.data, arr.capacity & 0x3fffffff, 4);
  }
}
