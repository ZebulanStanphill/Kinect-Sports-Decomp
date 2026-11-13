void fn_8284E2B8(int param_1,unsigned int *param_2)

{
  *param_2 = *(unsigned int *)(param_1 + 0x3c);
  param_2[1] = *(unsigned int *)(param_1 + 0x40);
  param_2[2] = *(unsigned int *)(param_1 + 0x44);
  return;
}

