void fn_83060418(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_3 * 8 + *(int *)(param_2 + 4) + 4);
  *param_1 = *(unsigned int *)(param_3 * 8 + *(int *)(param_2 + 4));
  param_1[1] = uVar1;
  return;
}

