unsigned __int64 fn_83058E80(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int iVar1;
  
  *param_1 = param_3;
  param_1[1] = 1;
  iVar1 = (*(int (**)())*param_2)(param_2,0x1948);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(float *)(iVar1 + 0xc) = 1.0f;
  return 1;
}

