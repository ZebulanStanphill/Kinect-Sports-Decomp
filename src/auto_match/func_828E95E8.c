extern void *fn_8265C9E0(unsigned);
extern void fn_828E6590(void *, void *);
extern void *fn_828E8BE8(void *, void *);
extern void fn_828E9528(void *);
extern void fn_82BA02A8(void *, void *, void *);

void *fn_828E95E8(void **param_1, void *param_2, void *param_3)
{
  void *mem;
  void *o;
  fn_828E9528(param_2);
  mem = fn_8265C9E0(0x70);
  o = mem ? fn_828E8BE8(mem, param_3) : 0;
  *param_1 = o;
  fn_828E6590(param_1 + 1, o);
  fn_82BA02A8(param_1, o, o);
  return param_1;
}
