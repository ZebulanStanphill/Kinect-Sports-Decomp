extern int fn_82A302E8();


void fn_82A30690(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5,
                  unsigned __int64 param_6)

{
  int iVar1;
  
  iVar1 = fn_82A302E8(param_1,param_1 + 0x38,param_2,0,param_4,param_5,param_6);
  if (-1 < iVar1) {
    *param_3 = ((unsigned int)param_2 & 0xfff) + *param_5;
    if ((param_2 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x54)) {
      *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x54) + 0x1000;
    }
  }
  return;
}

