typedef void (*Fn_82E84A00)(void);
typedef struct {
  char pad0[0x2f0];
  int f2f0; int f2f4; int f2f8; int f2fc;
  char pad1[0x648 - 0x300];
  int f648;
  char pad2[0x1f7c - 0x64c];
  Fn_82E84A00 f1f7c;
  Fn_82E84A00 pad1f80;
  Fn_82E84A00 f1f84;
  Fn_82E84A00 f1f88;
  unsigned int f1f8c;
  Fn_82E84A00 f1f90;
  char pad3[0x6f8c - 0x1f94];
  int f6f8c;
} Obj_82E84A00;
extern void fn_82BA02A8(void);
extern void fn_82F09EE0(void);
extern void fn_82F0A3B0(void);
extern void fn_82F0A9F0(void);
extern void fn_82F0AC28(void);
extern void fn_82F0BA40(void);
extern void fn_82F0BE40(void);
extern void fn_82F0CB98(void);

void fn_82E84A00(Obj_82E84A00 *o)
{
  o->f1f90 = fn_82BA02A8;
  if (o->f648 != 0) {
    o->f1f84 = fn_82F0AC28;
    o->f1f8c = (unsigned int)fn_82F0BE40;
    o->f1f90 = fn_82F0CB98;
  } else {
    o->f1f84 = fn_82F0BA40;
    o->f1f8c = (unsigned int)o->f1f84;
  }
  o->f2f8 = 0;
  o->f2f0 = 0;
  o->f1f7c = fn_82F0A9F0;
  o->f2fc = 3;
  o->f2f4 = 8;
  if (o->f1f84 == fn_82F0A3B0) {
    o->f6f8c = 1;
    o->f1f88 = fn_82F09EE0;
    return;
  }
  o->f6f8c = 1;
  o->f1f88 = o->f1f84;
}
