unsigned int fn_82A40B38(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = *param_2;
  if (param_2 == (unsigned int *)param_1[0x33]) {
    param_1[0x33] = param_2[1];
  }
  else {
    *(unsigned int *)(param_2[2] + 4) = param_2[1];
  }
  if (param_2 == (unsigned int *)param_1[0x34]) {
    param_1[0x34] = param_2[2];
  }
  else {
    *(unsigned int *)(param_2[1] + 8) = param_2[2];
  }
  param_2[1] = *param_1;
  *param_1 = param_2;
  param_1[0x35] = param_1[0x35] + -1;
  return uVar1;
}

