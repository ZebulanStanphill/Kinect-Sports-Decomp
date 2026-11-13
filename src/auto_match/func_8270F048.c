void fn_8270F048(unsigned int *param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  
  *(unsigned char *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    *(unsigned int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  param_1[3] = param_2;
  param_1[4] = 0;
  iVar1 = *param_3;
  param_1[5] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned __int64 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(unsigned char *)(param_1 + 0xe) = 1;
  *(unsigned char *)((int)param_1 + 0x39) = 0;
  return;
}

