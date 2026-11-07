typedef unsigned int undefined4;

extern unsigned int fn_8265C9E0(unsigned int size);
extern unsigned int fn_8289F5F8(unsigned int *p, unsigned int v);
extern unsigned int fn_828A0428(unsigned int mem, unsigned int a, unsigned int b);
extern unsigned int fn_82BA02A8(unsigned int *p, unsigned int a, unsigned int b);
extern unsigned int lbl_82024338;

undefined4 * fn_828A0518(undefined4 *param_1, unsigned int param_2, unsigned int param_3)
{
  unsigned int mem;
  unsigned int obj;
  unsigned int *sub;

  *param_1 = (unsigned int)&lbl_82024338;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) {
    obj = fn_828A0428(mem, param_2, param_3);
  }
  else {
    obj = 0;
  }
  param_1[2] = obj;
  sub = param_1 + 2;
  fn_8289F5F8(sub + 1, obj);
  fn_82BA02A8(sub, obj, obj);
  return param_1;
}
