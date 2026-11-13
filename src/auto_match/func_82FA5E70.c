void fn_82FA5E70(int param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = (*(unsigned int *)(param_2 + 4) & 0xfffffffc) + *(int *)(param_1 + 4) + 4;
  *(unsigned int *)(param_1 + 4) = uVar1;
  *(int *)((uVar1 & 0xfffffffc) + param_1 + 4) = param_1;
  return;
}

