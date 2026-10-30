extern int fn_82281868();
extern int fn_822819E0();
extern int fn_8247F240();
extern int fn_824809B0();
extern int fn_82484D38();
extern int fn_82485AC8();
extern int fn_82485BD8();
extern int fn_82486628();

typedef struct { int f0; int f4; int f8; int fc; unsigned f10; } In_82480B48;
typedef struct { int f0; int f4; } C_82480B48;
typedef struct {
  char pad0[0x14];
  In_82480B48 *f14;
  char pad18[0x48 - 0x18];
  C_82480B48 *f48;
  char pad4c[0xac - 0x4c];
  unsigned fac;
  char padb0[0x100 - 0xb0];
  int f100;
} Obj_82480B48;

void fn_82480B48(Obj_82480B48 *o)
{
  In_82480B48 *in;
  C_82480B48 *c;
  if (o->fac != 0) {
    o->f48->f4 = o->fac;
  }
  fn_82484D38(o->f48);
  fn_82485AC8(o->f48);
  fn_82486628(o->f48);
  fn_82485BD8(o->f48, 1);
  fn_8247F240(o, 1);
  fn_824809B0(o, (char *)o + 0x28);
  in = o->f14;
  c = o->f48;
  if (in->f10 != 0) {
    fn_82281868(in, c, 0);
  } else if (in->f8 != 0) {
    fn_822819E0(in, c);
  }
  o->f100 = 1;
}
