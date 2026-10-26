int fn_827FE8E8(int param_1, unsigned int param_2, float *param_3)
{
  if (param_2 < *(unsigned short *)(param_1 + 0xe8)) {
    *param_3 = (*(float **)(param_1 + 0xa0))[param_2];
    return 1;
  }
  return 0;
}
