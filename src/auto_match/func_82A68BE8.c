void fn_82A68BE8(unsigned int param_1,unsigned int param_2,__int64 param_3,int *param_4)

{
  unsigned __int64 uVar1;
  
  if ((int)(param_1 & 0xffff) < (int)((param_2 & 0xffff) * 8 - (param_2 & 0xffff))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (__int64)(int)(((param_1 & 0xffff) << 1) / (param_2 & 0xffff)) + 0xfff4U & 0xffff;
  }
  if (param_4 == (int *)0x0) {
    return;
  }
  *param_4 = (int)(((uVar1 + param_3) - 1 & 0xffffffff) / uVar1) * (int)uVar1 - (int)param_3;
  return;
}

