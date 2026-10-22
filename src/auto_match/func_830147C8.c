typedef struct Iface Iface;
typedef struct IfaceVtbl {
  void *f0;
  void *f4;
  void (*Release)(Iface *self);
  void *fc[7];
  void (*f28)(Iface *self, void *a, void *b, void *c);
} IfaceVtbl;
struct Iface {
  IfaceVtbl *vtbl;
};

typedef struct Obj {
  char pad0[0x38];
  int x38;
  void *x3c;
  char pad40[0x10];
  void *x50;
  char pad54[0xc];
  void *x60;
  char pad64[8];
  void *x6c;
  char pad70[8];
  int x78;
} Obj;

extern Iface *fn_82FAB9C0(void *table, void *key);
extern void fn_82FFF510(Iface *p, void *a, void *b);
extern void fn_83010288(void *a, void *b);
extern char *lbl_832642E0;
extern void *lbl_832642E4;

int fn_830147C8(Obj *o, int flag)
{
  Iface *p;

  o->x38 = 0;
  o->x78 = 0;
  fn_83010288(lbl_832642E4, o->x50);
  if (o->x6c != 0 && flag == 0) {
    p = fn_82FAB9C0(lbl_832642E0 + 4, o->x6c);
    if (p != 0) {
      fn_82FFF510(p, o->x3c, o->x50);
      p->vtbl->Release(p);
    }
    o->x6c = 0;
  }
  if (o->x60 != 0) {
    p = fn_82FAB9C0(lbl_832642E0 + 4, o->x60);
    if (p != 0) {
      if (flag == 0) {
        fn_82FFF510(p, o->x3c, o->x50);
      } else {
        p->vtbl->f28(p, o->x3c, o->x60, o->x50);
      }
      p->vtbl->Release(p);
    }
  }
  return 1;
}
