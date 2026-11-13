void fn_826AFA48(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  iVar1 = param_2[1];
  param_1[1] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  param_1[2] = param_2[2];
  iVar1 = param_2[3];
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  param_1[3] = param_2[3];
  return;
}

