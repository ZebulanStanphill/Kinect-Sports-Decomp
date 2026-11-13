void fn_826AE9A8(unsigned int *param_1,int *param_2,unsigned int param_3)

{
  int iVar1;
  
  *param_1 = param_3;
  iVar1 = *param_2;
  param_1[1] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  param_1[2] = param_2[1];
  iVar1 = param_2[2];
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  param_1[3] = param_2[2];
  return;
}

