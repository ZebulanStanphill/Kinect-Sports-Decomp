void fn_8267AED0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 4);
  param_2[1] = 0;
  param_2[2] = 0;
  *(unsigned char *)(param_2 + 5) = 1;
  *param_2 = uVar1;
  return;
}

