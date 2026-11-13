extern int fn_8265C940();


unsigned __int64 fn_82A3F7B8(int *param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_8265C940((__int64)param_3 * (__int64)(int)param_4,0x24970000);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar1 = 0xffffffff8007000e;
    param_1[1] = 0;
  }
  else {
    param_1[1] = param_3;
    uVar1 = 0;
    iVar2 = (1 << (param_4 & 0x3f)) + -1;
  }
  param_1[2] = iVar2;
  return uVar1;
}

