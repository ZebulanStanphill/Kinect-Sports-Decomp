typedef struct Obj_822B05B0 {
  char pad[0x2c]; int f2c;
  char pad2[0x110 - 0x30]; void *f110;
  char pad3[0x2b0 - 0x114]; int f2b0;
  char pad4[0x2e0 - 0x2b4]; int f2e0;
} Obj_822B05B0;
extern void fn_822AF138(void *, int);

int fn_822B05B0(void *unused, Obj_822B05B0 *o)
{
  if (o->f2c == 1) {
    if (o->f2e0 < 0x18) {
      fn_822AF138(o->f110, 2);
      return 1;
    }
    if (o->f2b0 != 0) { fn_822AF138(o->f110, 4); return 1; }
    fn_822AF138(o->f110, 3);
    return 1;
  }
  fn_822AF138(o->f110, 1);
  return 1;
}