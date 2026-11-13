extern void *fn_82299948(void *p, int a, int b);
extern void fn_8229A7B8(void *p);
extern void fn_8229F4F8(void *p, int a);
extern void *fn_8265C9E0(unsigned int size);
extern unsigned int lbl_821AAF44;

unsigned int *fn_8229AFA8(unsigned int *param_1)
{
  void *p;

  fn_8229A7B8(param_1);
  param_1[0xb] = 0;
  *param_1 = (unsigned int)&lbl_821AAF44;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  p = fn_8265C9E0(0x1230);
  param_1[0xe] = (unsigned int)(p ? fn_82299948(p, 7, 0) : 0);
  p = fn_8265C9E0(0x1230);
  param_1[0xf] = (unsigned int)(p ? fn_82299948(p, 5, 0) : 0);
  fn_8229F4F8((void *)param_1[3], 0);
  return param_1;
}
