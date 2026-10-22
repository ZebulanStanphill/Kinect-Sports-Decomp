typedef struct Obj Obj;
typedef struct ObjVt {
  void *f0;
  void *f4;
  void *f8;
  Obj *(*fc)(Obj *self);
} ObjVt;
struct Obj {
  ObjVt *vt;
};

typedef struct Big {
  char pad0[0x188];
  int f188;
  char pad18c[0x1cc - 0x18c];
  int f1cc;
  char pad1d0[0x3ec - 0x1d0];
  Obj *f3ec;
  char pad3f0[0x408 - 0x3f0];
  char f408[0x6b0 - 0x408];
  unsigned int f6b0;
  char pad6b4[0x70c - 0x6b4];
  int f70c;
  char pad710[0x7e0 - 0x710];
  int f7e0;
} Big;

extern void fn_8229A000(int a);
extern void fn_8229AAF8(int a);
extern void fn_8229F618(int a);
extern void fn_82408A28(int a, int b);
extern void fn_82455050(int a);
extern void fn_82458808(void *a);
extern void fn_82458E80(int a, int b, int c);

void fn_824084D8(int param_1)
{
  Big *b;
  int iVar1;
  Obj *o;

  b = *(Big **)(param_1 + 8);
  {
    unsigned int *pf = &b->f6b0;
    if (b->f70c != 0) {
      *pf |= 0x10;
    }
    *pf |= 2;
  }
  o = b->f3ec->vt->fc(b->f3ec);
  o->vt->fc(o);
  fn_82458E80(b->f7e0, b->f188, b->f1cc);
  fn_82458808(b->f408);
  fn_8229F618(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc));
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  fn_8229A000(iVar1 + 0x129c);
  *(int *)(iVar1 + 0x24cc) = -1;
  fn_8229A000(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0x68);
  fn_8229AAF8(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4));
  fn_82455050(*(int *)(param_1 + 0x3c));
  *(int *)(*(int *)(param_1 + 8) + 0xf0) = 0;
  fn_82408A28(param_1, 4);
}
