extern unsigned int *auStack_40;
extern int fn_8267ADA8();
extern int fn_8267BC98();
extern int fn_8267C2D8();
extern unsigned int lbl_82005B74;
extern unsigned int lbl_831E7E64;


unsigned int * fn_826878E8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int auStack_40 [10];
  
  param_1[1] = 1;
  *param_1 = &lbl_82005B74;
  fn_8267ADA8(param_1 + 3,0);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[2] = param_2;
  if ((param_2 == 0) || (auStack_40[0] = 0x1000, *(char *)(param_2 + 0x10) == '\0')) {
    auStack_40[0] = 0;
  }
  auStack_40[0] = auStack_40[0] | 4;
  auStack_40[7] = 0;
  auStack_40[3] = 0;
  auStack_40[1] = 0x40;
  auStack_40[5] = 0;
  auStack_40[2] = 0x1000;
  auStack_40[4] = 0xffffffff;
  auStack_40[6] = 7;
  uVar1 = fn_8267C2D8(lbl_831E7E64,0xffffffff82005b60,auStack_40);
  if (param_1[0xb] != 0) {
    fn_8267BC98(param_1[0xb]);
  }
  param_1[0xb] = uVar1;
  return param_1;
}

