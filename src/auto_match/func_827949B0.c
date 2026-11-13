void fn_827949B0(unsigned int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(unsigned short *)(param_1 + 9) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  *(int *)(param_2 + 0x18) = iVar1 + 1;
  param_1[8] = iVar1;
  return;
}

