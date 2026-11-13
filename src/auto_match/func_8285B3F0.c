void fn_8285B3F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(unsigned int *)(iVar1 + param_3) = *(unsigned int *)(iVar1 + param_2);
  *(unsigned int *)(iVar1 + param_3 + 4) = *(unsigned int *)(iVar1 + param_2 + 4);
  return;
}

