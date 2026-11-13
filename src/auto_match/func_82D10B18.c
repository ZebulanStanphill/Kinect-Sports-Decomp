/* Collects objects into a local hkArray (fn_82D10A80), deletes each one through its virtual
   destructor, then frees the array storage through the thread memory allocator. */
typedef struct Obj_82D10B18 Obj_82D10B18;
typedef struct ObjVtbl_82D10B18 {
  void (*Delete)(Obj_82D10B18 *, int);
} ObjVtbl_82D10B18;
struct Obj_82D10B18 {
  ObjVtbl_82D10B18 *vtbl;
};

typedef struct Iface_82D10B18 Iface_82D10B18;
typedef struct IfaceVtbl_82D10B18 {
  void *f0;
  void *f4;
  void *f8;
  void *fc;
  void (*Free)(Iface_82D10B18 *, void *, int, int);
} IfaceVtbl_82D10B18;
struct Iface_82D10B18 {
  IfaceVtbl_82D10B18 *vtbl;
};
typedef struct Ctx_82D10B18 {
  char pad[0x10];
  Iface_82D10B18 *alloc;
} Ctx_82D10B18;
extern Ctx_82D10B18 *fn_82CE5410(void);

typedef struct Array_82D10B18 {
  Obj_82D10B18 **data;
  int count;
  int capacity;
} Array_82D10B18;

extern void fn_82D10A80(void *a, void *b, Array_82D10B18 *out, void *c);

void fn_82D10B18(void *a, void *b, void *c)
{
  Array_82D10B18 arr;
  Iface_82D10B18 *it;
  int i;

  arr.data = 0;
  arr.count = 0;
  arr.capacity = 0x80000000;
  fn_82D10A80(a, b, &arr, c);
  for (i = 0; i < arr.count; i++) {
    Obj_82D10B18 *o = arr.data[i];
    if (o != 0) {
      o->vtbl->Delete(o, 1);
    }
  }
  it = fn_82CE5410()->alloc;
  arr.count = 0;
  if ((arr.capacity & (1 << 31)) == 0) {
    it->vtbl->Free(it, arr.data, arr.capacity & 0x3fffffff, 4);
  }
}
