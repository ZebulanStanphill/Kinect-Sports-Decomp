void fn_82DAF730(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if (*(int *)(param_1 + 8) > *(int *)(param_2 + 8)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_2 + 0xc) + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14) + *(int *)(param_1 + 0x14);
  return;
}

