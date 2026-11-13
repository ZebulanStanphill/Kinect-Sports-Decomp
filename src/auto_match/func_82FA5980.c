int fn_82FA5980(int param_1)

{
  int iVar1;
  
  iVar1 = (*(unsigned int *)(param_1 + 4) & 0xfffffffc) + param_1;
  *(int *)(iVar1 + 4) = param_1;
  return iVar1 + 4;
}

