void fn_8282F8B0(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20) * 0x20;
  *param_2 = iVar1;
  iVar1 = *(int *)(param_1 + 0x24) * 4 + iVar1;
  *param_2 = iVar1;
  iVar1 = *(int *)(param_1 + 0x28) + iVar1;
  *param_2 = iVar1;
  *param_2 = *(int *)(param_1 + 0x2c) * 0x14 + iVar1;
  return;
}

