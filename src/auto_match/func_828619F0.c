void fn_828619F0(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7)

{
  *(float *)(param_1 + 0xfc) = (float)param_2;
  *(float *)(param_1 + 0x100) = (float)param_3;
  *(float *)(param_1 + 0x104) = (float)param_4;
  *(float *)(param_1 + 0x108) = (float)param_5;
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x18) & 0xfc | 2;
  *(float *)(param_1 + 0x10c) = (float)param_6;
  *(float *)(param_1 + 0x110) = (float)param_7;
  return;
}

