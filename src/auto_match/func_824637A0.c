extern int fn_82292AE8();
extern int fn_822931D8();
extern int fn_824BC7E8();
extern int fn_82520D38();
extern void *fn_82549960(void *, void *, int, int, int, int);
extern void fn_82561778(void *, const char *, int);
extern void *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821BBE24;

unsigned int *fn_824637A0(unsigned int *param_1, char *param_2)
{
  void *mem;
  void *obj;
  int *piVar3;
  int iVar4;

  fn_82520D38();
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *param_1 = (unsigned int)&lbl_821BBE24;
  param_1[0x6f] = 0xffffffff;
  param_1[0x70] = 0xffffffff;
  param_1[0x71] = 0;
  param_1[0x72] = 0xffffffff;
  param_1[0x73] = 0xffffffff;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  fn_82561778(param_1 + 0xc, "WorkCamera", 0);
  mem = fn_8265C9E0(0x200);
  if (mem != 0) {
    obj = fn_82549960(mem, param_2 + 0x48, 0, 0, 0, 0);
  } else {
    obj = 0;
  }
  param_1[0x6e] = (unsigned int)obj;
  piVar3 = (int *)fn_824BC7E8();
  *(unsigned int *)(*piVar3 + 4) = 1;
  iVar4 = fn_82292AE8();
  *(unsigned int *)(iVar4 + 0x10) = 1;
  fn_822931D8();
  return param_1;
}
