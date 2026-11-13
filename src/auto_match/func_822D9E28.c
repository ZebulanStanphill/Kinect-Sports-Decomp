typedef unsigned char bool;


bool fn_822D9E28(unsigned int *param_1,int param_2,int param_3)

{
  return *(float *)(param_2 + 4) * *(float *)*param_1 +
         *(float *)(param_2 + 0x10) * *(float *)param_1[1] + *(float *)(param_2 + 8) <
         *(float *)(param_3 + 4) * *(float *)*param_1 +
         *(float *)(param_3 + 0x10) * *(float *)param_1[1] + *(float *)(param_3 + 8);
}

