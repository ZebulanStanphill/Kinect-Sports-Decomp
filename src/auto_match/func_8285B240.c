void fn_8285B240(int param_1,int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x50) + param_2);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

