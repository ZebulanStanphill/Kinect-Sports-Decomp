void fn_8255DAB8(int param_1,float *param_2,float *param_3,float *param_4)

{
  if (param_2 != (float *)0x0) {
    *param_2 = (*(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0x2d8)) *
               *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0xa8);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (*(float *)(param_1 + 0x2e0) - *(float *)(param_1 + 0x2d0)) *
               *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0xa0);
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  *param_4 = (*(float *)(param_1 + 0x2e4) - *(float *)(param_1 + 0x2d4)) *
             *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0xa4);
  return;
}

