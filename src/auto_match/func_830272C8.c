extern float fn_8301E178(float x);

int fn_830272C8(int param_1, float x)
{
  *(float *)(param_1 + 0x14) = fn_8301E178(x) * 0.5f;
  return 1;
}
