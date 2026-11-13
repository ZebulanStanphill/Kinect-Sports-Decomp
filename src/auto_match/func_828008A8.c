unsigned int fn_828008A8(int param_1,int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)((param_2 + 8) * 4 + *(int *)(param_1 + 4));
  if (puVar1 != (unsigned int *)0x0) {
    return *puVar1;
  }
  return 0;
}

