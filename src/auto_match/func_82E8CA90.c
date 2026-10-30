typedef struct { int f0; int f4; int f8; int fc; unsigned f10; } Bits_82E8CA90;
typedef struct Obj_82E8CA90 {
  char pad0[0x31c]; int f31c; int f320;
  char pad324[0x604 - 0x324]; int f604;
  char pad608[0x62c - 0x608]; int f62c;
  char pad630[0x658 - 0x630]; int f658;
  char pad65c[0x1e08 - 0x65c]; double f1e08;
  char pad1e10[0x1ebc - 0x1e10]; Bits_82E8CA90 *f1ebc;
} Obj_82E8CA90;
extern void fn_82F02410(Bits_82E8CA90 *, int, int);
extern void fn_82F025F0(Bits_82E8CA90 *);
extern void fn_82F023B0(Bits_82E8CA90 *);
extern double lbl_8215F5F0;

void fn_82E8CA90(Obj_82E8CA90 *o, int unused, int *out)
{
  int v;
  if (o->f1e08 >= lbl_8215F5F0) v = 0x1f;
  else v = (int)o->f1e08;
  fn_82F02410(o->f1ebc, o->f31c, 0xb);
  fn_82F02410(o->f1ebc, o->f320, 0xb);
  fn_82F02410(o->f1ebc, v, 5);
  fn_82F02410(o->f1ebc, o->f62c, 1);
  fn_82F02410(o->f1ebc, o->f604, 1);
  fn_82F02410(o->f1ebc, o->f658, 3);
  fn_82F025F0(o->f1ebc);
  *out = ((0x27 - o->f1ebc->f10) >> 3) + o->f1ebc->f4;
  fn_82F023B0(o->f1ebc);
}
