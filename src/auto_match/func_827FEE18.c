void fn_827FEE18(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = **(unsigned int **)(iVar1 + 0x30);
  *param_3 = *(unsigned int *)(*(int *)(iVar1 + 0x30) + 4);
  *param_4 = *(unsigned int *)(*(int *)(iVar1 + 0x30) + 8);
  return;
}

