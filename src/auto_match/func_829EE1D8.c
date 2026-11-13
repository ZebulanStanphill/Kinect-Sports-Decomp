extern int fn_829EE168();


void fn_829EE1D8(int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  
  if (param_2 < (unsigned int)((param_1[3] - param_1[2]) / 0x24)) {
    fn_829EE168(param_2 * 0x24 + param_1[2],param_4);
    *(unsigned int *)(param_2 * 4 + param_1[7]) = param_3;
    iVar1 = *(int *)(param_2 * 0x24 + param_1[2]);
    if (iVar1 < 0) {
      *param_1 = iVar1;
    }
  }
  else {
    *param_1 = -0x7ff8ffa9;
  }
  return;
}

