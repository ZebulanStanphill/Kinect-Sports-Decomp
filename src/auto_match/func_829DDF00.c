unsigned int fn_829DDF00(int param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *param_2;
  uVar2 = -((unsigned int)(param_2[1] < param_2[3]) - ((int)param_2[1] >> 0x1f)) - ((int)param_2[3] >> 0x1f)
          & -((unsigned int)(uVar1 < param_2[2]) - ((int)uVar1 >> 0x1f)) - ((int)param_2[2] >> 0x1f) & 1;
  if (((int)uVar1 < param_3) && (*param_4 = *param_4 | 0x80, (int)*param_2 < 0)) {
    uVar2 = 0;
    *param_2 = 0;
  }
  if ((int)param_2[1] < 0) {
    uVar2 = 0;
    *param_4 = *param_4 | 0x200;
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 4) - param_3 < (int)param_2[2]) {
    *param_4 = *param_4 | 0x100;
    if ((int)*(unsigned int *)(param_1 + 4) < (int)param_2[2]) {
      param_2[2] = *(unsigned int *)(param_1 + 4);
      uVar2 = 0;
    }
  }
  if ((int)*(unsigned int *)(param_1 + 8) <= (int)param_2[3]) {
    param_2[3] = *(unsigned int *)(param_1 + 8);
    uVar2 = 0;
    *param_4 = *param_4 | 0x400;
  }
  return uVar2;
}

