unsigned int fn_82BD4AB0(int param_1,int param_2)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)((param_2 + 0x14) * 4 + param_1);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
    return *(unsigned int *)(iVar1 + 0x90);
  }
  return 0;
}

