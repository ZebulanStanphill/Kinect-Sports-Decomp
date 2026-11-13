void fn_827F94D8(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(param_2 * 0x34 + *(int *)(param_1 + 8));
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  return;
}

