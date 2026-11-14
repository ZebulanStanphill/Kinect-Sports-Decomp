extern void fn_822997C8(void *);
extern void fn_82299948(void *, int, int);
extern void fn_8229A560(void *, int);
extern void fn_8229F4F8(void *, int);
extern void *fn_8265C9E0(int);
extern void *XMemSet(void *, int, int);
extern int lbl_821AA90C;
typedef struct { void *vt; int p4, p8; void *pc; char pad[0x64 - 0x10]; int f64; char sub68[0x1298 - 0x68]; int f1298; char sub129c[0x24cc - 0x129c]; int f24cc; } Obj;
Obj **fn_82365118(Obj **out, int param_2)
{
  Obj *p, *mem;
  int z;
  mem = (Obj *)fn_8265C9E0(0x24d0);
  if (mem != 0) {
    fn_8229A560(mem, param_2);
    z = 0;
    mem->f64 = z;
    mem->vt = &lbl_821AA90C;
    fn_822997C8(mem->sub68);
    mem->f1298 = z;
    fn_82299948(mem->sub129c, 1, 0);
    mem->f24cc = -1;
    fn_8229F4F8(mem->pc, 1);
    XMemSet((char *)mem + 0x2c, 0, 0x38);
    p = mem;
  } else {
    p = 0;
  }
  *out = p;
  return out;
}
