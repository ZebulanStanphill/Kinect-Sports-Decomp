unsigned int  fn_8304C438(int param_1,unsigned int param_2,int *param_3)

{
  *param_3 = param_2 - (param_2 & 0xffffffc0);
  return (__int64)*(int *)(param_1 + 0x5c) * (__int64)(int)(param_2 >> 6);
}

