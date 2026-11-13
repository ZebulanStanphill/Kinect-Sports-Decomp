void fn_82A4FCF0(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  
  param_1[4] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = param_1 + 7;
  param_1[0xe] = 1;
  param_1[7] = 0;
  iVar1 = param_1[6];
  *(unsigned int *)(iVar1 + 8) = param_1[5];
  param_1[5] = iVar1 + 4;
  return;
}

