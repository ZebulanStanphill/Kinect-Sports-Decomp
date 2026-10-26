extern float lbl_8217BCF0;

int fn_82FF8530(int *param_1)
{
  float f;
  if (*((unsigned char *)param_1 + 0x25) != 0) {
    return 2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  f = lbl_8217BCF0;
  param_1[0] = 0;
  *(float *)(param_1 + 8) = f;
  param_1[1] = 0;
  *((unsigned char *)param_1 + 0x25) = 1;
  *(unsigned char *)(param_1 + 9) = 0x32;
  return 1;
}
