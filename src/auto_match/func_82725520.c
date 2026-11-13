void fn_82725520(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = (*(int (**)())(*(int *)(param_1 + -0xd8) + 0x40))(param_1 + -0xd8);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0xb00) = *(unsigned int *)(iVar1 + 0xb00) | 0x400;
  }
  return;
}

