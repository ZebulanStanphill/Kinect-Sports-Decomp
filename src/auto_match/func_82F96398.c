unsigned int *
fn_82F96398(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned __int64 *param_5,unsigned char param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(unsigned __int64 *)(param_1 + 3) = *param_5;
  *(unsigned char *)(param_1 + 5) = param_6;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  return param_1;
}

