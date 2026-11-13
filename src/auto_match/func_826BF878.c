typedef unsigned char bool;

typedef struct Iface Iface;
typedef struct IfaceVtbl {
  void *pad[18];
  bool (*fn48)(Iface *self, unsigned __int64 a, unsigned __int64 b, int c);
} IfaceVtbl;
struct Iface {
  IfaceVtbl *vtbl;
};

typedef struct Obj {
  int f0;
  int f4;
  unsigned int refs;
  int fc;
  Iface iface;
} Obj;

typedef struct Vec {
  int *data;
  unsigned int count;
} Vec;

extern void fn_826824B0(Obj *p);

bool fn_826BF878(int param_1, unsigned __int64 param_2, unsigned __int64 param_3)
{
  Vec *v;
  unsigned int n;
  unsigned int i;

  v = *(Vec **)(param_1 + 0x1c);
  if (v != 0) {
    n = v->count;
    for (i = 0; i < n; i++) {
      int *slot = (*(Vec **)(param_1 + 0x1c))->data + i;
      Obj *p;
      int h = *slot;
      if (h != 0) {
        ((Obj *)h)->refs = (((Obj *)h)->refs + 1) & 0x8fffffff;
      }
      p = (Obj *)*slot;
      if (p != 0) {
        if (p->iface.vtbl->fn48(&p->iface, param_2, param_3, 1)) {
          fn_826824B0(p);
          return 1;
        }
        fn_826824B0(p);
      }
    }
  }
  return 0;
}
