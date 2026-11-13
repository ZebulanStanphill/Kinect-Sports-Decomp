void fn_826D29D0(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1c) * 8 + *(int *)(param_1 + 0x20));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  return;
}

