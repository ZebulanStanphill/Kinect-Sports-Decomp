extern double lbl_8216CC40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FA94A0(int param_1,int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x38) = param_2;
  if (param_4 < iVar1) {
    *(int *)(param_1 + 0x38) = param_2 - (int)((double)(__int64)(param_4 - iVar1) * lbl_8216CC40);
    param_4 = iVar1;
  }
  *(unsigned int *)(param_1 + 0x3c) = param_3;
  *(int *)(param_1 + 0x34) = param_4;
  *(int *)(param_1 + 0x48) = param_4;
  if (param_4 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = param_4;
  }
  return;
}

