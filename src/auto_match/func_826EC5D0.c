extern void fn_8267BE38(int a);
extern void fn_826EC330(unsigned int a, int b);
extern void fn_8277B488(void *a);

struct Ref_826EC5D0;
typedef struct RefVt_826EC5D0 {
  void *slots[17];
  void (*Release)(struct RefObj_826EC5D0 *, struct Ref_826EC5D0 *, int);
} RefVt_826EC5D0;
typedef struct RefObj_826EC5D0 { RefVt_826EC5D0 *vt; } RefObj_826EC5D0;
typedef struct Ref_826EC5D0 { RefObj_826EC5D0 *obj; int extra; } Ref_826EC5D0;

typedef struct Self_826EC5D0 {
  int pad0;
  int f4;
  char pad8[8];
  Ref_826EC5D0 ref10;
  int f18;
  char pad1c[8];
  unsigned int f24;
  char pad28[0x3c - 0x28];
  char sub3c[0x50 - 0x3c - 4 + 4];
  Ref_826EC5D0 ref50;
} Self_826EC5D0;

void fn_826EC5D0(Self_826EC5D0 *param_1)
{
  Ref_826EC5D0 *a;
  Ref_826EC5D0 *b;

  a = &param_1->ref50;
  if (a->obj != 0) {
    a->obj->vt->Release(a->obj, a, 1);
  }
  b = &param_1->ref10;
  a->obj = 0;
  a->extra = 0;
  if (b->obj != 0) {
    b->obj->vt->Release(b->obj, b, 1);
  }
  b->obj = 0;
  b->extra = 0;
  if (param_1->f24 != 0) {
    fn_826EC330(param_1->f24, 1);
  }
  fn_8277B488(param_1->sub3c);
  fn_8267BE38(param_1->f18);
  fn_8267BE38(param_1->f4);
}
