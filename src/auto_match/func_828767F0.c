unsigned __int64 fn_828767F0(int param_1,int param_2,unsigned int param_3)

{
  int unaff_10000048;
  int iVar1;
  
  if ((*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc) + 0x18U <=
       param_3) && (*(int *)(param_2 + 8) != 0)) {
    *(int *)(param_1 + 8) = param_2 + 0x18;
    iVar1 = *(int *)(param_2 + 0xc) + param_2 + 0x18;
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = *(int *)(unaff_10000048 + 0x10) + iVar1;
    return 1;
  }
  return 2;
}

