void fn_82D03AA8(unsigned char *param_1,int param_2,int *param_3)

{
  unsigned int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  iVar1 = (*(unsigned int *)(iVar1 + 4) & 0xfffffffc) + iVar1;
  *param_3 = iVar1;
  if (iVar1 == param_3[2]) {
    iVar1 = *(int *)(param_3[1] + 4);
    if (iVar1 == param_2 + 0xa4) {
      *param_3 = 0;
      *param_1 = 0;
      return;
    }
    param_3[1] = iVar1;
    *param_3 = *(int *)(iVar1 + 0x10);
    param_3[2] = *(int *)(iVar1 + 0x14) + -0x10;
  }
  *param_1 = 1;
  return;
}

