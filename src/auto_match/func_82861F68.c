void fn_82861F68(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  *(float *)(param_1 + 0x114) = (float)param_2;
  *(float *)(param_1 + 0x118) = (float)param_3;
  *(float *)(param_1 + 0x11c) = (float)param_4;
  *(float *)(param_1 + 0x120) = (float)param_5;
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x18) & 0xfc;
  return;
}

