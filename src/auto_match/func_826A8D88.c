void fn_826A8D88(unsigned int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(*param_1 + 0x284);
  *(unsigned int *)(iVar1 + 0xb00) = *(unsigned int *)(iVar1 + 0xb00) | 0x80000;
  return;
}

