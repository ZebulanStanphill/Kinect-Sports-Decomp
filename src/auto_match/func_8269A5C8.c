void fn_8269A5C8(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  char param_6)

{
  *(float *)(param_3 + 0x5c) = (float)param_1;
  *(float *)(param_3 + 0x60) = (float)param_2;
  *(unsigned char *)(param_3 + 0x66) = *(unsigned char *)(param_3 + 0x66) & 0xf3 | (-(param_6 != '\0') & 4U) + 4;
  return;
}

