unsigned int fn_82E1DE60(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(iVar1 + 0xc);
    return *(unsigned int *)(iVar1 + 4);
  }
  return 0;
}

