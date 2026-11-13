void fn_8307FFA0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  *param_1 = (((int)*param_2 >> 0x1f | 0x80000001U) ^ *param_2) >> 1;
  param_1[1] = (((int)param_2[1] >> 0x1f | 0x80000001U) ^ param_2[1]) >> 1;
  uVar1 = param_2[2];
  param_1[3] = param_3;
  param_1[2] = (((int)uVar1 >> 0x1f | 0x80000001U) ^ uVar1) >> 1;
  param_1[4] = ((((int)param_2[4] >> 0x1f | 0x80000001U) ^ param_2[4]) >> 1) + 1;
  param_1[5] = ((((int)param_2[5] >> 0x1f | 0x80000001U) ^ param_2[5]) >> 1) + 1;
  param_1[6] = ((((int)param_2[6] >> 0x1f | 0x80000001U) ^ param_2[6]) >> 1) + 1;
  return;
}

