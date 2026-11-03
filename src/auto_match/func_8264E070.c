typedef struct Obj_8264E070 {
  char pad[0x30];
  unsigned f30;
  unsigned f34;
  char pad38[0x12c];
  unsigned f164;
} Obj_8264E070;
extern unsigned **__imp_VdGlobalDevice;
extern unsigned **__imp_VdGlobalXamDevice;
extern int KeGetCurrentProcessType(void);
extern void fn_82644450(unsigned, void *, int);

void fn_8264E070(Obj_8264E070 *o)
{
  unsigned f = o->f30;
  int sign = (int)f >> 31;
  unsigned r;
  unsigned **dev;
  unsigned dv;
  struct { unsigned a, b, c; } pair;
  if (sign != 0) {
    r = 0x2aaaaaaa;
  } else if ((f & 0x40000000) != 0) {
    r = 0x15555555;
  } else {
    r = 0xffffffff;
  }
  if ((f & 0x20000000) != 0) {
    r = (3 << (o->f34 * 2)) & r;
    if (o->f34 == 0 && sign == 0) {
      r = r | 0x80000000;
    }
  }
  if (KeGetCurrentProcessType() == 2) {
    dv = *__imp_VdGlobalXamDevice;
  } else {
    dv = *__imp_VdGlobalDevice;
  }
  if (r != o->f164) {
    o->f164 = r;
    pair.a = 0xc0006200;
    pair.b = r;
    fn_82644450(dv, &pair, 2);
  }
}
